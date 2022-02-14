
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent_relid; } ;
typedef int * Relids ;
typedef int PlannerInfo ;
typedef TYPE_1__ AppendRelInfo ;


 int * FUNC_0 (int *,int,TYPE_1__**) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__** FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (TYPE_1__**) ;

Relids
FUNC_7(PlannerInfo *VAR_0, Relids VAR_1,
          Relids VAR_2, Relids VAR_3)
{
 AppendRelInfo **VAR_4;
 int VAR_5;
 Relids VAR_6 = ((void*)0);
 Relids VAR_7;
 Relids VAR_8 = ((void*)0);
 int VAR_9;





 if (!FUNC_4(VAR_1, VAR_3))
  return VAR_1;

 VAR_4 = FUNC_5(VAR_0, VAR_2, &VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  AppendRelInfo *VAR_10 = VAR_4[VAR_9];

  VAR_6 = FUNC_1(VAR_6, VAR_10->parent_relid);
 }


 if (!FUNC_2(VAR_6, VAR_3))
 {
  VAR_8 = FUNC_7(VAR_0, VAR_1,
             VAR_6,
             VAR_3);
  VAR_1 = VAR_8;
 }

 VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_4);


 if (VAR_8)
  FUNC_3(VAR_8);
 FUNC_3(VAR_6);
 FUNC_6(VAR_4);

 return VAR_7;
}
