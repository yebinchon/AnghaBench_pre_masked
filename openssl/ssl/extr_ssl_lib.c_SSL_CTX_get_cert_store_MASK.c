
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_3__ {int * cert_store; } ;
typedef TYPE_1__ SSL_CTX ;



X509_STORE *FUNC_0(const SSL_CTX *VAR_0)
{
    return VAR_0->cert_store;
}
