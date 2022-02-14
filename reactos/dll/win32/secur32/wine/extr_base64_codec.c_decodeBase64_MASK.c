
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SECURITY_STATUS ;
typedef int* PBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char) ;

SECURITY_STATUS FUNC_2(char *VAR_3, int VAR_4, PBYTE VAR_5,
        int VAR_6, int *VAR_7)
{
    int VAR_8 = VAR_4, VAR_9;
    char *VAR_10 = VAR_3;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    FUNC_0("in_len: %d\n", VAR_4);

    if((VAR_4 % 4) != 0)
        return VAR_1;

    if(VAR_4 > VAR_6)
        return VAR_0;

    VAR_9 = 0;
    while(VAR_8 > 4)
    {
        if((VAR_11 = FUNC_1(VAR_10[0])) > 63)
            return VAR_1;
        if((VAR_12 = FUNC_1(VAR_10[1])) > 63)
            return VAR_1;
        if((VAR_13 = FUNC_1(VAR_10[2])) > 63)
            return VAR_1;
        if((VAR_14 = FUNC_1(VAR_10[3])) > 63)
            return VAR_1;

        VAR_5[VAR_9 + 0] = (VAR_11 << 2) | (VAR_12 >> 4);
        VAR_5[VAR_9 + 1] = (VAR_12 << 4) | (VAR_13 >> 2);
        VAR_5[VAR_9 + 2] = (VAR_13 << 6) | VAR_14;
        VAR_8 -= 4;
        VAR_9 += 3;
        VAR_10 += 4;
    }

    if(VAR_10[2] == '=')
    {
        if((VAR_11 = FUNC_1(VAR_10[0])) > 63)
            return VAR_1;
        if((VAR_12 = FUNC_1(VAR_10[1])) > 63)
            return VAR_1;

        VAR_5[VAR_9] = (VAR_11 << 2) | (VAR_12 >> 4);
        VAR_9++;
    }
    else if(VAR_10[3] == '=')
    {
        if((VAR_11 = FUNC_1(VAR_10[0])) > 63)
            return VAR_1;
        if((VAR_12 = FUNC_1(VAR_10[1])) > 63)
            return VAR_1;
        if((VAR_13 = FUNC_1(VAR_10[2])) > 63)
            return VAR_1;

        VAR_5[VAR_9 + 0] = (VAR_11 << 2) | (VAR_12 >> 4);
        VAR_5[VAR_9 + 1] = (VAR_12 << 4) | (VAR_13 >> 2);
        VAR_9 += 2;
    }
    else
    {
        if((VAR_11 = FUNC_1(VAR_10[0])) > 63)
            return VAR_1;
        if((VAR_12 = FUNC_1(VAR_10[1])) > 63)
            return VAR_1;
        if((VAR_13 = FUNC_1(VAR_10[2])) > 63)
            return VAR_1;
        if((VAR_14 = FUNC_1(VAR_10[3])) > 63)
            return VAR_1;


        VAR_5[VAR_9 + 0] = (VAR_11 << 2) | (VAR_12 >> 4);
        VAR_5[VAR_9 + 1] = (VAR_12 << 4) | (VAR_13 >> 2);
        VAR_5[VAR_9 + 2] = (VAR_13 << 6) | VAR_14;
        VAR_9 += 3;
    }
    *VAR_7 = VAR_9;
    return VAR_2;
}
