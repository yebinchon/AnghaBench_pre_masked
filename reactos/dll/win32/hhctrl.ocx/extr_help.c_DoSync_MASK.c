
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int pszFile; } ;
struct TYPE_9__ {int content; TYPE_2__* tabs; TYPE_1__ WinType; TYPE_3__* web_browser; } ;
struct TYPE_8__ {int web_browser; } ;
struct TYPE_7__ {int hwnd; } ;
typedef int HRESULT ;
typedef TYPE_4__ HHInfo ;
typedef char* BSTR ;


 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char**) ;
 int FUNC_4 (char*) ;
 size_t VAR_1 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*) ;

__attribute__((used)) static void FUNC_9(HHInfo *VAR_2)
{
    WCHAR VAR_3[VAR_0];
    HRESULT VAR_4;
    BSTR VAR_5;

    VAR_4 = FUNC_3(VAR_2->web_browser->web_browser, &VAR_5);

    if (FUNC_2(VAR_4))
    {
        FUNC_5("get_LocationURL failed: %08x\n", VAR_4);
        return;
    }


    if ((!FUNC_1(VAR_2->WinType.pszFile, VAR_3, ((void*)0))) || (FUNC_7(VAR_3) > FUNC_7(VAR_5)))
    {
        FUNC_4(VAR_5);
        return;
    }

    if (FUNC_6(VAR_3, VAR_5) > 0)
    {
        static const WCHAR VAR_6[] = {':',':','/',0};
        const WCHAR *VAR_7;

        VAR_7 = FUNC_8(VAR_5, VAR_6);

        if (VAR_7)
            FUNC_0(VAR_2->tabs[VAR_1].hwnd, VAR_7 + 3, VAR_2->content);
    }

    FUNC_4(VAR_5);
}
