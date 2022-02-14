
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int viewInfo ;
struct SelectCertData {int rgPropSheetPages; int cPropSheetPages; int rghStores; int cStores; int callbackData; scalar_t__ (* displayProc ) (int ,int ,int ) ;} ;
struct TYPE_4__ {int dwSize; int rgPropSheetPages; int cPropSheetPages; int rghStores; int cStores; int pCertContext; int hwndParent; } ;
typedef int PCCERT_CONTEXT ;
typedef int HWND ;
typedef TYPE_1__ CRYPTUI_VIEWCERTIFICATE_STRUCTW ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(HWND VAR_0, PCCERT_CONTEXT VAR_1, struct SelectCertData *VAR_2)
{
    CRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_3;

    if (VAR_2->displayProc && VAR_2->displayProc(VAR_1, VAR_0, VAR_2->callbackData))
        return;
    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.dwSize = sizeof(VAR_3);
    VAR_3.hwndParent = VAR_0;
    VAR_3.pCertContext = VAR_1;
    VAR_3.cStores = VAR_2->cStores;
    VAR_3.rghStores = VAR_2->rghStores;
    VAR_3.cPropSheetPages = VAR_2->cPropSheetPages;
    VAR_3.rgPropSheetPages = VAR_2->rgPropSheetPages;

    FUNC_0(&VAR_3, ((void*)0));
}
