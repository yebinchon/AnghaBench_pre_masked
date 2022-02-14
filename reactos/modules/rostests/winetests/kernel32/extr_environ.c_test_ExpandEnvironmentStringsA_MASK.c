
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef int buf1 ;
typedef int buf ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(void)
{
    const char* VAR_1="Long long value";
    const char* VAR_2="%NotAnEnvVar%";
    char VAR_3[256], VAR_4[256], VAR_5[0x8000];
    DWORD VAR_6, VAR_7;

    FUNC_3("EnvVar", VAR_1);

    VAR_6 = FUNC_0(((void*)0), VAR_4, sizeof(VAR_4));
    FUNC_5(VAR_6 == 1 || VAR_6 == 0 || VAR_6 == 2 ,
       "ExpandEnvironmentStrings returned %d\n", VAR_6);


    FUNC_7(VAR_3, "%EnvVar%");
    VAR_6 = FUNC_0(VAR_3, ((void*)0), 0);
    FUNC_5(VAR_6 == FUNC_8(VAR_1)+1 ||
       VAR_6 == (FUNC_8(VAR_1)+1)*2 ||
       VAR_6 == FUNC_8(VAR_1)+2 ||
       VAR_6 == 0 ,
       "ExpandEnvironmentStrings returned %d instead of %d, %d or %d\n",
       VAR_6, FUNC_4(VAR_1)+1, FUNC_4(VAR_1)+2, 0);


    VAR_6 = FUNC_0(VAR_3, VAR_4, 0);

    FUNC_5(VAR_6 == FUNC_8(VAR_1)+1 || VAR_6 == FUNC_8(VAR_1)+2 ||
       VAR_6 == (FUNC_8(VAR_1)+1)*2 ,
       "ExpandEnvironmentStrings returned %d instead of %d\n",
       VAR_6, FUNC_4(VAR_1)+1);


    VAR_6 = FUNC_0(VAR_3, VAR_4, 12);

    FUNC_5(VAR_6 == FUNC_8(VAR_1)+1 || VAR_6 == FUNC_8(VAR_1)+2 ||
       VAR_6 == (FUNC_8(VAR_1)+1)*2 ,
       "ExpandEnvironmentStrings returned %d instead of %d\n",
       VAR_6, FUNC_4(VAR_1)+1);



    VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_6);
    FUNC_5(VAR_6 == FUNC_8(VAR_1)+1 || VAR_6 == FUNC_8(VAR_1)+2 ||
       VAR_6 == (FUNC_8(VAR_1)+1)*2 ,
       "ExpandEnvironmentStrings returned %d instead of %d\n",
       VAR_6, FUNC_4(VAR_1)+1);
    FUNC_5(!FUNC_6(VAR_4, VAR_1), "ExpandEnvironmentStrings returned [%s]\n", VAR_4);


    FUNC_7(VAR_3, VAR_2);
    VAR_6 = FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
    FUNC_5(VAR_6 == FUNC_8(VAR_2)+1 ||
       VAR_6 == (FUNC_8(VAR_2)+1)*2 ,
       "ExpandEnvironmentStrings returned %d instead of %d\n", VAR_6, FUNC_4(VAR_2)+1);
    FUNC_5(!FUNC_6(VAR_4, VAR_2), "ExpandEnvironmentStrings returned [%s]\n", VAR_4);


    FUNC_7(VAR_3, "12345");
    VAR_6 = FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));
    FUNC_5(!FUNC_6(VAR_3, VAR_5), "ExpandEnvironmentStrings failed %s vs %s. ret_size = %d\n", VAR_3, VAR_5, VAR_6);

    VAR_7 = FUNC_2(VAR_4,256);
    FUNC_5 ((VAR_7 >0) && (VAR_7<256), "GetWindowsDirectory Failed\n");
    VAR_6 = FUNC_0("%SystemRoot%",VAR_3,sizeof(VAR_3));
    if (VAR_0 != FUNC_1())
    {
        FUNC_5(!FUNC_6(VAR_3, VAR_4), "ExpandEnvironmentStrings failed %s vs %s. ret_size = %d\n", VAR_3, VAR_4, VAR_6);
    }


    FUNC_3("IndirectVar", "Foo%EnvVar%Bar");
    FUNC_7(VAR_3, "Indirect-%IndirectVar%-Indirect");
    FUNC_7(VAR_5, "Indirect-Foo%EnvVar%Bar-Indirect");
    VAR_6 = FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
    FUNC_5(VAR_6 == FUNC_8(VAR_5)+1 ||
       VAR_6 == (FUNC_8(VAR_5)+1)*2 ,
       "ExpandEnvironmentStrings returned %d instead of %d\n", VAR_6, FUNC_4(VAR_5)+1);
    FUNC_5(!FUNC_6(VAR_4, VAR_5), "ExpandEnvironmentStrings returned [%s]\n", VAR_4);
    FUNC_3("IndirectVar", ((void*)0));

    FUNC_3("EnvVar", ((void*)0));
}
