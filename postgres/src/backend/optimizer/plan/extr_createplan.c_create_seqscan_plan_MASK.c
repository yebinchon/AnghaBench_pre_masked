
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ param_info; TYPE_1__* parent; } ;
struct TYPE_9__ {int plan; } ;
struct TYPE_8__ {scalar_t__ relid; scalar_t__ rtekind; } ;
typedef TYPE_2__ SeqScan ;
typedef int PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int * FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (int *,int *,scalar_t__) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static SeqScan *
FUNC_6(PlannerInfo *VAR_1, Path *VAR_2,
     List *VAR_3, List *VAR_4)
{
 SeqScan *VAR_5;
 Index VAR_6 = VAR_2->parent->relid;


 FUNC_0(VAR_6 > 0);
 FUNC_0(VAR_2->parent->rtekind == VAR_0);


 VAR_4 = FUNC_4(VAR_1, VAR_4);


 VAR_4 = FUNC_2(VAR_4, 0);


 if (VAR_2->param_info)
 {
  VAR_4 = (List *)
   FUNC_5(VAR_1, (Node *) VAR_4);
 }

 VAR_5 = FUNC_3(VAR_3,
        VAR_4,
        VAR_6);

 FUNC_1(&VAR_5->plan, VAR_2);

 return VAR_5;
}
