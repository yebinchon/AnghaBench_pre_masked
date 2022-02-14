
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CurVal; int MinVal; int MaxVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(UPDOWN_INFO *VAR_1, BOOL *VAR_2)
{
    BOOL VAR_3 = FUNC_0(VAR_1);
    int VAR_4 = VAR_1->CurVal;

    if(!FUNC_1(VAR_1, VAR_4)) {
        if((VAR_1->MinVal < VAR_1->MaxVal && VAR_4 < VAR_1->MinVal)
                || (VAR_1->MinVal > VAR_1->MaxVal && VAR_4 > VAR_1->MinVal))
            VAR_4 = VAR_1->MinVal;
        else
            VAR_4 = VAR_1->MaxVal;

        VAR_3 = VAR_0;
    }

    if(VAR_2) *VAR_2 = !VAR_3;
    return VAR_4;
}
