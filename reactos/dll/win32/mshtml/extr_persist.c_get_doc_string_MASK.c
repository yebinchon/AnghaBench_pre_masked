
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsAString ;
struct TYPE_3__ {int nsdoc; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *,void**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_13(HTMLDocumentNode *VAR_5, char **VAR_6)
{
    nsIDOMNode *VAR_7;
    LPCWSTR VAR_8;
    nsAString VAR_9;
    nsresult VAR_10;
    HRESULT VAR_11;

    if(!VAR_5->nsdoc) {
        FUNC_4("NULL nsdoc\n");
        return VAR_2;
    }

    VAR_10 = FUNC_10(VAR_5->nsdoc, &VAR_3, (void**)&VAR_7);
    if(FUNC_2(VAR_10)) {
        FUNC_0("Could not get nsIDOMNode failed: %08x\n", VAR_10);
        return VAR_0;
    }

    FUNC_9(&VAR_9, ((void*)0));
    VAR_11 = FUNC_12(VAR_7, &VAR_9);
    FUNC_11(VAR_7);
    if(FUNC_1(VAR_11)) {
        FUNC_7(&VAR_9);
        return VAR_11;
    }

    FUNC_8(&VAR_9, &VAR_8);
    FUNC_3("%s\n", FUNC_5(VAR_8));

    *VAR_6 = FUNC_6(VAR_8);

    FUNC_7(&VAR_9);

    if(!*VAR_6)
        return VAR_1;
    return VAR_4;
}
