
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int FUNC_2(const UCHAR *VAR_2, UCHAR *VAR_3)
{
    int VAR_4,VAR_5=0;

    if (!VAR_2) return 0;
    if (!VAR_3) return 0;

    VAR_3[VAR_5++] = VAR_0 * 2;
    for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_2[VAR_4]; VAR_4++)
    {
        VAR_3[VAR_5++] = ((VAR_2[VAR_4] & 0xf0) >> 4) + 'A';
        VAR_3[VAR_5++] = (VAR_2[VAR_4] & 0x0f) + 'A';
    }
    while (VAR_5 < VAR_0 * 2)
    {
        VAR_3[VAR_5++] = 'C';
        VAR_3[VAR_5++] = 'A';
    }
    if (*VAR_1)
    {
        int VAR_6 = FUNC_1(VAR_1);

        FUNC_0(VAR_3 + VAR_5, VAR_1, VAR_6);
        VAR_5 += VAR_6;
    }
    VAR_3[VAR_5++] = 0;
    return VAR_5;
}
