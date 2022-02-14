
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int index; int dim; } ;
struct xt_set_info_match_v1 {TYPE_1__ match_set; } ;
struct xt_action_param {struct xt_set_info_match_v1* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int flags; int cmdflags; } ;


 int FUNC_0 (TYPE_2__,int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sk_buff const*,struct xt_action_param*,TYPE_2__*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_set_info_match_v1 *VAR_7 = VAR_6->matchinfo;

 FUNC_0(VAR_4, FUNC_2(VAR_6), VAR_7->match_set.dim,
  VAR_7->match_set.flags, 0, VAR_3,
  0, 0, 0, 0);

 if (VAR_4.flags & VAR_2)
  VAR_4.cmdflags |= VAR_0;

 return FUNC_1(VAR_7->match_set.index, VAR_5, VAR_6, &VAR_4,
    VAR_7->match_set.flags & VAR_1);
}
