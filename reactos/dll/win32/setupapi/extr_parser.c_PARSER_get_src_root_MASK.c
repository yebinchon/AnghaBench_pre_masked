
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int HINF ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,unsigned int) ;
 scalar_t__* FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,unsigned int) ;

WCHAR *FUNC_4( HINF VAR_0 )
{
    unsigned int VAR_1;
    const WCHAR *VAR_2 = FUNC_2( VAR_0, &VAR_1 );
    WCHAR *VAR_3 = FUNC_1( FUNC_0(), 0, (VAR_1 + 1) * sizeof(WCHAR) );
    if (VAR_3)
    {
        FUNC_3( VAR_3, VAR_2, VAR_1 * sizeof(WCHAR) );
        VAR_3[VAR_1] = 0;
    }
    return VAR_3;
}
