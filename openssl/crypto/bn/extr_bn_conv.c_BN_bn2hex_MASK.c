
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int* d; scalar_t__ neg; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 void** VAR_4 ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;

char *FUNC_4(const BIGNUM *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
    char *VAR_10;
    char *VAR_11;

    if (FUNC_0(VAR_5))
        return FUNC_3("0");
    VAR_10 = FUNC_2(VAR_5->top * VAR_1 * 2 + 2);
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_3);
        goto err;
    }
    VAR_11 = VAR_10;
    if (VAR_5->neg)
        *VAR_11++ = '-';
    for (VAR_6 = VAR_5->top - 1; VAR_6 >= 0; VAR_6--) {
        for (VAR_7 = VAR_0 - 8; VAR_7 >= 0; VAR_7 -= 8) {

            VAR_8 = (int)((VAR_5->d[VAR_6] >> VAR_7) & 0xff);
            if (VAR_9 || VAR_8 != 0) {
                *VAR_11++ = VAR_4[VAR_8 >> 4];
                *VAR_11++ = VAR_4[VAR_8 & 0x0f];
                VAR_9 = 1;
            }
        }
    }
    *VAR_11 = '\0';
 err:
    return VAR_10;
}
