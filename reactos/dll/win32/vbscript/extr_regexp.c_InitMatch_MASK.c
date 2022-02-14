
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t classCount; TYPE_4__* classList; } ;
typedef TYPE_1__ regexp_t ;
typedef int heap_pool_t ;
typedef size_t UINT ;
struct TYPE_9__ {int converted; } ;
struct TYPE_8__ {int backTrackStackSize; int stateStackLimit; int ok; TYPE_1__* regexp; int * pool; void* cx; scalar_t__ stateStackTop; void* stateStack; scalar_t__ backTrackLimit; scalar_t__ backTrackCount; scalar_t__ cursz; void* backTrackStack; void* backTrackSP; } ;
typedef int REProgState ;
typedef TYPE_2__ REGlobalData ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static HRESULT FUNC_3(regexp_t *VAR_7, void *VAR_8, heap_pool_t *VAR_9, REGlobalData *VAR_10)
{
    UINT VAR_11;

    VAR_10->backTrackStackSize = VAR_3;
    VAR_10->backTrackStack = FUNC_1(VAR_10->pool, VAR_3);
    if (!VAR_10->backTrackStack)
        goto bad;

    VAR_10->backTrackSP = VAR_10->backTrackStack;
    VAR_10->cursz = 0;
    VAR_10->backTrackCount = 0;
    VAR_10->backTrackLimit = 0;

    VAR_10->stateStackLimit = VAR_4;
    VAR_10->stateStack = FUNC_1(VAR_10->pool, sizeof(REProgState) * VAR_4);
    if (!VAR_10->stateStack)
        goto bad;

    VAR_10->stateStackTop = 0;
    VAR_10->cx = VAR_8;
    VAR_10->pool = VAR_9;
    VAR_10->regexp = VAR_7;
    VAR_10->ok = VAR_6;

    for (VAR_11 = 0; VAR_11 < VAR_7->classCount; VAR_11++) {
        if (!VAR_7->classList[VAR_11].converted &&
                !FUNC_0(VAR_10, &VAR_7->classList[VAR_11])) {
            return VAR_0;
        }
    }

    return VAR_5;

bad:
    FUNC_2(VAR_8);
    VAR_10->ok = VAR_2;
    return VAR_1;
}
