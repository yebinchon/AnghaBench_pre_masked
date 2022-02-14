
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mcontext; int private_cxt; int typalign; int typbyval; int typlen; int element_type; int dnulls; int dvalues; } ;
typedef int MemoryContext ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_1__ ArrayBuildState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int,int*,int*,int ,int ,int ,int ) ;

Datum
FUNC_5(ArrayBuildState *VAR_0,
      int VAR_1,
      int *VAR_2,
      int *VAR_3,
      MemoryContext VAR_4,
      bool VAR_5)
{
 ArrayType *VAR_6;
 MemoryContext VAR_7;


 VAR_7 = FUNC_2(VAR_4);

 VAR_6 = FUNC_4(VAR_0->dvalues,
        VAR_0->dnulls,
        VAR_1,
        VAR_2,
        VAR_3,
        VAR_0->element_type,
        VAR_0->typlen,
        VAR_0->typbyval,
        VAR_0->typalign);

 FUNC_2(VAR_7);


 if (VAR_5)
 {
  FUNC_0(VAR_0->private_cxt);
  FUNC_1(VAR_0->mcontext);
 }

 return FUNC_3(VAR_6);
}
