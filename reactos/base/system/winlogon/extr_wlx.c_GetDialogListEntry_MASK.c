
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hWnd; } ;
struct TYPE_7__ {struct TYPE_7__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PDIALOG_LIST_ENTRY ;
typedef scalar_t__ HWND ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static
PDIALOG_LIST_ENTRY
FUNC_2(HWND VAR_3)
{
    PDIALOG_LIST_ENTRY VAR_4;
    PLIST_ENTRY VAR_5;

    VAR_5 = VAR_1.Flink;
    while (VAR_5 != &VAR_1)
    {
        VAR_4 = FUNC_0(VAR_5,
                                    VAR_0,
                                    VAR_2);
        if (VAR_4->hWnd == VAR_3)
        {
            FUNC_1("Found entry: %p\n", VAR_4);
            return VAR_4;
        }

        VAR_5 = VAR_5->Flink;
    }

    FUNC_1("Found no entry!\n");
    return ((void*)0);
}
