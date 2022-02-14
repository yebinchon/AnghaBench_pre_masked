
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ CurVal; int dwStyle; scalar_t__ MaxVal; scalar_t__ MinVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(UPDOWN_INFO *VAR_1, int VAR_2)
{

    if(!FUNC_0 (VAR_1, VAR_1->CurVal+VAR_2)) {
        if (VAR_1->dwStyle & VAR_0) {
            VAR_2 += (VAR_2 < 0 ? -1 : 1) *
       (VAR_1->MaxVal < VAR_1->MinVal ? -1 : 1) *
       (VAR_1->MinVal - VAR_1->MaxVal) +
       (VAR_2 < 0 ? 1 : -1);
        } else if ((VAR_1->MaxVal > VAR_1->MinVal && VAR_1->CurVal+VAR_2 > VAR_1->MaxVal)
                || (VAR_1->MaxVal < VAR_1->MinVal && VAR_1->CurVal+VAR_2 < VAR_1->MaxVal)) {
            VAR_2 = VAR_1->MaxVal - VAR_1->CurVal;
        } else {
            VAR_2 = VAR_1->MinVal - VAR_1->CurVal;
        }
    }

    VAR_1->CurVal += VAR_2;
    return VAR_2 != 0;
}
