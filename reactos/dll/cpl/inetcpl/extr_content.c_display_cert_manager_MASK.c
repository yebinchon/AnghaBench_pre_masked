
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int dwFlags; int hwndParent; } ;
typedef int HWND ;
typedef int DWORD ;
typedef TYPE_1__ CRYPTUI_CERT_MGR_STRUCT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_3(HWND VAR_0, DWORD VAR_1)
{
    CRYPTUI_CERT_MGR_STRUCT VAR_2;

    FUNC_1("(%p, 0x%x)\n", VAR_0, VAR_1);

    FUNC_2(&VAR_2, sizeof(CRYPTUI_CERT_MGR_STRUCT));
    VAR_2.dwSize = sizeof(CRYPTUI_CERT_MGR_STRUCT);
    VAR_2.hwndParent = VAR_0;
    VAR_2.dwFlags = VAR_1;

    return FUNC_0(&VAR_2);
}
