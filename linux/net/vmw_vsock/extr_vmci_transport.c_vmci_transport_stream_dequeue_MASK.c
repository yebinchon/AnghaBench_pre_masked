
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct msghdr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int qpair; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msghdr*,size_t,int ) ;
 int FUNC_1 (int ,struct msghdr*,size_t,int ) ;
 TYPE_1__* FUNC_2 (struct vsock_sock*) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct vsock_sock *VAR_1,
 struct msghdr *VAR_2,
 size_t VAR_3,
 int VAR_4)
{
 if (VAR_4 & VAR_0)
  return FUNC_1(FUNC_2(VAR_1)->qpair, VAR_2, VAR_3, 0);
 else
  return FUNC_0(FUNC_2(VAR_1)->qpair, VAR_2, VAR_3, 0);
}
