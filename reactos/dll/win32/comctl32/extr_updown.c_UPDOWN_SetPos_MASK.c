
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CurVal; int MinVal; int MaxVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(UPDOWN_INFO *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->CurVal;

    if(!FUNC_0(VAR_0, VAR_1)) {
        if((VAR_0->MinVal < VAR_0->MaxVal && VAR_1 < VAR_0->MinVal)
                || (VAR_0->MinVal > VAR_0->MaxVal && VAR_1 > VAR_0->MinVal))
            VAR_1 = VAR_0->MinVal;
        else
            VAR_1 = VAR_0->MaxVal;
    }

    VAR_0->CurVal = VAR_1;
    FUNC_1(VAR_0);

    if(!FUNC_0(VAR_0, VAR_2)) {
        if((VAR_0->MinVal < VAR_0->MaxVal && VAR_2 < VAR_0->MinVal)
                || (VAR_0->MinVal > VAR_0->MaxVal && VAR_2 > VAR_0->MinVal))
            VAR_2 = VAR_0->MinVal;
        else
            VAR_2 = VAR_0->MaxVal;
    }
    return VAR_2;
}
