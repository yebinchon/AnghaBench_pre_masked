
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hwndActiveChild; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 scalar_t__* FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HWND FUNC_6(MDICLIENTINFO *VAR_4, HWND VAR_5, BOOL VAR_6,
                            DWORD VAR_7 )
{
    int VAR_8;
    HWND *VAR_9;
    HWND VAR_10 = 0;

    VAR_7 |= VAR_2 | VAR_3;
    if( !VAR_5 ) VAR_5 = VAR_4->hwndActiveChild;

    if (!(VAR_9 = FUNC_5( FUNC_0(VAR_5) ))) return 0;
    VAR_8 = 0;

    while (VAR_9[VAR_8] && VAR_9[VAR_8] != VAR_5) VAR_8++;
    if (VAR_9[VAR_8]) VAR_8++;

    for ( ; VAR_9[VAR_8]; VAR_8++)
    {
        if (FUNC_2( VAR_9[VAR_8], VAR_1 )) continue;
        if ((FUNC_3( VAR_9[VAR_8], VAR_0 ) & VAR_7) != VAR_3) continue;
        VAR_10 = VAR_9[VAR_8];
        if (VAR_6) goto found;
    }

    for (VAR_8 = 0; VAR_9[VAR_8] && VAR_9[VAR_8] != VAR_5; VAR_8++)
    {
        if (FUNC_2( VAR_9[VAR_8], VAR_1 )) continue;
        if ((FUNC_3( VAR_9[VAR_8], VAR_0 ) & VAR_7) != VAR_3) continue;
        VAR_10 = VAR_9[VAR_8];
        if (VAR_6) goto found;
    }
 found:
    FUNC_4( FUNC_1(), 0, VAR_9 );
    return VAR_10;
}
