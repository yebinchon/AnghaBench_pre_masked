
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock const*,struct sk_buff const*) ;
 int FUNC_2 (struct sock const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct sock *VAR_1,
        const struct sk_buff *VAR_2)
{
 if (FUNC_3(FUNC_1(VAR_1, VAR_2))) {
  FUNC_0(FUNC_2(VAR_1),
         VAR_0);
  return 1;
 }
 return 0;
}
