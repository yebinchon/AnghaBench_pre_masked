
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int copied; size_t offset; int calldir; int fraghdr; } ;
struct sock_xprt {TYPE_1__ recv; int sock; } ;
struct msghdr {int msg_flags; int member_0; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sock_xprt*) ;
 size_t FUNC_3 (int ,struct msghdr*,int,int) ;
 size_t FUNC_4 (struct sock_xprt*,struct msghdr*,int) ;
 size_t FUNC_5 (struct sock_xprt*,struct msghdr*,int,size_t,size_t) ;
 size_t FUNC_6 (int) ;
 size_t FUNC_7 (struct sock_xprt*,struct msghdr*,int) ;
 scalar_t__ FUNC_8 (struct sock_xprt*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct sock_xprt *VAR_3, int VAR_4)
{
 struct msghdr VAR_5 = { 0 };
 size_t VAR_6, VAR_7 = 0;
 ssize_t VAR_8 = 0;

 if (VAR_3->recv.len == 0) {
  VAR_6 = FUNC_6(VAR_3->recv.copied != 0);
  VAR_8 = FUNC_5(VAR_3, &VAR_5, VAR_4, VAR_6,
    VAR_3->recv.offset);
  if (VAR_8 <= 0)
   goto out_err;
  VAR_3->recv.offset = VAR_8;
  if (VAR_3->recv.offset != VAR_6)
   return VAR_3->recv.offset;
  VAR_3->recv.len = FUNC_0(VAR_3->recv.fraghdr) &
   VAR_2;
  VAR_3->recv.offset -= sizeof(VAR_3->recv.fraghdr);
  VAR_7 = VAR_8;
 }

 switch (FUNC_0(VAR_3->recv.calldir)) {
 default:
  VAR_5.msg_flags |= VAR_1;
  break;
 case 129:
  VAR_8 = FUNC_4(VAR_3, &VAR_5, VAR_4);
  break;
 case 128:
  VAR_8 = FUNC_7(VAR_3, &VAR_5, VAR_4);
 }
 if (VAR_5.msg_flags & VAR_1) {
  VAR_3->recv.calldir = FUNC_1(-1);
  VAR_3->recv.copied = -1;
 }
 if (VAR_8 < 0)
  goto out_err;
 VAR_7 += VAR_8;
 if (VAR_3->recv.offset < VAR_3->recv.len) {
  if (!(VAR_5.msg_flags & VAR_1))
   return VAR_7;
  VAR_5.msg_flags = 0;
  VAR_8 = FUNC_3(VAR_3->sock, &VAR_5, VAR_4,
    VAR_3->recv.len - VAR_3->recv.offset);
  if (VAR_8 <= 0)
   goto out_err;
  VAR_3->recv.offset += VAR_8;
  VAR_7 += VAR_8;
  if (VAR_3->recv.offset != VAR_3->recv.len)
   return VAR_7;
 }
 if (FUNC_8(VAR_3)) {
  FUNC_2(VAR_3);
  VAR_3->recv.copied = 0;
 }
 VAR_3->recv.offset = 0;
 VAR_3->recv.len = 0;
 return VAR_7;
out_err:
 return VAR_8 != 0 ? VAR_8 : -VAR_0;
}
