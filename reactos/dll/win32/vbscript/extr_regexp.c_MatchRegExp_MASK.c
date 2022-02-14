
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* parens; int const* cp; } ;
typedef TYPE_3__ match_state_t ;
typedef int const WCHAR ;
typedef size_t UINT ;
struct TYPE_14__ {int skipped; scalar_t__ stateStackTop; scalar_t__ cursz; int backTrackStack; int backTrackSP; TYPE_2__* regexp; int ok; int const* cpend; } ;
struct TYPE_12__ {size_t parenCount; int flags; } ;
struct TYPE_11__ {int index; } ;
typedef TYPE_4__ REGlobalData ;


 TYPE_3__* FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static match_state_t *FUNC_1(REGlobalData *VAR_1, match_state_t *VAR_2)
{
    match_state_t *VAR_3;
    const WCHAR *VAR_4 = VAR_2->cp;
    const WCHAR *VAR_5;
    UINT VAR_6;





    for (VAR_5 = VAR_4; VAR_5 <= VAR_1->cpend; VAR_5++) {
        VAR_1->skipped = VAR_5 - VAR_4;
        VAR_2->cp = VAR_5;
        for (VAR_6 = 0; VAR_6 < VAR_1->regexp->parenCount; VAR_6++)
            VAR_2->parens[VAR_6].index = -1;
        VAR_3 = FUNC_0(VAR_1, VAR_2);
        if (!VAR_1->ok || VAR_3 || (VAR_1->regexp->flags & VAR_0))
            return VAR_3;
        VAR_1->backTrackSP = VAR_1->backTrackStack;
        VAR_1->cursz = 0;
        VAR_1->stateStackTop = 0;
        VAR_5 = VAR_4 + VAR_1->skipped;
    }
    return ((void*)0);
}
