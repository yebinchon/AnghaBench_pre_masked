
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int cbData; scalar_t__ pbData; } ;
struct TYPE_11__ {int szPrompt; struct TYPE_11__* hwndApp; struct TYPE_11__* dwPromptFlags; struct TYPE_11__* cbSize; } ;
typedef int LPCSTR ;
typedef TYPE_1__* DWORD ;
typedef TYPE_2__ DATA_BLOB ;
typedef TYPE_1__ CRYPTPROTECT_PROMPTSTRUCT ;


 int FUNC_0 (char*,TYPE_1__*,...) ;
 int FUNC_1 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(const DATA_BLOB* VAR_0, const DATA_BLOB* VAR_1,
       CRYPTPROTECT_PROMPTSTRUCT* VAR_2, DWORD VAR_3)
{
    FUNC_0("pPromptStruct: %p\n", VAR_2);
    if (VAR_2)
    {
        FUNC_0("  cbSize: 0x%x\n", VAR_2->cbSize);
        FUNC_0("  dwPromptFlags: 0x%x\n", VAR_2->dwPromptFlags);
        FUNC_0("  hwndApp: %p\n", VAR_2->hwndApp);
        FUNC_0("  szPrompt: %p %s\n",
              VAR_2->szPrompt,
              VAR_2->szPrompt ? FUNC_3(VAR_2->szPrompt)
              : "");
    }
    FUNC_0("dwFlags: 0x%04x\n", VAR_3);
    FUNC_1(VAR_0);
    if (VAR_1)
    {
        FUNC_1(VAR_1);
        FUNC_0("  %s\n",FUNC_2((LPCSTR)VAR_1->pbData,VAR_1->cbData));
    }

}
