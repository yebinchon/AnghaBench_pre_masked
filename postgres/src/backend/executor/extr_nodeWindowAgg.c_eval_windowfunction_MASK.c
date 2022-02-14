
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_5__* WindowStatePerFunc ;
struct TYPE_14__ {TYPE_1__* ps_ExprContext; } ;
struct TYPE_15__ {TYPE_2__ ps; } ;
struct TYPE_18__ {int * curaggcontext; TYPE_3__ ss; } ;
typedef TYPE_6__ WindowAggState ;
struct TYPE_19__ {int isnull; TYPE_4__* args; } ;
struct TYPE_17__ {int numArguments; int resulttypeLen; int resulttypeByVal; scalar_t__ winobj; int winCollation; int flinfo; } ;
struct TYPE_16__ {int isnull; } ;
struct TYPE_13__ {int ecxt_per_tuple_memory; } ;
typedef int MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__,int *,int,int ,void*,int *) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_7__* VAR_2 ;

__attribute__((used)) static void
FUNC_7(WindowAggState *VAR_3, WindowStatePerFunc VAR_4,
     Datum *VAR_5, bool *VAR_6)
{
 FUNC_3(VAR_2, VAR_1);
 MemoryContext VAR_7;

 VAR_7 = FUNC_5(VAR_3->ss.ps.ps_ExprContext->ecxt_per_tuple_memory);







 FUNC_2(*VAR_2, &(VAR_4->flinfo),
        VAR_4->numArguments,
        VAR_4->winCollation,
        (void *) VAR_4->winobj, ((void*)0));

 for (int VAR_8 = 0; VAR_8 < VAR_4->numArguments; VAR_8++)
  VAR_2->args[VAR_8].isnull = 1;

 VAR_3->curaggcontext = ((void*)0);

 *VAR_5 = FUNC_1(VAR_2);
 *VAR_6 = VAR_2->isnull;






 if (!VAR_4->resulttypeByVal && !VAR_2->isnull &&
  !FUNC_4(VAR_0,
          FUNC_0(*VAR_5)))
  *VAR_5 = FUNC_6(*VAR_5,
       VAR_4->resulttypeByVal,
       VAR_4->resulttypeLen);

 FUNC_5(VAR_7);
}
