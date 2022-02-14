
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nh_info {scalar_t__ family; } ;
struct nh_group {int is_group; int num_nh; int has_v4; int mpath; TYPE_1__* nh_entries; int nh_grp; int grp_list; int nh_info; } ;
struct nh_config {scalar_t__ nh_grp_type; struct nlattr* nh_grp; } ;
struct nexthop_grp {scalar_t__ weight; int id; } ;
struct nexthop {int is_group; int num_nh; int has_v4; int mpath; TYPE_1__* nh_entries; int nh_grp; int grp_list; int nh_info; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct nh_group* nh; struct nh_group* nh_parent; int nh_list; scalar_t__ weight; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nh_group* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct nh_group*) ;
 int FUNC_2 (int *,int *) ;
 struct nh_group* FUNC_3 () ;
 struct nh_group* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct nh_group*) ;
 struct nh_group* FUNC_6 (int) ;
 int FUNC_7 (struct nh_group*) ;
 int FUNC_8 (struct nh_group*) ;
 struct nexthop_grp* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (int ,struct nh_group*) ;
 struct nh_info* FUNC_12 (int ) ;

__attribute__((used)) static struct nexthop *FUNC_13(struct net *VAR_4,
         struct nh_config *VAR_5)
{
 struct nlattr *VAR_6 = VAR_5->nh_grp;
 struct nexthop_grp *VAR_7 = FUNC_9(VAR_6);
 struct nh_group *VAR_8;
 struct nexthop *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3();
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_9->is_group = 1;

 VAR_8 = FUNC_6(FUNC_10(VAR_6) / sizeof(*VAR_7));
 if (!VAR_8) {
  FUNC_1(VAR_9);
  return FUNC_0(-VAR_2);
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->num_nh; ++VAR_10) {
  struct nexthop *VAR_11;
  struct nh_info *VAR_12;

  VAR_11 = FUNC_4(VAR_4, VAR_7[VAR_10].id);
  if (!FUNC_5(VAR_11))
   goto out_no_nh;

  VAR_12 = FUNC_12(VAR_11->nh_info);
  if (VAR_12->family == VAR_0)
   VAR_8->has_v4 = 1;

  VAR_8->nh_entries[VAR_10].nh = VAR_11;
  VAR_8->nh_entries[VAR_10].weight = VAR_7[VAR_10].weight + 1;
  FUNC_2(&VAR_8->nh_entries[VAR_10].nh_list, &VAR_11->grp_list);
  VAR_8->nh_entries[VAR_10].nh_parent = VAR_9;
 }

 if (VAR_5->nh_grp_type == VAR_3) {
  VAR_8->mpath = 1;
  FUNC_8(VAR_8);
 }

 FUNC_11(VAR_9->nh_grp, VAR_8);

 return VAR_9;

out_no_nh:
 for (; VAR_10 >= 0; --VAR_10)
  FUNC_7(VAR_8->nh_entries[VAR_10].nh);

 FUNC_1(VAR_8);
 FUNC_1(VAR_9);

 return FUNC_0(-VAR_1);
}
