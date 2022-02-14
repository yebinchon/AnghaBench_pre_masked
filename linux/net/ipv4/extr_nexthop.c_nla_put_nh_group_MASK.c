
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nh_group {int num_nh; TYPE_2__* nh_entries; scalar_t__ mpath; } ;
struct nexthop_grp {scalar_t__ weight; int id; } ;
struct TYPE_4__ {scalar_t__ weight; TYPE_1__* nh; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nexthop_grp* FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, struct nh_group *VAR_5)
{
 struct nexthop_grp *VAR_6;
 size_t VAR_7 = VAR_5->num_nh * sizeof(*VAR_6);
 struct nlattr *VAR_8;
 u16 VAR_9 = 0;
 int VAR_10;

 if (VAR_5->mpath)
  VAR_9 = VAR_1;

 if (FUNC_1(VAR_4, VAR_3, VAR_9))
  goto nla_put_failure;

 VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_7);
 if (!VAR_8)
  goto nla_put_failure;

 VAR_6 = FUNC_0(VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_5->num_nh; ++VAR_10) {
  VAR_6->id = VAR_5->nh_entries[VAR_10].nh->id;
  VAR_6->weight = VAR_5->nh_entries[VAR_10].weight - 1;
  VAR_6 += 1;
 }

 return 0;

nla_put_failure:
 return -VAR_0;
}
