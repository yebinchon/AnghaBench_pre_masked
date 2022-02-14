
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef int WCHAR ;
typedef int UINT16 ;
struct TYPE_4__ {int nsdoc; } ;
typedef int HTMLElement ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int const*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *,int **) ;
 scalar_t__ FUNC_12 (int ,int *,int **) ;
 scalar_t__ FUNC_13 (int *,int ,int **) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *,int*) ;
 scalar_t__ FUNC_16 (int *,int *,void**) ;
 int FUNC_17 (int *) ;

HRESULT FUNC_18(HTMLDocumentNode *VAR_7, const WCHAR *VAR_8, HTMLElement **VAR_9)
{
    nsIDOMNodeList *VAR_10;
    nsIDOMElement *VAR_11;
    nsIDOMNode *VAR_12;
    nsAString VAR_13;
    nsresult VAR_14;
    HRESULT VAR_15;

    if(!VAR_7->nsdoc) {
        FUNC_5("NULL nsdoc\n");
        return VAR_3;
    }

    FUNC_9(&VAR_13, VAR_8);

    VAR_14 = FUNC_11(VAR_7->nsdoc, &VAR_13, &VAR_11);
    if(FUNC_1(VAR_14)) {
        FUNC_0("GetElementById failed: %08x\n", VAR_14);
        FUNC_8(&VAR_13);
        return VAR_2;
    }


    VAR_14 = FUNC_12(VAR_7->nsdoc, &VAR_13, &VAR_10);
    FUNC_8(&VAR_13);
    if(FUNC_1(VAR_14)) {
        FUNC_0("getElementsByName failed: %08x\n", VAR_14);
        if(VAR_11)
            FUNC_10(VAR_11);
        return VAR_2;
    }

    VAR_14 = FUNC_13(VAR_10, 0, &VAR_12);
    FUNC_14(VAR_10);
    FUNC_6(VAR_14 == VAR_5);

    if(VAR_12 && VAR_11) {
        UINT16 VAR_16;

        VAR_14 = FUNC_15(VAR_12, (nsIDOMNode*)VAR_11, &VAR_16);
        if(FUNC_3(VAR_14)) {
            FUNC_2("CompareDocumentPosition failed: 0x%08x\n", VAR_14);
            FUNC_17(VAR_12);
            FUNC_10(VAR_11);
            return VAR_2;
        }

        FUNC_4("CompareDocumentPosition gave: 0x%x\n", VAR_16);
        if(!(VAR_16 & (VAR_1 | VAR_0))) {
            FUNC_10(VAR_11);
            VAR_11 = ((void*)0);
        }
    }

    if(VAR_12) {
        if(!VAR_11) {
            VAR_14 = FUNC_16(VAR_12, &VAR_4, (void**)&VAR_11);
            FUNC_6(VAR_14 == VAR_5);
        }
        FUNC_17(VAR_12);
    }

    if(!VAR_11) {
        *VAR_9 = ((void*)0);
        return VAR_6;
    }

    VAR_15 = FUNC_7(VAR_7, VAR_11, VAR_9);
    FUNC_10(VAR_11);
    return VAR_15;
}
