
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t stateStackLimit; int ok; int cx; int stateStack; int pool; } ;
typedef int REProgState ;
typedef TYPE_1__ REGlobalData ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,size_t,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static BOOL
FUNC_2(REGlobalData *VAR_2)
{
    size_t VAR_3 = VAR_2->stateStackLimit;
    size_t VAR_4 = sizeof(REProgState) * VAR_3;

    VAR_2->stateStack = FUNC_0(VAR_2->pool, VAR_2->stateStack, VAR_4, VAR_4);
    if (!VAR_2->stateStack) {
        FUNC_1(VAR_2->cx);
        VAR_2->ok = VAR_0;
        return VAR_0;
    }
    VAR_2->stateStackLimit = VAR_3 + VAR_3;
    return VAR_1;
}
