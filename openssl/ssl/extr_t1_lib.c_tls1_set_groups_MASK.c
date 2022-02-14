
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(uint16_t **VAR_3, size_t *VAR_4,
                    int *VAR_5, size_t VAR_6)
{

    uint16_t *VAR_7;
    size_t VAR_8;




    unsigned long *VAR_9 = ((void*)0);
    unsigned long VAR_10 = 0;
    unsigned long VAR_11 = 0;

    if (VAR_6 == 0) {
        FUNC_2(VAR_1, VAR_2);
        return 0;
    }
    if ((VAR_7 = FUNC_1(VAR_6 * sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        unsigned long VAR_12;
        uint16_t VAR_13;
        VAR_13 = FUNC_3(VAR_5[VAR_8]);
        if ((VAR_13 & 0x00FF) >= (sizeof(unsigned long) * 8))
            goto err;
        VAR_12 = 1L << (VAR_13 & 0x00FF);
        VAR_9 = (VAR_13 < 0x100) ? &VAR_10 : &VAR_11;
        if (!VAR_13 || ((*VAR_9) & VAR_12))
            goto err;
        *VAR_9 |= VAR_12;
        VAR_7[VAR_8] = VAR_13;
    }
    FUNC_0(*VAR_3);
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_6;
    return 1;
err:
    FUNC_0(VAR_7);
    return 0;



}
