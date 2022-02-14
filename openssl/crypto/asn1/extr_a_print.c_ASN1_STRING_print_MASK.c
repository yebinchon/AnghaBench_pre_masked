
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_STRING ;


 scalar_t__ FUNC_0 (int *,char*,int) ;

int FUNC_1(BIO *VAR_0, const ASN1_STRING *VAR_1)
{
    int VAR_2, VAR_3;
    char VAR_4[80];
    const char *VAR_5;

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_3 = 0;
    VAR_5 = (const char *)VAR_1->data;
    for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
        if ((VAR_5[VAR_2] > '~') || ((VAR_5[VAR_2] < ' ') &&
                             (VAR_5[VAR_2] != '\n') && (VAR_5[VAR_2] != '\r')))
            VAR_4[VAR_3] = '.';
        else
            VAR_4[VAR_3] = VAR_5[VAR_2];
        VAR_3++;
        if (VAR_3 >= 80) {
            if (FUNC_0(VAR_0, VAR_4, VAR_3) <= 0)
                return 0;
            VAR_3 = 0;
        }
    }
    if (VAR_3 > 0)
        if (FUNC_0(VAR_0, VAR_4, VAR_3) <= 0)
            return 0;
    return 1;
}
