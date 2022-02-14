
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* canon_enc; int entries; int bytes; } ;
typedef TYPE_1__ X509_NAME ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2)
{
    X509_NAME *VAR_3;

    if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
        return;
    VAR_3 = (X509_NAME *)*VAR_1;

    FUNC_0(VAR_3->bytes);
    FUNC_2(VAR_3->entries, VAR_0);
    FUNC_1(VAR_3->canon_enc);
    FUNC_1(VAR_3);
    *VAR_1 = ((void*)0);
}
