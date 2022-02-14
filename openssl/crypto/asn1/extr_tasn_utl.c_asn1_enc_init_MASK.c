
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modified; scalar_t__ len; int * enc; } ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;
typedef TYPE_1__ ASN1_ENCODING ;


 TYPE_1__* FUNC_0 (int **,int const*) ;

void FUNC_1(ASN1_VALUE **VAR_0, const ASN1_ITEM *VAR_1)
{
    ASN1_ENCODING *VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2 != ((void*)0)) {
        VAR_2->enc = ((void*)0);
        VAR_2->len = 0;
        VAR_2->modified = 1;
    }
}
