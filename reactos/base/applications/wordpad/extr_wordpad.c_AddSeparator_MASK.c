
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int button ;
struct TYPE_3__ {int iBitmap; int iString; scalar_t__ dwData; int fsStyle; scalar_t__ fsState; scalar_t__ idCommand; } ;
typedef TYPE_1__ TBBUTTON ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(HWND VAR_2)
{
    TBBUTTON VAR_3;

    FUNC_1(&VAR_3, sizeof(VAR_3));
    VAR_3.iBitmap = -1;
    VAR_3.idCommand = 0;
    VAR_3.fsState = 0;
    VAR_3.fsStyle = VAR_0;
    VAR_3.dwData = 0;
    VAR_3.iString = -1;
    FUNC_0(VAR_2, VAR_1, 1, (LPARAM)&VAR_3);
}
