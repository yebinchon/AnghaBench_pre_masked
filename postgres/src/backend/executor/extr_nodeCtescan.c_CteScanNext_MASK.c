
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef int TupleTableSlot ;
struct TYPE_7__ {TYPE_4__* state; } ;
struct TYPE_8__ {int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_11__ {int readptr; TYPE_3__* leader; int cteplanstate; TYPE_2__ ss; } ;
struct TYPE_10__ {int es_direction; } ;
struct TYPE_9__ {int eof_cte; int * cte_table; } ;
typedef int ScanDirection ;
typedef TYPE_4__ EState ;
typedef TYPE_5__ CteScanState ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_10(CteScanState *VAR_0)
{
 EState *VAR_1;
 ScanDirection VAR_2;
 bool VAR_3;
 Tuplestorestate *VAR_4;
 bool VAR_5;
 TupleTableSlot *VAR_6;




 VAR_1 = VAR_0->ss.ps.state;
 VAR_2 = VAR_1->es_direction;
 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = VAR_0->leader->cte_table;
 FUNC_9(VAR_4, VAR_0->readptr);
 VAR_6 = VAR_0->ss.ss_ScanTupleSlot;





 VAR_5 = FUNC_6(VAR_4);

 if (!VAR_3 && VAR_5)
 {
  if (!VAR_0->leader->eof_cte)
  {






   if (!FUNC_5(VAR_4, VAR_3))
    return ((void*)0);
  }
  VAR_5 = 0;
 }
 if (!VAR_5)
 {
  if (FUNC_7(VAR_4, VAR_3, 1, VAR_6))
   return VAR_6;
  if (VAR_3)
   VAR_5 = 1;
 }
 if (VAR_5 && !VAR_0->leader->eof_cte)
 {
  TupleTableSlot *VAR_7;





  VAR_7 = FUNC_2(VAR_0->cteplanstate);
  if (FUNC_4(VAR_7))
  {
   VAR_0->leader->eof_cte = 1;
   return ((void*)0);
  }






  FUNC_9(VAR_4, VAR_0->readptr);
  FUNC_8(VAR_4, VAR_7);







  return FUNC_1(VAR_6, VAR_7);
 }




 return FUNC_0(VAR_6);
}
