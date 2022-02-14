
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* bag; } ;
struct TYPE_8__ {TYPE_2__ value; } ;
struct TYPE_6__ {int type; } ;
typedef TYPE_3__ PKCS12_SAFEBAG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__ const*) ;

int FUNC_2(const PKCS12_SAFEBAG *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_3);

    if (VAR_4 != VAR_0 && VAR_4 != VAR_1 && VAR_4 != VAR_2)
        return -1;
    return FUNC_0(VAR_3->value.bag->type);
}
