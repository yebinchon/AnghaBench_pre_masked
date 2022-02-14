
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct HTAB {int dummy; } ;
struct TYPE_9__ {int total_cost; } ;
struct TYPE_8__ {struct HTAB* join_rel_hash; int join_rel_list; int * join_rel_level; } ;
struct TYPE_7__ {TYPE_3__* cheapest_total_path; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int MemoryContext ;
typedef int Gene ;
typedef int Cost ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

Cost
FUNC_7(PlannerInfo *VAR_3, Gene *VAR_4, int VAR_5)
{
 MemoryContext VAR_6;
 MemoryContext VAR_7;
 RelOptInfo *VAR_8;
 Cost VAR_9;
 int VAR_10;
 struct HTAB *VAR_11;
 VAR_6 = FUNC_0(VAR_1,
           "GEQO",
           VAR_0);
 VAR_7 = FUNC_3(VAR_6);
 VAR_10 = FUNC_5(VAR_3->join_rel_list);
 VAR_11 = VAR_3->join_rel_hash;
 FUNC_1(VAR_3->join_rel_level == ((void*)0));

 VAR_3->join_rel_hash = ((void*)0);


 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_8)
 {
  Path *VAR_12 = VAR_8->cheapest_total_path;

  VAR_9 = VAR_12->total_cost;
 }
 else
  VAR_9 = VAR_2;





 VAR_3->join_rel_list = FUNC_6(VAR_3->join_rel_list,
          VAR_10);
 VAR_3->join_rel_hash = VAR_11;


 FUNC_3(VAR_7);
 FUNC_2(VAR_6);

 return VAR_9;
}
