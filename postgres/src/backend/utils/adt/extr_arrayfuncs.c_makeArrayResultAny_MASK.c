
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nelems; } ;
struct TYPE_4__ {int arraystate; TYPE_2__* scalarstate; } ;
typedef int MemoryContext ;
typedef int Datum ;
typedef TYPE_1__ ArrayBuildStateAny ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int,int*,int*,int ,int) ;

Datum
FUNC_2(ArrayBuildStateAny *VAR_0,
       MemoryContext VAR_1, bool VAR_2)
{
 Datum VAR_3;

 if (VAR_0->scalarstate)
 {

  int VAR_4;
  int VAR_5[1];
  int VAR_6[1];


  VAR_4 = (VAR_0->scalarstate->nelems > 0) ? 1 : 0;
  VAR_5[0] = VAR_0->scalarstate->nelems;
  VAR_6[0] = 1;

  VAR_3 = FUNC_1(VAR_0->scalarstate, VAR_4, VAR_5, VAR_6,
           VAR_1, VAR_2);
 }
 else
 {
  VAR_3 = FUNC_0(VAR_0->arraystate,
         VAR_1, VAR_2);
 }
 return VAR_3;
}
