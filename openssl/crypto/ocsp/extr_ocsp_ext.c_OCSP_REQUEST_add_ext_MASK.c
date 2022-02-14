
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_4__ {int requestExtensions; } ;
struct TYPE_5__ {TYPE_1__ tbsRequest; } ;
typedef TYPE_2__ OCSP_REQUEST ;


 int * FUNC_0 (int *,int *,int) ;

int FUNC_1(OCSP_REQUEST *VAR_0, X509_EXTENSION *VAR_1, int VAR_2)
{
    return (FUNC_0(&(VAR_0->tbsRequest.requestExtensions), VAR_1, VAR_2) !=
            ((void*)0));
}
