
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nparts; } ;
struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PartitionDesc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_3, bool VAR_4, bool VAR_5)
{




 if (VAR_3->rd_rel->relkind == VAR_2)
 {
  PartitionDesc VAR_6 = FUNC_1(VAR_3);

  FUNC_0(VAR_6 != ((void*)0));
  if (VAR_6->nparts > 0 && !VAR_4 && !VAR_5)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("cannot remove constraint from only the partitioned table when partitions exist"),
      FUNC_4("Do not specify the ONLY keyword.")));
 }
}
