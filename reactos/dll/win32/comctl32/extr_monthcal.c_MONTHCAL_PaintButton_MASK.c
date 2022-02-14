
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum nav_direction { ____Placeholder_nav_direction } nav_direction ;
struct TYPE_3__ {int status; int dwStyle; int titlebtnprev; int titlebtnnext; int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;
typedef int BOOL ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int const,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(MONTHCAL_INFO *VAR_10, HDC VAR_11, enum nav_direction VAR_12)
{
    HTHEME VAR_13 = FUNC_2 (VAR_10->hwndSelf);
    RECT *VAR_14 = VAR_12 == VAR_5 ? &VAR_10->titlebtnnext : &VAR_10->titlebtnprev;
    BOOL VAR_15 = VAR_12 == VAR_5 ? VAR_10->status & VAR_6 :
                                                 VAR_10->status & VAR_7;
    if (VAR_13)
    {
        static const int VAR_16[] = {

            132, 131, 133,

            129, 128, 130
        };
        int VAR_17 = VAR_12 == VAR_5 ? 3 : 0;
        if (VAR_15)
            VAR_17 += 1;
        else
        {
            if (VAR_10->dwStyle & VAR_9) VAR_17 += 2;
        }
        FUNC_1 (VAR_13, VAR_11, VAR_8, VAR_16[VAR_17], VAR_14, ((void*)0));
    }
    else
    {
        int VAR_18 = VAR_12 == VAR_5 ? VAR_3 : VAR_2;
        if (VAR_15)
            VAR_18 |= VAR_1;
        else
        {
            if (VAR_10->dwStyle & VAR_9) VAR_18 |= VAR_0;
        }

        FUNC_0(VAR_11, VAR_14, VAR_4, VAR_18);
    }
}
