
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BYTE ;


 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static BYTE *FUNC_3(UINT *VAR_0, UINT *VAR_1, UINT *VAR_2)
{
    BYTE *VAR_3;
    UINT VAR_4, VAR_5, VAR_6;

    *VAR_0 = 256;
    *VAR_1 = 256;
    *VAR_2 = (*VAR_0 * 3 + 3) & ~3;
    FUNC_2("width %d, height %d, stride %d\n", *VAR_0, *VAR_1, *VAR_2);

    VAR_3 = FUNC_1(FUNC_0(), 0, *VAR_2 * *VAR_1);

    VAR_6 = 256 / *VAR_0;
    if (!VAR_6) VAR_6 = 1;

    for (VAR_4 = 0; VAR_4 < *VAR_1; VAR_4++)
    {
        for (VAR_5 = 0; VAR_5 < *VAR_0; VAR_5++)
        {
            VAR_3[VAR_4 * *VAR_2 + VAR_5*3 + 0] = VAR_6 * VAR_4;
            VAR_3[VAR_4 * *VAR_2 + VAR_5*3 + 1] = VAR_6 * (255 - (VAR_4+VAR_5)/2);
            VAR_3[VAR_4 * *VAR_2 + VAR_5*3 + 2] = VAR_6 * VAR_5;
        }
    }

    return VAR_3;
}
