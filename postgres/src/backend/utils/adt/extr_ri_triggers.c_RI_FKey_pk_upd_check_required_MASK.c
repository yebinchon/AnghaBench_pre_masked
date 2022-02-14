
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int Trigger ;
typedef int Relation ;
typedef int RI_ConstraintInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int const*,int) ;
 scalar_t__ FUNC_3 (int ,int *,int const*,int) ;

bool
FUNC_4(Trigger *VAR_1, Relation VAR_2,
         TupleTableSlot *VAR_3, TupleTableSlot *VAR_4)
{
 const RI_ConstraintInfo *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, 1);





 if (FUNC_3(FUNC_0(VAR_2), VAR_3, VAR_5, 1) != VAR_0)
  return 0;


 if (VAR_4 && FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, 1))
  return 0;


 return 1;
}
