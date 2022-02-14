
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {int ginstate; } ;
struct TYPE_4__ {int funcCtx; int indtuples; TYPE_2__ accum; } ;
typedef int OffsetNumber ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int GinNullCategory ;
typedef TYPE_1__ GinBuildState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int ,int,scalar_t__*,int **) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int *,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(GinBuildState *VAR_0, OffsetNumber VAR_1,
        Datum VAR_2, bool VAR_3,
        ItemPointer VAR_4)
{
 Datum *VAR_5;
 GinNullCategory *VAR_6;
 int32 VAR_7;
 MemoryContext VAR_8;

 VAR_8 = FUNC_1(VAR_0->funcCtx);
 VAR_5 = FUNC_2(VAR_0->accum.ginstate, VAR_1,
        VAR_2, VAR_3,
        &VAR_7, &VAR_6);
 FUNC_1(VAR_8);

 FUNC_3(&VAR_0->accum, VAR_4, VAR_1,
        VAR_5, VAR_6, VAR_7);

 VAR_0->indtuples += VAR_7;

 FUNC_0(VAR_0->funcCtx);
}
