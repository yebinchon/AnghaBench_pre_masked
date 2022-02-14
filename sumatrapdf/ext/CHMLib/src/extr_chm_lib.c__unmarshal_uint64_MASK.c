
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;



__attribute__((used)) static int FUNC_0(unsigned char **VAR_0,
                             unsigned int *VAR_1,
                             UInt64 *VAR_2)
{
    UInt64 VAR_3;
    int VAR_4;
    if (8 > *VAR_1)
        return 0;
    VAR_3=0;
    for(VAR_4=8; VAR_4>0; VAR_4--)
    {
        VAR_3 <<= 8;
        VAR_3 |= (*VAR_0)[VAR_4-1];
    }
    *VAR_2 = VAR_3;
    *VAR_0 += 8;
    *VAR_1 -= 8;
    return 1;
}
