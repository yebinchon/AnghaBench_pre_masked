
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dwStyle; int Buddy; int Self; } ;
typedef TYPE_1__ UPDOWN_INFO ;
struct TYPE_9__ {int left; int right; int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ HTHEME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int const) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_5 (const UPDOWN_INFO* VAR_9, RECT *VAR_10, int VAR_11)
{
    HTHEME VAR_12 = FUNC_1 (VAR_9->Self);
    const int VAR_13 = VAR_12 ? VAR_1 : VAR_0;
    const int VAR_14 = VAR_12 ? VAR_3 : VAR_2;
    FUNC_0 (VAR_9->Self, VAR_10);





    if (FUNC_4(VAR_9)) {
        if (VAR_9->dwStyle & VAR_6)
            VAR_10->left += VAR_13;
        else
            VAR_10->right -= VAR_13;

        FUNC_2(VAR_10, 0, -VAR_13);
    }


    if (FUNC_3(VAR_9->Buddy) ) {
 if (VAR_9->dwStyle & VAR_6) VAR_10->right -= VAR_14;
 else if (VAR_9->dwStyle & VAR_7) VAR_10->left += VAR_14;
    }






    if (VAR_9->dwStyle & VAR_8) {
        int VAR_15 = VAR_10->right - VAR_10->left + 1;
        if (VAR_11 & VAR_5)
            VAR_10->left = VAR_10->left + VAR_15/2;
        if (VAR_11 & VAR_4)
            VAR_10->right = VAR_10->left + VAR_15/2 - (VAR_12 ? 0 : 1);
    } else {
        int VAR_16 = VAR_10->bottom - VAR_10->top + 1;
        if (VAR_11 & VAR_5)
            VAR_10->bottom = VAR_10->top + VAR_16/2 - (VAR_12 ? 0 : 1);
        if (VAR_11 & VAR_4)
            VAR_10->top = VAR_10->top + VAR_16/2;
    }
}
