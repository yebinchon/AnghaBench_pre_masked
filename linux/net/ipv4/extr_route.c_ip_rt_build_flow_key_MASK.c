
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct flowi4 {int dummy; } ;


 int FUNC_0 (struct flowi4*,struct sock const*) ;
 int FUNC_1 (struct flowi4*,struct sk_buff const*,struct sock const*) ;

__attribute__((used)) static void FUNC_2(struct flowi4 *VAR_0, const struct sock *VAR_1,
     const struct sk_buff *VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
