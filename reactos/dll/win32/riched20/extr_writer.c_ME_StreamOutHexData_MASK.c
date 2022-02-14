
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int ME_OutStream ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static BOOL
FUNC_2(ME_OutStream *VAR_3, const BYTE *VAR_4, UINT VAR_5)
{

    char VAR_6[VAR_1 * 2 + 1];
    UINT VAR_7, VAR_8;
    static const char VAR_9[] = "0123456789abcdef";

    while (VAR_5)
    {
        VAR_7 = FUNC_1( VAR_5, VAR_1 );
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            VAR_6[VAR_8 * 2] = VAR_9[(*VAR_4 >> 4) & 0xf];
            VAR_6[VAR_8 * 2 + 1] = VAR_9[*VAR_4 & 0xf];
            VAR_4++;
        }
        VAR_6[VAR_7 * 2] = '\n';
        if (!FUNC_0( VAR_3, VAR_6, VAR_7 * 2 + 1 ))
            return VAR_0;
        VAR_5 -= VAR_7;
    }
    return VAR_2;
}
