
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ charset; int nsdoc; } ;
typedef scalar_t__ PRUnichar ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__ const**) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;

UINT FUNC_9(HTMLDocumentNode *VAR_1)
{
    nsAString VAR_2;
    UINT VAR_3 = 0;
    nsresult VAR_4;

    if(VAR_1->charset)
        return VAR_1->charset;

    FUNC_7(&VAR_2, ((void*)0));
    VAR_4 = FUNC_8(VAR_1->nsdoc, &VAR_2);
    if(FUNC_1(VAR_4)) {
        const PRUnichar *VAR_5;

        FUNC_6(&VAR_2, &VAR_5);

        if(*VAR_5) {
            BSTR VAR_6 = FUNC_2(VAR_5);
            VAR_3 = FUNC_4(VAR_6);
            FUNC_3(VAR_6);
        }
    }else {
        FUNC_0("GetCharset failed: %08x\n", VAR_4);
    }
    FUNC_5(&VAR_2);

    if(!VAR_3)
        return VAR_0;

    return VAR_1->charset = VAR_3;
}
