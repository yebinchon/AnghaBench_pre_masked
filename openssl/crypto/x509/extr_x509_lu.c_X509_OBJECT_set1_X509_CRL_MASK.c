
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * crl; } ;
struct TYPE_6__ {TYPE_1__ data; int type; } ;
typedef TYPE_2__ X509_OBJECT ;
typedef int X509_CRL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(X509_OBJECT *VAR_1, X509_CRL *VAR_2)
{
    if (VAR_1 == ((void*)0) || !FUNC_0(VAR_2))
        return 0;

    FUNC_1(VAR_1);
    VAR_1->type = VAR_0;
    VAR_1->data.crl = VAR_2;
    return 1;
}
