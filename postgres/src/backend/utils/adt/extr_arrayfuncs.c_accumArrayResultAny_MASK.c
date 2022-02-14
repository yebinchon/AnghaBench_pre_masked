
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int arraystate; scalar_t__ scalarstate; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int Datum ;
typedef TYPE_1__ ArrayBuildStateAny ;


 int FUNC_0 (scalar_t__,int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;

ArrayBuildStateAny *
FUNC_3(ArrayBuildStateAny *VAR_0,
     Datum VAR_1, bool VAR_2,
     Oid VAR_3,
     MemoryContext VAR_4)
{
 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_2(VAR_3, VAR_4, 1);

 if (VAR_0->scalarstate)
  (void) FUNC_0(VAR_0->scalarstate,
        VAR_1, VAR_2,
        VAR_3, VAR_4);
 else
  (void) FUNC_1(VAR_0->arraystate,
           VAR_1, VAR_2,
           VAR_3, VAR_4);

 return VAR_0;
}
