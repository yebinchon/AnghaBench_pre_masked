
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int UINT ;
typedef int * LPWSTR ;
typedef int HMODULE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static LPWSTR FUNC_4( DWORD VAR_5, HMODULE VAR_6, UINT VAR_7, WORD VAR_8 )
{
    LPWSTR VAR_9 = ((void*)0);
    if (VAR_5 & VAR_1)
        VAR_9 = FUNC_3( VAR_6, VAR_7, VAR_8 );
    if (!VAR_9 && (VAR_5 & VAR_2))
    {

        if (FUNC_2(VAR_7) == VAR_3 &&
            FUNC_1(VAR_7) == VAR_0)
        {
            VAR_7 = FUNC_0(VAR_7);
        }
        VAR_9 = FUNC_3( VAR_4, VAR_7, VAR_8 );
    }
    return VAR_9;
}
