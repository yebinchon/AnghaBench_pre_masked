
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int PlanState ;
typedef int Oid ;
typedef int ExprState ;
typedef int AttrNumber ;


 int * FUNC_0 (int ,int ,int *,int *,int,int const*,int *,int const*,int *) ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int) ;

ExprState *
FUNC_3(TupleDesc VAR_0,
        int VAR_1,
        const AttrNumber *VAR_2,
        const Oid *VAR_3,
        const Oid *VAR_4,
        PlanState *VAR_5)
{
 Oid *VAR_6 = (Oid *) FUNC_2(VAR_1 * sizeof(Oid));
 int VAR_7;
 ExprState *VAR_8;

 if (VAR_1 == 0)
  return ((void*)0);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_6[VAR_7] = FUNC_1(VAR_3[VAR_7]);


 VAR_8 = FUNC_0(VAR_0, VAR_0, ((void*)0), ((void*)0),
          VAR_1, VAR_2, VAR_6, VAR_4,
          VAR_5);

 return VAR_8;
}
