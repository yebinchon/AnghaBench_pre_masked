
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ CONF_VALUE ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (TYPE_1__ const*) ;
 int * FUNC_1 (int *,int ) ;

int FUNC_2(const CONF_VALUE *VAR_0, ASN1_INTEGER **VAR_1)
{
    ASN1_INTEGER *VAR_2;

    if ((VAR_2 = FUNC_1(((void*)0), VAR_0->value)) == ((void*)0)) {
        FUNC_0(VAR_0);
        return 0;
    }
    *VAR_1 = VAR_2;
    return 1;
}
