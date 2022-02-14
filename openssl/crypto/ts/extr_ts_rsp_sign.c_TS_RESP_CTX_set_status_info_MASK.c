
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int response; } ;
struct TYPE_7__ {int * text; int status; } ;
typedef TYPE_1__ TS_STATUS_INFO ;
typedef TYPE_2__ TS_RESP_CTX ;
typedef int ASN1_UTF8STRING ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char const*) ;

int FUNC_11(TS_RESP_CTX *VAR_2,
                                int VAR_3, const char *VAR_4)
{
    TS_STATUS_INFO *VAR_5 = ((void*)0);
    ASN1_UTF8STRING *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    if ((VAR_5 = FUNC_6()) == ((void*)0))
        goto err;
    if (!FUNC_0(VAR_5->status, VAR_3))
        goto err;
    if (VAR_4) {
        if ((VAR_6 = FUNC_3()) == ((void*)0)
            || !FUNC_1(VAR_6, VAR_4, FUNC_10(VAR_4)))
            goto err;
        if (VAR_5->text == ((void*)0)
            && (VAR_5->text = FUNC_8()) == ((void*)0))
            goto err;
        if (!FUNC_9(VAR_5->text, VAR_6))
            goto err;
        VAR_6 = ((void*)0);
    }
    if (!FUNC_4(VAR_2->response, VAR_5))
        goto err;
    VAR_7 = 1;
 err:
    if (!VAR_7)
        FUNC_7(VAR_1, VAR_0);
    FUNC_5(VAR_5);
    FUNC_2(VAR_6);
    return VAR_7;
}
