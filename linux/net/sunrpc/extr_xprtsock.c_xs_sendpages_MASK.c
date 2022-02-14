
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {unsigned int len; unsigned int page_len; TYPE_1__* tail; TYPE_1__* head; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; int msg_flags; struct sockaddr* msg_name; } ;
typedef int rpc_fraghdr ;
typedef int rm ;
struct TYPE_3__ {unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct socket*,struct msghdr*,TYPE_1__*,unsigned int) ;
 int FUNC_2 (struct socket*,struct msghdr*,struct xdr_buf*,unsigned int) ;
 int FUNC_3 (struct socket*,struct msghdr*,int ,TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4, int VAR_5, struct xdr_buf *VAR_6, unsigned int VAR_7, rpc_fraghdr VAR_8, int *VAR_9)
{
 struct msghdr VAR_10 = {
  .msg_name = VAR_4,
  .msg_namelen = VAR_5,
  .msg_flags = VAR_2 | VAR_1,
 };
 unsigned int VAR_11 = VAR_8 ? sizeof(VAR_8) : 0;
 unsigned int VAR_12 = VAR_11 + VAR_6->len - VAR_7;
 unsigned int VAR_13;
 int VAR_14 = 0;

 if (FUNC_0(!VAR_3))
  return -VAR_0;

 VAR_13 = VAR_6->head[0].iov_len + VAR_11;
 if (VAR_7 < VAR_13) {
  unsigned int VAR_15 = VAR_13 - VAR_7;
  VAR_12 -= VAR_15;
  if (VAR_12 == 0)
   VAR_10.msg_flags &= ~VAR_1;
  if (VAR_11)
   VAR_14 = FUNC_3(VAR_3, &VAR_10, VAR_8,
     &VAR_6->head[0], VAR_7);
  else
   VAR_14 = FUNC_1(VAR_3, &VAR_10, &VAR_6->head[0], VAR_7);
  if (VAR_12 == 0 || VAR_14 != VAR_15)
   goto out;
  *VAR_9 += VAR_14;
  VAR_7 = 0;
 } else
  VAR_7 -= VAR_13;

 if (VAR_7 < VAR_6->page_len) {
  unsigned int VAR_16 = VAR_6->page_len - VAR_7;
  VAR_12 -= VAR_16;
  if (VAR_12 == 0)
   VAR_10.msg_flags &= ~VAR_1;
  VAR_14 = FUNC_2(VAR_3, &VAR_10, VAR_6, VAR_7);
  if (VAR_12 == 0 || VAR_14 != VAR_16)
   goto out;
  *VAR_9 += VAR_14;
  VAR_7 = 0;
 } else
  VAR_7 -= VAR_6->page_len;

 if (VAR_7 >= VAR_6->tail[0].iov_len)
  return 0;
 VAR_10.msg_flags &= ~VAR_1;
 VAR_14 = FUNC_1(VAR_3, &VAR_10, &VAR_6->tail[0], VAR_7);
out:
 if (VAR_14 > 0) {
  *VAR_9 += VAR_14;
  VAR_14 = 0;
 }
 return VAR_14;
}
