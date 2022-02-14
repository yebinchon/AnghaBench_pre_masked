
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {int net; struct xt_set_info_target_v1* targinfo; } ;
struct TYPE_4__ {scalar_t__ index; scalar_t__ dim; } ;
struct TYPE_3__ {scalar_t__ index; scalar_t__ dim; } ;
struct xt_set_info_target_v1 {TYPE_2__ del_set; TYPE_1__ add_set; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const struct xt_tgchk_param *VAR_4)
{
 const struct xt_set_info_target_v1 *VAR_5 = VAR_4->targinfo;
 ip_set_id_t VAR_6;

 if (VAR_5->add_set.index != VAR_3) {
  VAR_6 = FUNC_0(VAR_4->net, VAR_5->add_set.index);
  if (VAR_6 == VAR_3) {
   FUNC_2("Cannot find add_set index %u as target\n",
         VAR_5->add_set.index);
   return -VAR_0;
  }
 }

 if (VAR_5->del_set.index != VAR_3) {
  VAR_6 = FUNC_0(VAR_4->net, VAR_5->del_set.index);
  if (VAR_6 == VAR_3) {
   FUNC_2("Cannot find del_set index %u as target\n",
         VAR_5->del_set.index);
   if (VAR_5->add_set.index != VAR_3)
    FUNC_1(VAR_4->net, VAR_5->add_set.index);
   return -VAR_0;
  }
 }
 if (VAR_5->add_set.dim > VAR_2 ||
     VAR_5->del_set.dim > VAR_2) {
  FUNC_2("SET target dimension over the limit!\n");
  if (VAR_5->add_set.index != VAR_3)
   FUNC_1(VAR_4->net, VAR_5->add_set.index);
  if (VAR_5->del_set.index != VAR_3)
   FUNC_1(VAR_4->net, VAR_5->del_set.index);
  return -VAR_1;
 }

 return 0;
}
