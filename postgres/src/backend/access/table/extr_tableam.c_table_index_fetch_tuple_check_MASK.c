
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int Snapshot ;
typedef int Relation ;
typedef int ItemPointer ;
typedef int IndexFetchTableData ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *,int*,int*) ;
 int * FUNC_4 (int ,int *) ;

bool
FUNC_5(Relation VAR_0,
         ItemPointer VAR_1,
         Snapshot VAR_2,
         bool *VAR_3)
{
 IndexFetchTableData *VAR_4;
 TupleTableSlot *VAR_5;
 bool VAR_6 = 0;
 bool VAR_7;

 VAR_5 = FUNC_4(VAR_0, ((void*)0));
 VAR_4 = FUNC_1(VAR_0);
 VAR_7 = FUNC_3(VAR_4, VAR_1, VAR_2, VAR_5, &VAR_6,
         VAR_3);
 FUNC_2(VAR_4);
 FUNC_0(VAR_5);

 return VAR_7;
}
