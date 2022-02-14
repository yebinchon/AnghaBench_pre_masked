
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {int net; struct xt_set_info_target_v0* targinfo; } ;
struct TYPE_3__ {scalar_t__* flags; } ;
struct TYPE_4__ {scalar_t__ index; TYPE_1__ u; } ;
struct xt_set_info_target_v0 {TYPE_2__ del_set; TYPE_2__ add_set; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(const struct xt_tgchk_param *VAR_4)
{
 struct xt_set_info_target_v0 *VAR_5 = VAR_4->targinfo;
 ip_set_id_t VAR_6;

 if (VAR_5->add_set.index != VAR_3) {
  VAR_6 = FUNC_1(VAR_4->net, VAR_5->add_set.index);
  if (VAR_6 == VAR_3) {
   FUNC_3("Cannot find add_set index %u as target\n",
         VAR_5->add_set.index);
   return -VAR_0;
  }
 }

 if (VAR_5->del_set.index != VAR_3) {
  VAR_6 = FUNC_1(VAR_4->net, VAR_5->del_set.index);
  if (VAR_6 == VAR_3) {
   FUNC_3("Cannot find del_set index %u as target\n",
         VAR_5->del_set.index);
   if (VAR_5->add_set.index != VAR_3)
    FUNC_2(VAR_4->net, VAR_5->add_set.index);
   return -VAR_0;
  }
 }
 if (VAR_5->add_set.u.flags[VAR_2 - 1] != 0 ||
     VAR_5->del_set.u.flags[VAR_2 - 1] != 0) {
  FUNC_3("SET target dimension over the limit!\n");
  if (VAR_5->add_set.index != VAR_3)
   FUNC_2(VAR_4->net, VAR_5->add_set.index);
  if (VAR_5->del_set.index != VAR_3)
   FUNC_2(VAR_4->net, VAR_5->del_set.index);
  return -VAR_1;
 }


 FUNC_0(&VAR_5->add_set);
 FUNC_0(&VAR_5->del_set);

 return 0;
}
