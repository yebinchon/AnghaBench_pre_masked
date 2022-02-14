
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef unsigned int DWORD ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static DWORD FUNC_1( WCHAR *VAR_0, const WCHAR *VAR_1, DWORD VAR_2 )
{
    static const WCHAR VAR_3[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    DWORD VAR_4 = VAR_2;
    unsigned int VAR_5;
    WCHAR *VAR_6 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_6++)
    {
        if (FUNC_0( VAR_1[VAR_5] ))
        {
            VAR_6[0] = '%';
            VAR_6[1] = VAR_3[(VAR_1[VAR_5] >> 4) & 0xf];
            VAR_6[2] = VAR_3[VAR_1[VAR_5] & 0xf];
            VAR_4 += 2;
            VAR_6 += 2;
        }
        else *VAR_6 = VAR_1[VAR_5];
    }
    VAR_0[VAR_4] = 0;
    return VAR_4;
}
