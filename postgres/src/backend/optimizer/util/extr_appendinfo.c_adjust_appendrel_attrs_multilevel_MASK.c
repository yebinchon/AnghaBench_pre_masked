
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent_relid; } ;
typedef int * Relids ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int Bitmapset ;
typedef TYPE_1__ AppendRelInfo ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int,TYPE_1__**) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__** FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (TYPE_1__**) ;

Node *
FUNC_7(PlannerInfo *VAR_0, Node *VAR_1,
          Relids VAR_2,
          Relids VAR_3)
{
 AppendRelInfo **VAR_4;
 Bitmapset *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7;

 FUNC_0(FUNC_4(VAR_2) == FUNC_4(VAR_3));

 VAR_4 = FUNC_5(VAR_0, VAR_2, &VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  AppendRelInfo *VAR_8 = VAR_4[VAR_7];

  VAR_5 = FUNC_2(VAR_5, VAR_8->parent_relid);
 }


 if (!FUNC_3(VAR_5, VAR_3))
  VAR_1 = FUNC_7(VAR_0, VAR_1, VAR_5,
             VAR_3);


 VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_6, VAR_4);

 FUNC_6(VAR_4);

 return VAR_1;
}
