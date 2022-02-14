
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct msghdr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int qpair; } ;


 int FUNC_0 (int ,struct msghdr*,size_t,int ) ;
 TYPE_1__* FUNC_1 (struct vsock_sock*) ;

__attribute__((used)) static ssize_t FUNC_2(
 struct vsock_sock *VAR_0,
 struct msghdr *VAR_1,
 size_t VAR_2)
{
 return FUNC_0(FUNC_1(VAR_0)->qpair, VAR_1, VAR_2, 0);
}
