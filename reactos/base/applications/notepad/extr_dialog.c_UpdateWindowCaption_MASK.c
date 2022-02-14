
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* szFileTitle; int hMainWnd; int hEdit; int hInstance; } ;
typedef int TCHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,...) ;
 int FUNC_5 (int *,int ,scalar_t__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;

void FUNC_7(BOOL VAR_7)
{
    TCHAR VAR_8[VAR_3];
    TCHAR VAR_9[VAR_3];
    TCHAR VAR_10[VAR_3];


    FUNC_1(VAR_2.hInstance, VAR_4, VAR_9, FUNC_0(VAR_9));


    if (VAR_2.szFileTitle[0] != 0)
        FUNC_5(VAR_10, FUNC_0(VAR_10), VAR_2.szFileTitle);
    else
        FUNC_1(VAR_2.hInstance, VAR_5, VAR_10, FUNC_0(VAR_10));



    if (VAR_7)
        FUNC_4(VAR_8, FUNC_0(VAR_8), FUNC_6("%s - %s"), VAR_10, VAR_9);
    else
    {
        BOOL VAR_11 = (FUNC_2(VAR_2.hEdit, VAR_0, 0, 0) ? VAR_6 : VAR_1);


        FUNC_4(VAR_8, FUNC_0(VAR_8), FUNC_6("%s%s - %s"),
            (VAR_11 ? FUNC_6("*") : FUNC_6("")), VAR_10, VAR_9);
    }


    FUNC_3(VAR_2.hMainWnd, VAR_8);
}
