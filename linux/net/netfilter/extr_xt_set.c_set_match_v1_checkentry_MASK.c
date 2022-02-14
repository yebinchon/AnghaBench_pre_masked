
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dim; int index; } ;
struct xt_set_info_match_v1 {TYPE_1__ match_set; } ;
struct xt_mtchk_param {int net; struct xt_set_info_match_v1* matchinfo; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const struct xt_mtchk_param *VAR_4)
{
 struct xt_set_info_match_v1 *VAR_5 = VAR_4->matchinfo;
 ip_set_id_t VAR_6;

 VAR_6 = FUNC_0(VAR_4->net, VAR_5->match_set.index);

 if (VAR_6 == VAR_3) {
  FUNC_2("Cannot find set identified by id %u to match\n",
        VAR_5->match_set.index);
  return -VAR_0;
 }
 if (VAR_5->match_set.dim > VAR_2) {
  FUNC_2("set match dimension is over the limit!\n");
  FUNC_1(VAR_4->net, VAR_5->match_set.index);
  return -VAR_1;
 }

 return 0;
}
