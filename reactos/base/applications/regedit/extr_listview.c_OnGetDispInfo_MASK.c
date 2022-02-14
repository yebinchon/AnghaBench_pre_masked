
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int dwValType; } ;
struct TYPE_5__ {char* pszText; int iSubItem; scalar_t__ lParam; scalar_t__ cchTextMax; } ;
struct TYPE_6__ {TYPE_1__ item; } ;
typedef TYPE_2__ NMLVDISPINFO ;
typedef TYPE_3__ LINE_INFO ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(NMLVDISPINFO* VAR_3)
{
    static WCHAR VAR_4[200];

    VAR_3->item.pszText = ((void*)0);
    VAR_3->item.cchTextMax = 0;

    switch (VAR_3->item.iSubItem)
    {
    case 0:
        FUNC_1(VAR_2, VAR_0, VAR_4, FUNC_0(VAR_4));
        VAR_3->item.pszText = VAR_4;
        break;
    case 1:
        switch (((LINE_INFO*)VAR_3->item.lParam)->dwValType)
        {
            case 132:
                VAR_3->item.pszText = L"REG_NONE";
                break;
            case 128:
                VAR_3->item.pszText = L"REG_SZ";
                break;
            case 136:
                VAR_3->item.pszText = L"REG_EXPAND_SZ";
                break;
            case 139:
                VAR_3->item.pszText = L"REG_BINARY";
                break;
            case 138:
                VAR_3->item.pszText = L"REG_DWORD";
                break;
            case 137:
                VAR_3->item.pszText = L"REG_DWORD_BIG_ENDIAN";
                break;
            case 134:
                VAR_3->item.pszText = L"REG_LINK";
                break;
            case 133:
                VAR_3->item.pszText = L"REG_MULTI_SZ";
                break;
            case 130:
                VAR_3->item.pszText = L"REG_RESOURCE_LIST";
                break;
            case 135:
                VAR_3->item.pszText = L"REG_FULL_RESOURCE_DESCRIPTOR";
                break;
            case 129:
                VAR_3->item.pszText = L"REG_RESOURCE_REQUIREMENTS_LIST";
                break;
            case 131:
                VAR_3->item.pszText = L"REG_QWORD";
                break;
            default:
            {
                WCHAR VAR_5[200];
                FUNC_1(VAR_2, VAR_1, VAR_5, FUNC_0(VAR_5));
                FUNC_2(VAR_4, VAR_5, ((LINE_INFO*)VAR_3->item.lParam)->dwValType);
                VAR_3->item.pszText = VAR_4;
                break;
            }
        }
        break;
    case 3:
        VAR_3->item.pszText = L"";
        break;
    }
}
