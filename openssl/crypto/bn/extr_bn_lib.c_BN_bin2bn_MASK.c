
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int top; long* d; scalar_t__ neg; } ;
typedef long BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*,int) ;

BIGNUM *FUNC_5(const unsigned char *VAR_1, int VAR_2, BIGNUM *VAR_3)
{
    unsigned int VAR_4, VAR_5;
    unsigned int VAR_6;
    BN_ULONG VAR_7;
    BIGNUM *VAR_8 = ((void*)0);

    if (VAR_3 == ((void*)0))
        VAR_3 = VAR_8 = FUNC_1();
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    FUNC_2(VAR_3);

    for ( ; VAR_2 > 0 && *VAR_1 == 0; VAR_1++, VAR_2--)
        continue;
    VAR_6 = VAR_2;
    if (VAR_6 == 0) {
        VAR_3->top = 0;
        return VAR_3;
    }
    VAR_4 = ((VAR_6 - 1) / VAR_0) + 1;
    VAR_5 = ((VAR_6 - 1) % (VAR_0));
    if (FUNC_4(VAR_3, (int)VAR_4) == ((void*)0)) {
        FUNC_0(VAR_8);
        return ((void*)0);
    }
    VAR_3->top = VAR_4;
    VAR_3->neg = 0;
    VAR_7 = 0;
    while (VAR_6--) {
        VAR_7 = (VAR_7 << 8L) | *(VAR_1++);
        if (VAR_5-- == 0) {
            VAR_3->d[--VAR_4] = VAR_7;
            VAR_7 = 0;
            VAR_5 = VAR_0 - 1;
        }
    }




    FUNC_3(VAR_3);
    return VAR_3;
}
