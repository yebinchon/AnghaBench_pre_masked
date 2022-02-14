
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( WCHAR *VAR_0, int *VAR_1, WCHAR ***VAR_2 )
{
    WCHAR **VAR_3, *VAR_4;
    int VAR_5, VAR_6;

    *VAR_1 = 0;
    *VAR_2 = ((void*)0);

    VAR_6 = FUNC_3( VAR_0, ((void*)0) );
    if (!(VAR_4 = FUNC_1( FUNC_0(), 0, (FUNC_4(VAR_0) + VAR_6 + 1) * sizeof(WCHAR) )))
        return;

    VAR_6 = FUNC_3( VAR_0, VAR_4 );
    if (!(VAR_3 = FUNC_1( FUNC_0(), 0, (VAR_6 + 1) * sizeof(WCHAR *) )))
    {
        FUNC_2( FUNC_0(), 0, VAR_4 );
        return;
    }
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
        VAR_3[VAR_5] = VAR_4;
        VAR_4 += FUNC_4( VAR_4 ) + 1;
    }
    VAR_3[VAR_5] = ((void*)0);

    *VAR_1 = VAR_6;
    *VAR_2 = VAR_3;
}
