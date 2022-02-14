
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int DWORD ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int,void*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_1 ;
 int FUNC_10 (int) ;
 int VAR_2 ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (void*,char const*,void**,int*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char const*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_16()
{
    static const WCHAR VAR_3[] = { '\\','V','a','r','F','i','l','e','I','n','f','o',
                                          '\\','T','r','a','n','s','l','a','t','i','o','n', 0 };
    static const WCHAR VAR_4[] = { '\\','S','t','r','i','n','g','F','i','l','e','I','n','f','o',
                                       '\\','%','0','4','x','%','0','4','x',
                                       '\\','F','i','l','e','D','e','s','c','r','i','p','t','i','o','n',0 };
    WCHAR *VAR_5, VAR_6[VAR_1];




    DWORD VAR_7, VAR_8, VAR_9 = 0;

    DWORD VAR_10 = FUNC_4();
    DWORD *VAR_11;
    void *VAR_12 = ((void*)0);

    FUNC_2( 0, VAR_6, VAR_1 );
    if (!(VAR_8 = FUNC_0( VAR_6, ((void*)0) ))) goto done;
    if (!(VAR_12 = FUNC_6( FUNC_3(), 0, VAR_8 ))) goto done;
    if (!FUNC_1( VAR_6, 0, VAR_8, VAR_12 )) goto done;
    if (!FUNC_13( VAR_12, VAR_3, (void **)&VAR_11, &VAR_8 ) || !VAR_8) goto done;

    VAR_8 /= sizeof(DWORD);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) if (FUNC_8(VAR_11[VAR_7]) == VAR_10) break;
    if (VAR_7 == VAR_8)
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        if (FUNC_8(VAR_11[VAR_7]) == FUNC_9( FUNC_10(VAR_10), VAR_2 )) break;
    if (VAR_7 == VAR_8) VAR_7 = 0;

    FUNC_15( VAR_6, VAR_4, FUNC_8(VAR_11[VAR_7]), FUNC_5(VAR_11[VAR_7]) );
    if (!FUNC_13( VAR_12, VAR_6, (void **)&VAR_5, &VAR_8 )) goto done;
    FUNC_12( "found description %s\n", FUNC_14( VAR_5 ));
    if (VAR_5[0] == 0x200e && VAR_5[1] == 0x200e) VAR_9 = VAR_0;

done:
    FUNC_7( FUNC_3(), 0, VAR_12 );
    FUNC_11(VAR_9);
}
