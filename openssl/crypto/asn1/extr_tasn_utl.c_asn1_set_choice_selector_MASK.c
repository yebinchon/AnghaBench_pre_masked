
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int utype; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int* FUNC_0 (int *,int ) ;

int FUNC_1(ASN1_VALUE **VAR_0, int VAR_1,
                             const ASN1_ITEM *VAR_2)
{
    int *VAR_3, VAR_4;

    VAR_3 = FUNC_0(*VAR_0, VAR_2->utype);
    VAR_4 = *VAR_3;
    *VAR_3 = VAR_1;
    return VAR_4;
}
