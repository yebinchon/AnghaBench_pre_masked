
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error_depth; int error; int (* verify_cb ) (int ,TYPE_1__*) ;int chain; int * current_cert; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(X509_STORE_CTX *VAR_1, X509 *VAR_2, int VAR_3, int VAR_4)
{
    VAR_1->error_depth = VAR_3;
    VAR_1->current_cert = (VAR_2 != ((void*)0)) ? VAR_2 : FUNC_0(VAR_1->chain, VAR_3);
    if (VAR_4 != VAR_0)
        VAR_1->error = VAR_4;
    return VAR_1->verify_cb(0, VAR_1);
}
