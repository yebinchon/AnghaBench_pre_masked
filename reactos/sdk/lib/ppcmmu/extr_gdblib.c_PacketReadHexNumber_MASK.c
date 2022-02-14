
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(int VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2 && FUNC_1(VAR_1[VAR_0]); VAR_3++)
    {
        VAR_4 <<= 4;
        VAR_4 |= FUNC_0(VAR_1[VAR_0++]);
    }
    return VAR_4;
}
