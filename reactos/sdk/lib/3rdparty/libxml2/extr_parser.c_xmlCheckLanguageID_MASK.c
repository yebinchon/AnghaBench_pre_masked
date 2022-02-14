
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;



int
FUNC_0(const xmlChar * VAR_0)
{
    const xmlChar *VAR_1 = VAR_0, *VAR_2;

    if (VAR_1 == ((void*)0))
        return (0);
    if (((VAR_1[0] == 'i') && (VAR_1[1] == '-')) ||
        ((VAR_1[0] == 'I') && (VAR_1[1] == '-')) ||
        ((VAR_1[0] == 'x') && (VAR_1[1] == '-')) ||
        ((VAR_1[0] == 'X') && (VAR_1[1] == '-'))) {





        VAR_1 += 2;
        while (((VAR_1[0] >= 'A') && (VAR_1[0] <= 'Z')) ||
               ((VAR_1[0] >= 'a') && (VAR_1[0] <= 'z')))
            VAR_1++;
        return(VAR_1[0] == 0);
    }
    VAR_2 = VAR_1;
    while (((VAR_2[0] >= 'A') && (VAR_2[0] <= 'Z')) ||
           ((VAR_2[0] >= 'a') && (VAR_2[0] <= 'z')))
           VAR_2++;
    if (VAR_2 - VAR_1 >= 4) {



        if ((VAR_2 - VAR_1 > 8) || (VAR_2[0] != 0))
            return(0);
        return(1);
    }
    if (VAR_2 - VAR_1 < 2)
        return(0);

    if (VAR_2[0] == 0)
        return(1);
    if (VAR_2[0] != '-')
        return(0);

    VAR_2++;
    VAR_1 = VAR_2;

    if ((VAR_2[0] >= '0') && (VAR_2[0] <= '9'))
        goto region_m49;

    while (((VAR_2[0] >= 'A') && (VAR_2[0] <= 'Z')) ||
           ((VAR_2[0] >= 'a') && (VAR_2[0] <= 'z')))
           VAR_2++;
    if (VAR_2 - VAR_1 == 4)
        goto script;
    if (VAR_2 - VAR_1 == 2)
        goto region;
    if ((VAR_2 - VAR_1 >= 5) && (VAR_2 - VAR_1 <= 8))
        goto variant;
    if (VAR_2 - VAR_1 != 3)
        return(0);

    if (VAR_2[0] == 0)
        return(1);
    if (VAR_2[0] != '-')
        return(0);

    VAR_2++;
    VAR_1 = VAR_2;

    if ((VAR_2[0] >= '0') && (VAR_2[0] <= '9'))
        goto region_m49;

    while (((VAR_2[0] >= 'A') && (VAR_2[0] <= 'Z')) ||
           ((VAR_2[0] >= 'a') && (VAR_2[0] <= 'z')))
           VAR_2++;
    if (VAR_2 - VAR_1 == 2)
        goto region;
    if ((VAR_2 - VAR_1 >= 5) && (VAR_2 - VAR_1 <= 8))
        goto variant;
    if (VAR_2 - VAR_1 != 4)
        return(0);

script:
    if (VAR_2[0] == 0)
        return(1);
    if (VAR_2[0] != '-')
        return(0);

    VAR_2++;
    VAR_1 = VAR_2;

    if ((VAR_2[0] >= '0') && (VAR_2[0] <= '9'))
        goto region_m49;

    while (((VAR_2[0] >= 'A') && (VAR_2[0] <= 'Z')) ||
           ((VAR_2[0] >= 'a') && (VAR_2[0] <= 'z')))
           VAR_2++;

    if ((VAR_2 - VAR_1 >= 5) && (VAR_2 - VAR_1 <= 8))
        goto variant;
    if (VAR_2 - VAR_1 != 2)
        return(0);

region:
    if (VAR_2[0] == 0)
        return(1);
    if (VAR_2[0] != '-')
        return(0);

    VAR_2++;
    VAR_1 = VAR_2;

    while (((VAR_2[0] >= 'A') && (VAR_2[0] <= 'Z')) ||
           ((VAR_2[0] >= 'a') && (VAR_2[0] <= 'z')))
           VAR_2++;

    if ((VAR_2 - VAR_1 < 5) || (VAR_2 - VAR_1 > 8))
        return(0);


variant:
    if (VAR_2[0] == 0)
        return(1);
    if (VAR_2[0] != '-')
        return(0);

    return (1);

region_m49:
    if (((VAR_2[1] >= '0') && (VAR_2[1] <= '9')) &&
        ((VAR_2[2] >= '0') && (VAR_2[2] <= '9'))) {
        VAR_2 += 3;
        goto region;
    }
    return(0);
}
