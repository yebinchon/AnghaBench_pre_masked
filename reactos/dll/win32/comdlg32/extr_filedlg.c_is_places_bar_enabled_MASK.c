
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {TYPE_1__* ofnInfos; } ;
struct TYPE_4__ {int lStructSize; int FlagsEx; int Flags; } ;
typedef int HKEY ;
typedef TYPE_2__ FileOpenDlgInfos ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_3(const FileOpenDlgInfos *VAR_5)
{
    static const WCHAR VAR_6[] = {'N','o','P','l','a','c','e','s','B','a','r',0};
    DWORD VAR_7;
    HKEY VAR_8;

    if (VAR_5->ofnInfos->lStructSize != sizeof(*VAR_5->ofnInfos) ||
            (VAR_5->ofnInfos->FlagsEx & VAR_3) ||
           !(VAR_5->ofnInfos->Flags & VAR_2))
    {
        return VAR_0;
    }

    if (FUNC_1(VAR_1, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Comdlg32", &VAR_8))
        return VAR_4;

    VAR_7 = 0;
    FUNC_2(VAR_8, VAR_6, &VAR_7);
    FUNC_0(VAR_8);
    return VAR_7 == 0;
}
