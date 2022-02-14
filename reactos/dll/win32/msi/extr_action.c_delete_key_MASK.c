
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int REGSAM ;
typedef int MSICOMPONENT ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int const*,int ,scalar_t__*,int ,int) ;
 scalar_t__* FUNC_7 (scalar_t__ const*) ;
 scalar_t__* FUNC_8 (scalar_t__*,char) ;

__attribute__((used)) static void FUNC_9( const MSICOMPONENT *VAR_2, HKEY VAR_3, const WCHAR *VAR_4 )
{
    REGSAM VAR_5 = 0;
    WCHAR *VAR_6, *VAR_7;
    HKEY VAR_8;
    LONG VAR_9;

    VAR_5 |= FUNC_4( VAR_2 );

    if (!(VAR_6 = FUNC_7( VAR_4 ))) return;
    do
    {
        if ((VAR_7 = FUNC_8( VAR_6, '\\' )))
        {
            *VAR_7 = 0;
            if (!VAR_7[1]) continue;
            VAR_8 = FUNC_6( VAR_2, VAR_3, VAR_6, VAR_0, VAR_5 | VAR_1 );
            if (!VAR_8) break;
            VAR_9 = FUNC_1( VAR_8, VAR_7 + 1, VAR_5, 0 );
            FUNC_0( VAR_8 );
        }
        else
            VAR_9 = FUNC_1( VAR_3, VAR_6, VAR_5, 0 );
        if (VAR_9)
        {
            FUNC_2("failed to delete key %s (%d)\n", FUNC_3(VAR_6), VAR_9);
            break;
        }
    } while (VAR_7);
    FUNC_5( VAR_6 );
}
