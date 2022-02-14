
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netlink_sock {int (* netlink_unbind ) (int ,int) ;} ;


 struct netlink_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, long unsigned int VAR_1,
         struct sock *VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 if (!VAR_3->netlink_unbind)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_3(VAR_4, &VAR_1))
   VAR_3->netlink_unbind(FUNC_1(VAR_2), VAR_4 + 1);
}
