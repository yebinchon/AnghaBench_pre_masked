
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dump; } ;
struct TYPE_8__ {scalar_t__ relkind; int numParents; int ncheck; TYPE_4__* checkexprs; struct TYPE_8__** parents; TYPE_1__ dobj; } ;
typedef TYPE_3__ TableInfo ;
struct TYPE_7__ {int name; } ;
struct TYPE_9__ {int conislocal; TYPE_2__ dobj; } ;
typedef TYPE_4__ ConstraintInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(TableInfo *VAR_3, int VAR_4)
{
 int VAR_5,
    VAR_6,
    VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  TableInfo *VAR_8 = &(VAR_3[VAR_5]);
  int VAR_9;
  TableInfo **VAR_10;
  TableInfo *VAR_11;


  if (VAR_8->relkind == VAR_1 ||
   VAR_8->relkind == VAR_2)
   continue;


  if (!(VAR_8->dobj.dump & VAR_0))
   continue;

  VAR_9 = VAR_8->numParents;
  VAR_10 = VAR_8->parents;

  if (VAR_9 == 0)
   continue;


  for (VAR_6 = 0; VAR_6 < VAR_8->ncheck; VAR_6++)
  {
   ConstraintInfo *VAR_12;

   VAR_12 = &(VAR_8->checkexprs[VAR_6]);

   for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
   {
    int VAR_13;

    VAR_11 = VAR_10[VAR_7];
    for (VAR_13 = 0; VAR_13 < VAR_11->ncheck; VAR_13++)
    {
     ConstraintInfo *VAR_14 = &(VAR_11->checkexprs[VAR_13]);

     if (FUNC_0(VAR_14->dobj.name, VAR_12->dobj.name) == 0)
     {
      VAR_12->conislocal = 0;
      break;
     }
    }
    if (!VAR_12->conislocal)
     break;
   }
  }
 }
}
