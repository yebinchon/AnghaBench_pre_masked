
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * VAR_0 ;

int FUNC_1(int VAR_1, int VAR_2)
{
    int VAR_3;
    VAR_1 <<= (8 - VAR_2) * 4;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
        FUNC_0(VAR_0[(VAR_1 >> 28) & 15]);
        VAR_1 <<= 4;
    }
    return VAR_3;
}
