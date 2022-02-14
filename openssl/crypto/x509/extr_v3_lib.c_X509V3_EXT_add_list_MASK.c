
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ext_nid; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(X509V3_EXT_METHOD *VAR_0)
{
    for (; VAR_0->ext_nid != -1; VAR_0++)
        if (!FUNC_0(VAR_0))
            return 0;
    return 1;
}
