
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(unsigned char **VAR_2,
                              unsigned int *VAR_3,
                              UInt64 *VAR_4)
{
    UInt64 VAR_5;
    int VAR_6;
    if (8 > *VAR_3)
        return VAR_0;
    VAR_5=0;
    for(VAR_6=8; VAR_6>0; VAR_6--)
    {
        VAR_5 <<= 8;
        VAR_5 |= (*VAR_2)[VAR_6-1];
    }
    *VAR_4 = VAR_5;
    *VAR_2 += 8;
    *VAR_3 -= 8;
    return VAR_1;
}
