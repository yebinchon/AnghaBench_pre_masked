
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ip_set_adt_opt {int dummy; } ;
typedef int ip_set_id_t ;


 scalar_t__ FUNC_0 (int ,struct sk_buff const*,struct xt_action_param const*,struct ip_set_adt_opt*) ;

__attribute__((used)) static inline int
FUNC_1(ip_set_id_t VAR_0, const struct sk_buff *VAR_1,
   const struct xt_action_param *VAR_2,
   struct ip_set_adt_opt *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  VAR_4 = !VAR_4;
 return VAR_4;
}
