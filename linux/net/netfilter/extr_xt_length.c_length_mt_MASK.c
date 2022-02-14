
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct xt_length_info {scalar_t__ min; scalar_t__ max; int invert; } ;
struct xt_action_param {struct xt_length_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tot_len; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_length_info *VAR_2 = VAR_1->matchinfo;
 u_int16_t VAR_3 = FUNC_1(FUNC_0(VAR_0)->tot_len);

 return (VAR_3 >= VAR_2->min && VAR_3 <= VAR_2->max) ^ VAR_2->invert;
}
