
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ index; int flags; int dim; } ;
struct TYPE_10__ {scalar_t__ index; int flags; int dim; } ;
struct xt_set_info_target_v2 {TYPE_3__ del_set; TYPE_2__ add_set; int timeout; int flags; } ;
struct xt_action_param {struct xt_set_info_target_v2* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {scalar_t__ timeout; } ;
struct TYPE_12__ {TYPE_1__ ext; } ;


 int FUNC_0 (TYPE_4__,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct xt_action_param const*,TYPE_4__*) ;
 int FUNC_2 (scalar_t__,struct sk_buff*,struct xt_action_param const*,TYPE_4__*) ;
 int FUNC_3 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_7, const struct xt_action_param *VAR_8)
{
 const struct xt_set_info_target_v2 *VAR_9 = VAR_8->targinfo;

 FUNC_0(VAR_5, FUNC_3(VAR_8), VAR_9->add_set.dim,
  VAR_9->add_set.flags, VAR_9->flags, VAR_9->timeout,
  0, 0, 0, 0);
 FUNC_0(VAR_6, FUNC_3(VAR_8), VAR_9->del_set.dim,
  VAR_9->del_set.flags, 0, VAR_3,
  0, 0, 0, 0);


 if (VAR_5.ext.timeout != VAR_2 &&
     VAR_5.ext.timeout > VAR_1)
  VAR_5.ext.timeout = VAR_1;
 if (VAR_9->add_set.index != VAR_0)
  FUNC_1(VAR_9->add_set.index, VAR_7, VAR_8, &VAR_5);
 if (VAR_9->del_set.index != VAR_0)
  FUNC_2(VAR_9->del_set.index, VAR_7, VAR_8, &VAR_6);

 return VAR_4;
}
