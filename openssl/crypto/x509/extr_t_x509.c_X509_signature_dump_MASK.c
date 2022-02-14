
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_STRING ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,unsigned char const,char*) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3(BIO *VAR_0, const ASN1_STRING *VAR_1, int VAR_2)
{
    const unsigned char *VAR_3;
    int VAR_4, VAR_5;

    VAR_5 = VAR_1->length;
    VAR_3 = VAR_1->data;
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if ((VAR_4 % 18) == 0) {
            if (VAR_4 > 0 && FUNC_2(VAR_0, "\n", 1) <= 0)
                return 0;
            if (FUNC_0(VAR_0, VAR_2, VAR_2) <= 0)
                return 0;
        }
        if (FUNC_1(VAR_0, "%02x%s", VAR_3[VAR_4], ((VAR_4 + 1) == VAR_5) ? "" : ":") <= 0)
            return 0;
    }
    if (FUNC_2(VAR_0, "\n", 1) != 1)
        return 0;

    return 1;
}
