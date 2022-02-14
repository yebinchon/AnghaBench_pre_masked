
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 double* VAR_2 ;

double FUNC_2(const char *VAR_3, char **VAR_4)
{
    int VAR_5 = 511;





    int VAR_6, VAR_7 = VAR_0;
    double VAR_8, VAR_9, *VAR_10;
    register const char *VAR_11;
    register int VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15;
    int VAR_16;

    const char *VAR_17;






    VAR_11 = VAR_3;
    while (FUNC_1((unsigned char)(*VAR_11)))
    {
        VAR_11 += 1;
    }
    if (*VAR_11 == '-')
    {
        VAR_6 = VAR_1;
        VAR_11 += 1;
    }
    else
    {
        if (*VAR_11 == '+')
        {
            VAR_11 += 1;
        }
        VAR_6 = VAR_0;
    }






    VAR_16 = -1;
    for (VAR_15 = 0; ; VAR_15 += 1)
    {
        VAR_12 = *VAR_11;
        if (!FUNC_0(VAR_12))
        {
            if ((VAR_12 != '.') || (VAR_16 >= 0))
            {
                break;
            }
            VAR_16 = VAR_15;
        }
        VAR_11 += 1;
    }
    VAR_17 = VAR_11;
    VAR_11 -= VAR_15;
    if (VAR_16 < 0)
    {
        VAR_16 = VAR_15;
    }
    else
    {
        VAR_15 -= 1;
    }
    if (VAR_15 > 18)
    {
        VAR_14 = VAR_16 - 18;
        VAR_15 = 18;
    }
    else
    {
        VAR_14 = VAR_16 - VAR_15;
    }
    if (VAR_15 == 0)
    {
        VAR_8 = 0.0;
        VAR_11 = VAR_3;
        goto done;
    }
    else
    {
        int VAR_18, VAR_19;
        VAR_18 = 0;
        for ( ; VAR_15 > 9; VAR_15 -= 1)
        {
            VAR_12 = *VAR_11;
            VAR_11 += 1;
            if (VAR_12 == '.')
            {
                VAR_12 = *VAR_11;
                VAR_11 += 1;
            }
            VAR_18 = 10 * VAR_18 + (VAR_12 - '0');
        }
        VAR_19 = 0;
        for (; VAR_15 > 0; VAR_15 -= 1)
        {
            VAR_12 = *VAR_11;
            VAR_11 += 1;
            if (VAR_12 == '.')
            {
                VAR_12 = *VAR_11;
                VAR_11 += 1;
            }
            VAR_19 = 10 * VAR_19 + (VAR_12 - '0');
        }
        VAR_8 = (1.0e9 * VAR_18) + VAR_19;
    }





    VAR_11 = VAR_17;
    if ((*VAR_11 == 'E') || (*VAR_11 == 'e'))
    {
        VAR_11 += 1;
        if (*VAR_11 == '-')
        {
            VAR_7 = VAR_1;
            VAR_11 += 1;
        }
        else
        {
            if (*VAR_11 == '+')
            {
                VAR_11 += 1;
            }
            VAR_7 = VAR_0;
        }
        if (!FUNC_0((unsigned char)(*VAR_11)))
        {
            VAR_11 = VAR_17;
            goto done;
        }
        while (FUNC_0((unsigned char)(*VAR_11)))
        {
            VAR_13 = VAR_13 * 10 + (*VAR_11 - '0');
            VAR_11 += 1;
        }
    }
    if (VAR_7)
    {
        VAR_13 = VAR_14 - VAR_13;
    }
    else
    {
        VAR_13 = VAR_14 + VAR_13;
    }
    if (VAR_13 < 0)
    {
        VAR_7 = VAR_1;
        VAR_13 = -VAR_13;
    }
    else
    {
        VAR_7 = VAR_0;
    }
    if (VAR_13 > VAR_5)
    {
        VAR_13 = VAR_5;

    }
    VAR_9 = 1.0;
    for (VAR_10 = VAR_2; VAR_13 != 0; VAR_13 >>= 1, VAR_10 += 1)
    {
        if (VAR_13 & 01)
        {
            VAR_9 *= *VAR_10;
        }
    }
    if (VAR_7)
    {
        VAR_8 /= VAR_9;
    }
    else
    {
        VAR_8 *= VAR_9;
    }

done:
    if (VAR_4 != ((void*)0))
    {
        *VAR_4 = (char *) VAR_11;
    }

    if (VAR_6)
    {
        return -VAR_8;
    }
    return VAR_8;
}
