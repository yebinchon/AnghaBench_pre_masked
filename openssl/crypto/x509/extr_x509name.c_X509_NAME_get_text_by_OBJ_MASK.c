
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_OBJECT ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(X509_NAME *VAR_0, const ASN1_OBJECT *VAR_1,
                              char *VAR_2, int VAR_3)
{
    int VAR_4;
    const ASN1_STRING *VAR_5;

    VAR_4 = FUNC_2(VAR_0, VAR_1, -1);
    if (VAR_4 < 0)
        return -1;
    VAR_5 = FUNC_0(FUNC_1(VAR_0, VAR_4));
    if (VAR_2 == ((void*)0))
        return VAR_5->length;
    if (VAR_3 <= 0)
        return 0;
    VAR_4 = (VAR_5->length > (VAR_3 - 1)) ? (VAR_3 - 1) : VAR_5->length;
    FUNC_3(VAR_2, VAR_5->data, VAR_4);
    VAR_2[VAR_4] = '\0';
    return VAR_4;
}
