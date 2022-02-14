
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwStyle; int hwndSelf; int rcList; } ;
typedef int RECT ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int,int *,int *,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(LISTVIEW_INFO *VAR_3)
{
    INT VAR_4, VAR_5, VAR_6;

    if ((VAR_3->dwStyle & VAR_0) || !FUNC_3(VAR_3)) return;





    for (VAR_4 = 0, VAR_5 = 0, VAR_6 = 0; VAR_6 <= 1; VAR_6++)
    {
        VAR_4 += FUNC_0(VAR_3);
        VAR_5 += FUNC_1(VAR_3);
    }


    if (VAR_4 != 0 || VAR_5 != 0)
    {
        RECT VAR_7;
        VAR_7 = VAR_3->rcList;
        FUNC_2(VAR_3->hwndSelf, VAR_4, VAR_5, &VAR_7, &VAR_7, 0, 0,
            VAR_1 | VAR_2);
    }
}
