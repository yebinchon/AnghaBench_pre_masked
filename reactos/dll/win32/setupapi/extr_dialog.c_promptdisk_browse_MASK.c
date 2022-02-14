
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct promptdisk_params {int FileSought; } ;
typedef int ofn ;
typedef scalar_t__ WCHAR ;
struct TYPE_4__ {int lStructSize; int Flags; int nMaxFile; int lpstrFile; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef int HWND ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__* FUNC_7 (int ,char) ;

__attribute__((used)) static void FUNC_8(HWND VAR_5, struct promptdisk_params *VAR_6)
{
    OPENFILENAMEW VAR_7;
    FUNC_5(&VAR_7, sizeof(VAR_7));

    VAR_7.lStructSize = sizeof(VAR_7);
    VAR_7.Flags = VAR_3 | VAR_2 | VAR_4;
    VAR_7.hwndOwner = VAR_5;
    VAR_7.nMaxFile = VAR_1;
    VAR_7.lpstrFile = FUNC_2(FUNC_1(), 0, VAR_1*sizeof(WCHAR));
    FUNC_6(VAR_7.lpstrFile, VAR_6->FileSought);

    if(FUNC_0(&VAR_7))
    {
        WCHAR* VAR_8 = FUNC_7(VAR_7.lpstrFile, '\\');
        if (VAR_8) *VAR_8 = 0;
        FUNC_4(VAR_5, VAR_0, VAR_7.lpstrFile);
    }
    FUNC_3(FUNC_1(), 0, VAR_7.lpstrFile);
}
