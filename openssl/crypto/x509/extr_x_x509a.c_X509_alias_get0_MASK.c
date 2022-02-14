
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* aux; } ;
typedef TYPE_3__ X509 ;
struct TYPE_6__ {TYPE_1__* alias; } ;
struct TYPE_5__ {int length; unsigned char* data; } ;



unsigned char *FUNC_0(X509 *VAR_0, int *VAR_1)
{
    if (!VAR_0->aux || !VAR_0->aux->alias)
        return ((void*)0);
    if (VAR_1)
        *VAR_1 = VAR_0->aux->alias->length;
    return VAR_0->aux->alias->data;
}
