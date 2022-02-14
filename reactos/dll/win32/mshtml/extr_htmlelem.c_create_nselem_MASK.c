
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef int WCHAR ;
struct TYPE_3__ {int nsdoc; } ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int **) ;

HRESULT FUNC_8(HTMLDocumentNode *VAR_4, const WCHAR *VAR_5, nsIDOMHTMLElement **VAR_6)
{
    nsIDOMElement *VAR_7;
    nsAString VAR_8;
    nsresult VAR_9;

    if(!VAR_4->nsdoc) {
        FUNC_2("NULL nsdoc\n");
        return VAR_1;
    }

    FUNC_4(&VAR_8, VAR_5);
    VAR_9 = FUNC_7(VAR_4->nsdoc, &VAR_8, &VAR_7);
    FUNC_3(&VAR_8);
    if(FUNC_1(VAR_9)) {
        FUNC_0("CreateElement failed: %08x\n", VAR_9);
        return VAR_0;
    }

    VAR_9 = FUNC_5(VAR_7, &VAR_2, (void**)VAR_6);
    FUNC_6(VAR_7);
    if(FUNC_1(VAR_9)) {
        FUNC_0("Could not get nsIDOMHTMLElement iface: %08x\n", VAR_9);
        return VAR_0;
    }

    return VAR_3;
}
