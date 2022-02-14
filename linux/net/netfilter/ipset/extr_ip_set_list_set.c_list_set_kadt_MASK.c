
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ip_set_ext {int dummy; } ;
struct ip_set_adt_opt {int dummy; } ;
struct ip_set {int dummy; } ;
typedef enum ipset_adt { ____Placeholder_ipset_adt } ipset_adt ;


 int VAR_0 ;



 struct ip_set_ext FUNC_0 (struct sk_buff const*,struct ip_set_adt_opt*,struct ip_set*) ;
 int FUNC_1 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,struct ip_set_adt_opt*,struct ip_set_ext*) ;
 int FUNC_2 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,struct ip_set_adt_opt*,struct ip_set_ext*) ;
 int FUNC_3 (struct ip_set*,struct sk_buff const*,struct xt_action_param const*,struct ip_set_adt_opt*,struct ip_set_ext*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct ip_set *VAR_1, const struct sk_buff *VAR_2,
       const struct xt_action_param *VAR_3,
       enum ipset_adt VAR_4, struct ip_set_adt_opt *VAR_5)
{
 struct ip_set_ext VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_1);
 int VAR_7 = -VAR_0;

 FUNC_4();
 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_6);
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_6);
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_6);
  break;
 default:
  break;
 }
 FUNC_5();

 return VAR_7;
}
