
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int nLen; int nBuffer; int * szData; } ;
typedef TYPE_1__ ME_String ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int *,int) ;

BOOL FUNC_5(ME_String *VAR_2, int VAR_3, const WCHAR *VAR_4, int VAR_5)
{
    DWORD VAR_6 = VAR_2->nLen + VAR_5 + 1;
    WCHAR *VAR_7;

    FUNC_1( VAR_2->nBuffer );
    FUNC_1( VAR_3 <= VAR_2->nLen );

    if( VAR_6 > VAR_2->nBuffer )
    {
        VAR_2->nBuffer = FUNC_0( VAR_6 );
        VAR_7 = FUNC_2( VAR_2->szData, VAR_2->nBuffer * sizeof(WCHAR) );
        if (!VAR_7) return VAR_0;
        VAR_2->szData = VAR_7;
    }

    FUNC_4( VAR_2->szData + VAR_3 + VAR_5, VAR_2->szData + VAR_3, (VAR_2->nLen - VAR_3 + 1) * sizeof(WCHAR) );
    FUNC_3( VAR_2->szData + VAR_3, VAR_4, VAR_5 * sizeof(WCHAR) );
    VAR_2->nLen += VAR_5;

    return VAR_1;
}
