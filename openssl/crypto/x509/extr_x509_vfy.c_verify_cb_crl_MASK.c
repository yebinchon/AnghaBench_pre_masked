
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int (* verify_cb ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ X509_STORE_CTX ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(X509_STORE_CTX *VAR_0, int VAR_1)
{
    VAR_0->error = VAR_1;
    return VAR_0->verify_cb(0, VAR_0);
}
