
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int returnedstringw ;
typedef char WCHAR ;
typedef int HINSTANCE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HINSTANCE VAR_2 = FUNC_1(((void*)0));
    WCHAR VAR_3[128], VAR_4[128], *VAR_5 = ((void*)0);
    char VAR_6[128], VAR_7[128];
    int VAR_8, VAR_9, VAR_10;



    FUNC_3(0xdeadbeef);
    VAR_8 = FUNC_2(VAR_2, 2, (WCHAR *) &VAR_5, 0);
    if (!VAR_8)
    {
        if (FUNC_0() == VAR_1)
            FUNC_8( "LoadStringW not implemented\n" );
        else
            FUNC_8( "LoadStringW does not return a pointer to the resource\n" );
        return;
    }
    VAR_9 = FUNC_2(VAR_2, 2, VAR_4, sizeof(VAR_4) /sizeof(WCHAR));
    FUNC_7(VAR_9 > 0, "LoadStringW failed to load resource 2, ret %d, err %d\n", VAR_9, FUNC_0());
    FUNC_7(VAR_8 == VAR_9, "LoadStringW returned different values dependent on buflen. ret1 %d, ret2 %d\n",
        VAR_8, VAR_9);
    FUNC_7(VAR_8 > 0 && VAR_5 != ((void*)0), "LoadStringW failed to get pointer to resource 2, ret %d, err %d\n",
        VAR_8, FUNC_0());


    if(VAR_5 != ((void*)0))
    {
        FUNC_6(VAR_3, VAR_5, VAR_8 * sizeof(WCHAR));
        VAR_3[VAR_8] = '\0';

        FUNC_4( VAR_0, 0, VAR_4, -1, VAR_7, 128, ((void*)0), ((void*)0) );
        FUNC_4( VAR_0, 0, VAR_3, -1, VAR_6, 128, ((void*)0), ((void*)0) );
        FUNC_7(!FUNC_5(VAR_3, VAR_4, (VAR_9 + 1)*sizeof(WCHAR)),
           "strings don't match: returnedstring = %s, copiedstring = %s\n", VAR_7, VAR_6);
    }


    VAR_10 = FUNC_2(VAR_2, 2, ((void*)0), 0);
    FUNC_7(!VAR_10, "LoadStringW returned a non-zero value when called with buffer = NULL, retvalue = %d\n", VAR_10);

    VAR_10 = FUNC_2(VAR_2, 2, ((void*)0), 128);
    FUNC_7(!VAR_10, "LoadStringW returned a non-zero value when called with buffer = NULL, retvalue = %d\n", VAR_10);
}
