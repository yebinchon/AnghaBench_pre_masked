
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {int net; struct xt_set_info_target_v3* targinfo; } ;
struct TYPE_4__ {scalar_t__ index; } ;
struct TYPE_6__ {scalar_t__ index; } ;
struct TYPE_5__ {scalar_t__ index; } ;
struct xt_set_info_target_v3 {TYPE_1__ map_set; TYPE_3__ del_set; TYPE_2__ add_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(const struct xt_tgdtor_param *VAR_1)
{
 const struct xt_set_info_target_v3 *VAR_2 = VAR_1->targinfo;

 if (VAR_2->add_set.index != VAR_0)
  FUNC_0(VAR_1->net, VAR_2->add_set.index);
 if (VAR_2->del_set.index != VAR_0)
  FUNC_0(VAR_1->net, VAR_2->del_set.index);
 if (VAR_2->map_set.index != VAR_0)
  FUNC_0(VAR_1->net, VAR_2->map_set.index);
}
