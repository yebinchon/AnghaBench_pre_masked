
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 long VAR_3 ;
 unsigned char const VAR_4 ;
 unsigned char const VAR_5 ;
 unsigned char const VAR_6 ;
 int FUNC_1 (unsigned char const**,int*,long*,long) ;

int FUNC_2(const unsigned char **VAR_7, long *VAR_8, int *VAR_9,
                    int *VAR_10, long VAR_11)
{
    int VAR_12, VAR_13;
    long VAR_14;
    const unsigned char *VAR_15 = *VAR_7;
    int VAR_16, VAR_17, VAR_18;
    long VAR_19 = VAR_11;

    if (!VAR_19)
        goto err;
    VAR_13 = (*VAR_15 & VAR_4);
    VAR_17 = (*VAR_15 & VAR_6);
    VAR_12 = *VAR_15 & VAR_5;
    if (VAR_12 == VAR_5) {
        VAR_15++;
        if (--VAR_19 == 0)
            goto err;
        VAR_14 = 0;
        while (*VAR_15 & 0x80) {
            VAR_14 <<= 7L;
            VAR_14 |= *(VAR_15++) & 0x7f;
            if (--VAR_19 == 0)
                goto err;
            if (VAR_14 > (VAR_3 >> 7L))
                goto err;
        }
        VAR_14 <<= 7L;
        VAR_14 |= *(VAR_15++) & 0x7f;
        VAR_16 = (int)VAR_14;
        if (--VAR_19 == 0)
            goto err;
    } else {
        VAR_16 = VAR_12;
        VAR_15++;
        if (--VAR_19 == 0)
            goto err;
    }
    *VAR_9 = VAR_16;
    *VAR_10 = VAR_17;
    if (!FUNC_1(&VAR_15, &VAR_18, VAR_8, VAR_19))
        goto err;

    if (VAR_18 && !(VAR_13 & VAR_4))
        goto err;

    if (*VAR_8 > (VAR_11 - (VAR_15 - *VAR_7))) {
        FUNC_0(VAR_0, VAR_2);




        VAR_13 |= 0x80;
    }
    *VAR_7 = VAR_15;
    return VAR_13 | VAR_18;
 err:
    FUNC_0(VAR_0, VAR_1);
    return 0x80;
}
