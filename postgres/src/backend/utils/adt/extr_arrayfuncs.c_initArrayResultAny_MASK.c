
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mcontext; } ;
struct TYPE_8__ {TYPE_1__* arraystate; TYPE_3__* scalarstate; } ;
struct TYPE_7__ {int mcontext; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ ArrayBuildStateArr ;
typedef TYPE_2__ ArrayBuildStateAny ;
typedef TYPE_3__ ArrayBuildState ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ,int ,int) ;
 TYPE_1__* FUNC_6 (int ,int ,int ,int) ;

ArrayBuildStateAny *
FUNC_7(Oid VAR_1, MemoryContext VAR_2, bool VAR_3)
{
 ArrayBuildStateAny *VAR_4;
 Oid VAR_5 = FUNC_4(VAR_1);

 if (FUNC_2(VAR_5))
 {

  ArrayBuildStateArr *VAR_6;

  VAR_6 = FUNC_6(VAR_1, VAR_0, VAR_2, VAR_3);
  VAR_4 = (ArrayBuildStateAny *)
   FUNC_1(VAR_6->mcontext,
          sizeof(ArrayBuildStateAny));
  VAR_4->scalarstate = ((void*)0);
  VAR_4->arraystate = VAR_6;
 }
 else
 {

  ArrayBuildState *VAR_7;


  FUNC_0(FUNC_2(FUNC_3(VAR_1)));

  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3);
  VAR_4 = (ArrayBuildStateAny *)
   FUNC_1(VAR_7->mcontext,
          sizeof(ArrayBuildStateAny));
  VAR_4->scalarstate = VAR_7;
  VAR_4->arraystate = ((void*)0);
 }

 return VAR_4;
}
