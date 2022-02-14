
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int modified; int * entries; int * bytes; } ;
typedef TYPE_1__ X509_NAME ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;

__attribute__((used)) static int FUNC_6(ASN1_VALUE **VAR_2, const ASN1_ITEM *VAR_3)
{
    X509_NAME *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0))
        goto memerr;
    if ((VAR_4->entries = FUNC_5()) == ((void*)0))
        goto memerr;
    if ((VAR_4->bytes = FUNC_1()) == ((void*)0))
        goto memerr;
    VAR_4->modified = 1;
    *VAR_2 = (ASN1_VALUE *)VAR_4;
    return 1;

 memerr:
    FUNC_0(VAR_0, VAR_1);
    if (VAR_4) {
        FUNC_4(VAR_4->entries);
        FUNC_2(VAR_4);
    }
    return 0;
}
