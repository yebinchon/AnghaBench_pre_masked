
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMRange ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLDocument ;
typedef int nsIDOMDocumentFragment ;
typedef int nsAString ;
typedef int WCHAR ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int **) ;
 int FUNC_10 (int *,int *,int **) ;
 int FUNC_11 (int *) ;

HRESULT FUNC_12(nsIDOMHTMLDocument *VAR_2, nsIDOMNode *VAR_3, const WCHAR *VAR_4)
{
    nsIDOMDocumentFragment *VAR_5;
    nsIDOMNode *VAR_6;
    nsIDOMRange *VAR_7;
    nsAString VAR_8;
    nsresult VAR_9;
    HRESULT VAR_10 = VAR_1;

    VAR_9 = FUNC_6(VAR_2, &VAR_7);
    if(FUNC_1(VAR_9)) {
        FUNC_0("CreateRange failed: %08x\n", VAR_9);
        return VAR_0;
    }

    FUNC_4(&VAR_8, VAR_4);
    FUNC_10(VAR_7, &VAR_8, &VAR_5);
    FUNC_11(VAR_7);
    FUNC_3(&VAR_8);
    if(FUNC_1(VAR_9)) {
        FUNC_0("CreateContextualFragment failed: %08x\n", VAR_9);
        return VAR_0;
    }

    VAR_9 = FUNC_7(VAR_3, &VAR_6);
    if(FUNC_2(VAR_9) && VAR_6) {
        nsIDOMNode *VAR_11;

        VAR_9 = FUNC_9(VAR_6, (nsIDOMNode*)VAR_5, VAR_3, &VAR_11);
        FUNC_8(VAR_6);
        if(FUNC_1(VAR_9)) {
            FUNC_0("ReplaceChild failed: %08x\n", VAR_9);
            VAR_10 = VAR_0;
        }else if(VAR_11) {
            FUNC_8(VAR_11);
        }
    }else {
        FUNC_0("GetParentNode failed: %08x\n", VAR_9);
        VAR_10 = VAR_0;
    }

    FUNC_5(VAR_5);
    return VAR_10;
}
