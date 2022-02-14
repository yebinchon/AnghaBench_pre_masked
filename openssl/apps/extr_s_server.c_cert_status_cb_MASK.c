
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ verbose; int * respin; } ;
typedef TYPE_1__ tlsextstatusctx ;
typedef int SSL ;
typedef int OCSP_RESPONSE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int VAR_3 ;
 int * FUNC_6 (int *,char,int ) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int **) ;
 int FUNC_9 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_10(SSL *VAR_4, void *VAR_5)
{
    tlsextstatusctx *VAR_6 = VAR_5;
    OCSP_RESPONSE *VAR_7 = ((void*)0);
    unsigned char *VAR_8 = ((void*)0);
    int VAR_9;
    int VAR_10 = VAR_1;

    if (VAR_6->verbose)
        FUNC_1(VAR_3, "cert_status: callback called\n");

    if (VAR_6->respin != ((void*)0)) {
        BIO *VAR_11 = FUNC_6(VAR_6->respin, 'r', VAR_0);
        if (VAR_11 == ((void*)0)) {
            FUNC_1(VAR_3, "cert_status: Cannot open OCSP response file\n");
            goto err;
        }
        VAR_7 = FUNC_7(VAR_11, ((void*)0));
        FUNC_0(VAR_11);
        if (VAR_7 == ((void*)0)) {
            FUNC_1(VAR_3, "cert_status: Error reading OCSP response\n");
            goto err;
        }
    } else {
        VAR_10 = FUNC_8(VAR_4, VAR_6, &VAR_7);
        if (VAR_10 != VAR_2)
            goto err;
    }

    VAR_9 = FUNC_9(VAR_7, &VAR_8);
    if (VAR_9 <= 0)
        goto err;

    FUNC_5(VAR_4, VAR_8, VAR_9);
    if (VAR_6->verbose) {
        FUNC_1(VAR_3, "cert_status: ocsp response sent:\n");
        FUNC_4(VAR_3, VAR_7, 2);
    }

    VAR_10 = VAR_2;

 err:
    if (VAR_10 != VAR_2)
        FUNC_2(VAR_3);

    FUNC_3(VAR_7);

    return VAR_10;
}
