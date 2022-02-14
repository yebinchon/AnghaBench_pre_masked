
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_LOOKUP_get_by_alias_fn ;
struct TYPE_3__ {int get_by_alias; } ;
typedef TYPE_1__ X509_LOOKUP_METHOD ;



int FUNC_0(X509_LOOKUP_METHOD *VAR_0,
                                      X509_LOOKUP_get_by_alias_fn VAR_1)
{
    VAR_0->get_by_alias = VAR_1;
    return 1;
}
