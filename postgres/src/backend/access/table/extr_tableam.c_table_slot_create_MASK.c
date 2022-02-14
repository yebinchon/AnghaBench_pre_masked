
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlotOps ;
typedef int TupleTableSlot ;
typedef int Relation ;
typedef int List ;


 int * FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;

TupleTableSlot *
FUNC_4(Relation VAR_0, List **VAR_1)
{
 const TupleTableSlotOps *VAR_2;
 TupleTableSlot *VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_0(FUNC_1(VAR_0), VAR_2);

 if (VAR_1)
  *VAR_1 = FUNC_2(*VAR_1, VAR_3);

 return VAR_3;
}
