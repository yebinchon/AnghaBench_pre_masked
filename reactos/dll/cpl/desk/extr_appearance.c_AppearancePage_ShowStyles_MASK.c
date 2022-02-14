
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {scalar_t__ DisplayName; struct TYPE_4__* NextStyle; } ;
typedef TYPE_1__* PTHEME_STYLE ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(HWND VAR_4, int VAR_5, PTHEME_STYLE VAR_6, PTHEME_STYLE VAR_7)
{
    int VAR_8;
    HWND VAR_9 = FUNC_0(VAR_4, VAR_5);
    PTHEME_STYLE VAR_10;

    FUNC_1(VAR_9, VAR_1 , 0, 0);

    for (VAR_10 = VAR_6;
         VAR_10;
         VAR_10 = VAR_10->NextStyle)
    {
        VAR_8 = FUNC_1(VAR_9, VAR_0, 0, (LPARAM)VAR_10->DisplayName);
        FUNC_1(VAR_9, VAR_3, VAR_8, (LPARAM)VAR_10);
        if (VAR_10 == VAR_7)
        {
            FUNC_1(VAR_9, VAR_2, (WPARAM)VAR_8, 0);
        }
    }
}
