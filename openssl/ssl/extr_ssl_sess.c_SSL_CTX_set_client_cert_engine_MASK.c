
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * client_cert_engine; } ;
typedef TYPE_1__ SSL_CTX ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(SSL_CTX *VAR_3, ENGINE *VAR_4)
{
    if (!FUNC_2(VAR_4)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }
    if (!FUNC_1(VAR_4)) {
        FUNC_3(VAR_1,
               VAR_2);
        FUNC_0(VAR_4);
        return 0;
    }
    VAR_3->client_cert_engine = VAR_4;
    return 1;
}
