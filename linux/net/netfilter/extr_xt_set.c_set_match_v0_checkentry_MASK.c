
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* flags; } ;
struct TYPE_4__ {int index; TYPE_1__ u; } ;
struct xt_set_info_match_v0 {TYPE_2__ match_set; } ;
struct xt_mtchk_param {int net; struct xt_set_info_match_v0* matchinfo; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(const struct xt_mtchk_param *VAR_4)
{
 struct xt_set_info_match_v0 *VAR_5 = VAR_4->matchinfo;
 ip_set_id_t VAR_6;

 VAR_6 = FUNC_1(VAR_4->net, VAR_5->match_set.index);

 if (VAR_6 == VAR_3) {
  FUNC_3("Cannot find set identified by id %u to match\n",
        VAR_5->match_set.index);
  return -VAR_0;
 }
 if (VAR_5->match_set.u.flags[VAR_2 - 1] != 0) {
  FUNC_3("set match dimension is over the limit!\n");
  FUNC_2(VAR_4->net, VAR_5->match_set.index);
  return -VAR_1;
 }


 FUNC_0(&VAR_5->match_set);

 return 0;
}
