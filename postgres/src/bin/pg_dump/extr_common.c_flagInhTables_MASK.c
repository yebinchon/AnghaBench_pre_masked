
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dump; } ;
struct TYPE_9__ {scalar_t__ relkind; int numParents; int interesting; struct TYPE_9__** parents; int ispartition; TYPE_1__ dobj; } ;
typedef TYPE_2__ TableInfo ;
struct TYPE_11__ {TYPE_3__* dopt; } ;
struct TYPE_10__ {int load_via_partition_root; } ;
typedef int InhInfo ;
typedef TYPE_3__ DumpOptions ;
typedef TYPE_4__ Archive ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_1(Archive *VAR_3, TableInfo *VAR_4, int VAR_5,
     InhInfo *VAR_6, int VAR_7)
{
 DumpOptions *VAR_8 = VAR_3->dopt;
 int VAR_9,
    VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  bool VAR_11 = 1;
  bool VAR_12 = 1;


  if (VAR_4[VAR_9].relkind == VAR_1 ||
   VAR_4[VAR_9].relkind == VAR_2 ||
   VAR_4[VAR_9].relkind == VAR_0)
   continue;
  if (!VAR_4[VAR_9].dobj.dump)
  {
   VAR_12 = 0;

   if (!VAR_8->load_via_partition_root ||
    !VAR_4[VAR_9].ispartition)
    VAR_11 = 0;
  }


  if (VAR_11)
   FUNC_0(&VAR_4[VAR_9], VAR_6, VAR_7);





  if (VAR_12)
  {
   int VAR_13 = VAR_4[VAR_9].numParents;
   TableInfo **VAR_14 = VAR_4[VAR_9].parents;

   for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
    VAR_14[VAR_10]->interesting = 1;
  }
 }
}
