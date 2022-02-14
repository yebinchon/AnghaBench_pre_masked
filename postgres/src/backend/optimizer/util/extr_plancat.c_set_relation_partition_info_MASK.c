
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int nparts; int boundinfo; } ;
struct TYPE_13__ {TYPE_1__* glob; } ;
struct TYPE_12__ {int nparts; int boundinfo; int * part_scheme; } ;
struct TYPE_11__ {int * partition_directory; } ;
typedef int Relation ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__* PartitionDesc ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_2 (int *,int ) ;
 int * FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
       Relation VAR_3)
{
 PartitionDesc VAR_4;


 if (VAR_1->glob->partition_directory == ((void*)0))
  VAR_1->glob->partition_directory =
   FUNC_1(VAR_0);

 VAR_4 = FUNC_2(VAR_1->glob->partition_directory,
          VAR_3);
 VAR_2->part_scheme = FUNC_3(VAR_1, VAR_3);
 FUNC_0(VAR_4 != ((void*)0) && VAR_2->part_scheme != ((void*)0));
 VAR_2->boundinfo = VAR_4->boundinfo;
 VAR_2->nparts = VAR_4->nparts;
 FUNC_5(VAR_3, VAR_2);
 FUNC_4(VAR_3, VAR_2);
}
