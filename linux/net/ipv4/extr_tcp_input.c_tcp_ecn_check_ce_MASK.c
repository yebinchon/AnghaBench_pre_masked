
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ecn_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff const*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, const struct sk_buff *VAR_2)
{
 if (FUNC_1(VAR_1)->ecn_flags & VAR_0)
  FUNC_0(VAR_1, VAR_2);
}
