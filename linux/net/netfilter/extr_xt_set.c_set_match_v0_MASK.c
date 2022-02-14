
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int dim; } ;
struct TYPE_6__ {TYPE_2__ compat; } ;
struct TYPE_4__ {TYPE_3__ u; int index; } ;
struct xt_set_info_match_v0 {TYPE_1__ match_set; } ;
struct xt_action_param {struct xt_set_info_match_v0* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sk_buff const*,struct xt_action_param*,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 const struct xt_set_info_match_v0 *VAR_5 = VAR_4->matchinfo;

 FUNC_0(VAR_2, FUNC_2(VAR_4), VAR_5->match_set.u.compat.dim,
  VAR_5->match_set.u.compat.flags, 0, VAR_1,
  0, 0, 0, 0);

 return FUNC_1(VAR_5->match_set.index, VAR_3, VAR_4, &VAR_2,
    VAR_5->match_set.u.compat.flags & VAR_0);
}
