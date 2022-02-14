
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bmpstring; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_5__ {int length; int data; } ;
typedef int PKCS12_SAFEBAG ;
typedef TYPE_3__ ASN1_TYPE ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;

char *FUNC_2(PKCS12_SAFEBAG *VAR_2)
{
    const ASN1_TYPE *VAR_3;

    if ((VAR_3 = FUNC_1(VAR_2, VAR_0)) == ((void*)0))
        return ((void*)0);
    if (VAR_3->type != VAR_1)
        return ((void*)0);
    return FUNC_0(VAR_3->value.bmpstring->data,
                            VAR_3->value.bmpstring->length);
}
