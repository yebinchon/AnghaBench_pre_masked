
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bytes; } ;
typedef TYPE_2__ X509_NAME ;
struct TYPE_5__ {size_t length; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;

int FUNC_1(X509_NAME *VAR_0, const unsigned char **VAR_1,
                       size_t *VAR_2)
{

    if (FUNC_0(VAR_0, ((void*)0)) <= 0)
        return 0;
    if (VAR_1 != ((void*)0))
        *VAR_1 = (unsigned char *)VAR_0->bytes->data;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->bytes->length;
    return 1;
}
