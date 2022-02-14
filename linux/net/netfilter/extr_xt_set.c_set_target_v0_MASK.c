
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int dim; } ;
struct TYPE_10__ {TYPE_3__ compat; } ;
struct TYPE_12__ {scalar_t__ index; TYPE_4__ u; } ;
struct TYPE_7__ {int flags; int dim; } ;
struct TYPE_8__ {TYPE_1__ compat; } ;
struct TYPE_11__ {scalar_t__ index; TYPE_2__ u; } ;
struct xt_set_info_target_v0 {TYPE_6__ del_set; TYPE_5__ add_set; } ;
struct xt_action_param {struct xt_set_info_target_v0* targinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct xt_action_param const*,int *) ;
 int FUNC_2 (scalar_t__,struct sk_buff*,struct xt_action_param const*,int *) ;
 int FUNC_3 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_5, const struct xt_action_param *VAR_6)
{
 const struct xt_set_info_target_v0 *VAR_7 = VAR_6->targinfo;

 FUNC_0(VAR_3, FUNC_3(VAR_6), VAR_7->add_set.u.compat.dim,
  VAR_7->add_set.u.compat.flags, 0, VAR_1,
  0, 0, 0, 0);
 FUNC_0(VAR_4, FUNC_3(VAR_6), VAR_7->del_set.u.compat.dim,
  VAR_7->del_set.u.compat.flags, 0, VAR_1,
  0, 0, 0, 0);

 if (VAR_7->add_set.index != VAR_0)
  FUNC_1(VAR_7->add_set.index, VAR_5, VAR_6, &VAR_3);
 if (VAR_7->del_set.index != VAR_0)
  FUNC_2(VAR_7->del_set.index, VAR_5, VAR_6, &VAR_4);

 return VAR_2;
}
