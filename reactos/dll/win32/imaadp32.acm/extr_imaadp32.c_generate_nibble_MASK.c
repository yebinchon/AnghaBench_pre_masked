
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static inline unsigned char FUNC_2(int VAR_2, int* VAR_3, int* VAR_4)
{
    int VAR_5, VAR_6 = VAR_2 - *VAR_4;
    unsigned VAR_7;
    unsigned char VAR_8;

    if (VAR_6 < 0)
    {
        VAR_6 = -VAR_6;
        VAR_8 = 8;
    }
    else
    {
        VAR_8 = 0;
    }

    VAR_7 = VAR_1[*VAR_3];
    VAR_5 = (VAR_7 >> 3);
    if (VAR_6 >= VAR_7)
    {
        VAR_8 |= 4;
        VAR_6 -= VAR_7;
        VAR_5 += VAR_7;
    }
    VAR_7 >>= 1;
    if (VAR_6 >= VAR_7)
    {
        VAR_8 |= 2;
        VAR_6 -= VAR_7;
        VAR_5 += VAR_7;
    }
    VAR_7 >>= 1;
    if (VAR_6 >= VAR_7)
    {
        VAR_8 |= 1;
        VAR_5 += VAR_7;
    }
    if (VAR_8 & 8) *VAR_4 -= VAR_5;
    else *VAR_4 += VAR_5;
    FUNC_0(VAR_4);
    *VAR_3 += VAR_0[VAR_8];
    FUNC_1(VAR_3);
    return VAR_8;
}
