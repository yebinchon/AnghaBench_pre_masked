
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int * signer_cert; } ;
typedef TYPE_1__ TS_RESP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(TS_RESP_CTX *VAR_3, X509 *VAR_4)
{
    if (FUNC_1(VAR_4, VAR_2, 0) != 1) {
        FUNC_0(VAR_0,
              VAR_1);
        return 0;
    }
    FUNC_2(VAR_3->signer_cert);
    VAR_3->signer_cert = VAR_4;
    FUNC_3(VAR_3->signer_cert);
    return 1;
}
