
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int neg; scalar_t__ top; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (unsigned char const*,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;

BIGNUM *FUNC_7(const unsigned char *VAR_3, int VAR_4, BIGNUM *VAR_5)
{
    long VAR_6;
    int VAR_7 = 0;
    BIGNUM *VAR_8 = ((void*)0);

    if (VAR_4 < 4) {
        FUNC_5(VAR_0, VAR_2);
        return ((void*)0);
    }
    VAR_6 = ((long)VAR_3[0] << 24) | ((long)VAR_3[1] << 16) | ((int)VAR_3[2] << 8) | (int)
        VAR_3[3];
    if ((VAR_6 + 4) != VAR_4) {
        FUNC_5(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (VAR_5 == ((void*)0))
        VAR_8 = FUNC_3();
    else
        VAR_8 = VAR_5;

    if (VAR_8 == ((void*)0))
        return ((void*)0);

    if (VAR_6 == 0) {
        VAR_8->neg = 0;
        VAR_8->top = 0;
        return VAR_8;
    }
    VAR_3 += 4;
    if ((*VAR_3) & 0x80)
        VAR_7 = 1;
    if (FUNC_0(VAR_3, (int)VAR_6, VAR_8) == ((void*)0)) {
        if (VAR_5 == ((void*)0))
            FUNC_2(VAR_8);
        return ((void*)0);
    }
    VAR_8->neg = VAR_7;
    if (VAR_7) {
        FUNC_1(VAR_8, FUNC_4(VAR_8) - 1);
    }
    FUNC_6(VAR_8);
    return VAR_8;
}
