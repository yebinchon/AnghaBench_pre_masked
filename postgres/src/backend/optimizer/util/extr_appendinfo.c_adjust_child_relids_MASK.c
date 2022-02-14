
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int child_relid; int parent_relid; } ;
typedef int * Relids ;
typedef int Bitmapset ;
typedef TYPE_1__ AppendRelInfo ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

Relids
FUNC_4(Relids VAR_0, int VAR_1, AppendRelInfo **VAR_2)
{
 Bitmapset *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  AppendRelInfo *VAR_5 = VAR_2[VAR_4];


  if (FUNC_3(VAR_5->parent_relid, VAR_0))
  {

   if (!VAR_3)
    VAR_3 = FUNC_1(VAR_0);

   VAR_3 = FUNC_2(VAR_3, VAR_5->parent_relid);
   VAR_3 = FUNC_0(VAR_3, VAR_5->child_relid);
  }
 }


 if (VAR_3)
  return VAR_3;


 return VAR_0;
}
