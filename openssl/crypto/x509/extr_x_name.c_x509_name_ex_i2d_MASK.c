
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bytes; scalar_t__ modified; } ;
typedef TYPE_2__ X509_NAME ;
struct TYPE_5__ {int length; int data; } ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(const ASN1_VALUE **VAR_0, unsigned char **VAR_1,
                            const ASN1_ITEM *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    X509_NAME *VAR_6 = (X509_NAME *)*VAR_0;

    if (VAR_6->modified) {
        VAR_5 = FUNC_2(VAR_6);
        if (VAR_5 < 0)
            return VAR_5;
        VAR_5 = FUNC_1(VAR_6);
        if (VAR_5 < 0)
            return VAR_5;
    }
    VAR_5 = VAR_6->bytes->length;
    if (VAR_1 != ((void*)0)) {
        FUNC_0(*VAR_1, VAR_6->bytes->data, VAR_5);
        *VAR_1 += VAR_5;
    }
    return VAR_5;
}
