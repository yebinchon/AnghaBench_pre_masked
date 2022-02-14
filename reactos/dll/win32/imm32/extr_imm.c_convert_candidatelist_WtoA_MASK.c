
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t dwCount; scalar_t__ dwSize; scalar_t__* dwOffset; } ;
typedef int * LPSTR ;
typedef int LPCWSTR ;
typedef TYPE_1__* LPCANDIDATELIST ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int *,scalar_t__,int *,int *) ;
 int * VAR_2 ;

__attribute__((used)) static DWORD FUNC_2(
        LPCANDIDATELIST VAR_3, LPCANDIDATELIST VAR_4, DWORD VAR_5)
{
    DWORD VAR_6, VAR_7, VAR_8;

    VAR_6 = FUNC_0( VAR_0, VAR_2[VAR_3->dwCount] );
    if ( VAR_4 && VAR_5 > 0 )
    {
        *VAR_4 = *VAR_3;
        VAR_4->dwOffset[0] = VAR_6;
    }

    for ( VAR_7 = 0; VAR_7 < VAR_3->dwCount; VAR_7++)
    {
        LPBYTE VAR_9 = (LPBYTE)VAR_3 + VAR_3->dwOffset[VAR_7];

        if ( VAR_4 && VAR_5 > 0 )
        {
            LPBYTE VAR_10 = (LPBYTE)VAR_4 + VAR_4->dwOffset[VAR_7];

            VAR_8 = FUNC_1(VAR_1, 0, (LPCWSTR)VAR_9, -1,
                                      (LPSTR)VAR_10, VAR_5, ((void*)0), ((void*)0));

            if ( VAR_7 + 1 < VAR_3->dwCount )
                VAR_4->dwOffset[VAR_7+1] = VAR_4->dwOffset[VAR_7] + VAR_8 * sizeof(char);
            VAR_5 -= VAR_8 * sizeof(char);
        }
        else
            VAR_8 = FUNC_1(VAR_1, 0, (LPCWSTR)VAR_9, -1, ((void*)0), 0, ((void*)0), ((void*)0));

        VAR_6 += VAR_8 * sizeof(char);
    }

    if ( VAR_4 )
        VAR_4->dwSize = VAR_6;

    return VAR_6;
}
