
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int* d; scalar_t__ neg; } ;
typedef int BIO ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 char* VAR_1 ;

int FUNC_2(BIO *VAR_2, const BIGNUM *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7 = 0;
    int VAR_8 = 0;

    if ((VAR_3->neg) && FUNC_0(VAR_2, "-", 1) != 1)
        goto end;
    if (FUNC_1(VAR_3) && FUNC_0(VAR_2, "0", 1) != 1)
        goto end;
    for (VAR_4 = VAR_3->top - 1; VAR_4 >= 0; VAR_4--) {
        for (VAR_5 = VAR_0 - 4; VAR_5 >= 0; VAR_5 -= 4) {

            VAR_6 = (int)((VAR_3->d[VAR_4] >> VAR_5) & 0x0f);
            if (VAR_7 || VAR_6 != 0) {
                if (FUNC_0(VAR_2, &VAR_1[VAR_6], 1) != 1)
                    goto end;
                VAR_7 = 1;
            }
        }
    }
    VAR_8 = 1;
 end:
    return VAR_8;
}
