
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* otherName; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int * value; int * type_id; } ;
typedef TYPE_3__ GENERAL_NAME ;
typedef int ASN1_TYPE ;
typedef int ASN1_OBJECT ;


 scalar_t__ VAR_0 ;

int FUNC_0(const GENERAL_NAME *VAR_1,
                                ASN1_OBJECT **VAR_2, ASN1_TYPE **VAR_3)
{
    if (VAR_1->type != VAR_0)
        return 0;
    if (VAR_2)
        *VAR_2 = VAR_1->d.otherName->type_id;
    if (VAR_3)
        *VAR_3 = VAR_1->d.otherName->value;
    return 1;
}
