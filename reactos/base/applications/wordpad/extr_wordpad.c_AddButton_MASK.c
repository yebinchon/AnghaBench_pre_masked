
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int button ;
struct TYPE_3__ {int iBitmap; int idCommand; int iString; scalar_t__ dwData; int fsStyle; int fsState; } ;
typedef TYPE_1__ TBBUTTON ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(HWND VAR_3, int VAR_4, int VAR_5)
{
    TBBUTTON VAR_6;

    FUNC_1(&VAR_6, sizeof(VAR_6));
    VAR_6.iBitmap = VAR_4;
    VAR_6.idCommand = VAR_5;
    VAR_6.fsState = VAR_1;
    VAR_6.fsStyle = VAR_0;
    VAR_6.dwData = 0;
    VAR_6.iString = -1;
    FUNC_0(VAR_3, VAR_2, 1, (LPARAM)&VAR_6);
}
