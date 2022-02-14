
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fraghdr; } ;
struct sock_xprt {int sock; TYPE_1__ recv; } ;
struct msghdr {int dummy; } ;
struct kvec {size_t iov_len; int * iov_base; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,struct msghdr*,int,struct kvec*,size_t,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct sock_xprt *VAR_0, struct msghdr *VAR_1,
  int VAR_2, size_t VAR_3, size_t VAR_4)
{
 struct kvec VAR_5 = {
  .iov_base = &VAR_0->recv.fraghdr,
  .iov_len = VAR_3,
 };
 return FUNC_0(VAR_0->sock, VAR_1, VAR_2, &VAR_5, VAR_3, VAR_4);
}
