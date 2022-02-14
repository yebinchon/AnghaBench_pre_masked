
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct tipc_sock {struct sock sk; } ;
struct tipc_msg {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct tipc_sock*) ;
 scalar_t__ FUNC_7 (struct tipc_sock*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(struct tipc_sock *VAR_0, struct tipc_msg *VAR_1)
{
 struct sock *VAR_2 = &VAR_0->sk;
 u32 VAR_3 = FUNC_4(FUNC_3(VAR_2));
 u32 VAR_4 = FUNC_7(VAR_0);
 u32 VAR_5, VAR_6;

 if (FUNC_8(!FUNC_5(VAR_2)))
  return 0;

 if (FUNC_8(FUNC_2(VAR_1) != VAR_4))
  return 0;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = FUNC_6(VAR_0);

 if (FUNC_0(VAR_5 == VAR_6))
  return 1;

 if (!VAR_5 && VAR_6 == VAR_3)
  return 1;

 if (!VAR_6 && VAR_5 == VAR_3)
  return 1;

 return 0;
}
