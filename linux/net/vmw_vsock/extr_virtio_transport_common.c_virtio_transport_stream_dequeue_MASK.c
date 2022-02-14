
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct msghdr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vsock_sock*,struct msghdr*,size_t) ;

ssize_t
FUNC_1(struct vsock_sock *VAR_2,
    struct msghdr *VAR_3,
    size_t VAR_4, int VAR_5)
{
 if (VAR_5 & VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
