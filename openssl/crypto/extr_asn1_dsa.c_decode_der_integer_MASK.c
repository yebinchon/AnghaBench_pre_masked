
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int,int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(PACKET *VAR_1, BIGNUM *VAR_2)
{
    PACKET VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6;


    if (!FUNC_2(VAR_1, &VAR_5)
            || VAR_5 != VAR_0
            || !FUNC_4(VAR_1, &VAR_3))
        return 0;


    VAR_4 = VAR_3;

    if (!FUNC_2(&VAR_4, &VAR_6)
            || (VAR_6 & 0x80) != 0)
        return 0;

    if (FUNC_3(&VAR_4) > 0 && VAR_6 == 0) {
        if (!FUNC_2(&VAR_4, &VAR_6)
                || (VAR_6 & 0x80) == 0)
            return 0;
    }

    if (FUNC_0(FUNC_1(&VAR_3),
                  (int)FUNC_3(&VAR_3), VAR_2) == ((void*)0))
        return 0;

    return 1;
}
