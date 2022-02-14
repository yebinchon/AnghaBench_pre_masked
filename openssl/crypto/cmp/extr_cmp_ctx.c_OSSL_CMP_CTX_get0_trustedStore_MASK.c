
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_3__ {int * trusted; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

X509_STORE *FUNC_1(const OSSL_CMP_CTX *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return ((void*)0);
    }
    return VAR_1->trusted;
}
