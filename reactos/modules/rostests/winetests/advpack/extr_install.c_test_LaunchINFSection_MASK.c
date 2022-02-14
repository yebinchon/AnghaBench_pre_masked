
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int *,int *,char*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_3;
    char VAR_4[VAR_1];
    static char VAR_5[] = "test.inf,DefaultInstall,4,0";
    static char VAR_6[] = "test.inf,,1,0";




    if (VAR_2)
    {

        VAR_3 = FUNC_7(((void*)0), ((void*)0), ((void*)0), 0);
        FUNC_6(VAR_3 == 1, "Expected 1, got %d\n", VAR_3);
    }

    FUNC_0("one", ((void*)0));
    FUNC_3("one\\test.inf");


    FUNC_5(VAR_4, VAR_0);
    FUNC_4(VAR_4, "\\");
    FUNC_4(VAR_4, "one\\test.inf,DefaultInstall,,4");
    VAR_3 = FUNC_7(((void*)0), ((void*)0), VAR_4, 0);
    FUNC_6(VAR_3 == 0, "Expected 0, got %d\n", VAR_3);

    FUNC_1("one\\test.inf");
    FUNC_2("one");

    FUNC_3("test.inf");


    VAR_3 = FUNC_7(((void*)0), ((void*)0), VAR_5, 0);
    FUNC_6(VAR_3 == 0, "Expected 0, got %d\n", VAR_3);

    VAR_3 = FUNC_7(((void*)0), ((void*)0), VAR_6, 0);
    FUNC_6(VAR_3 == 0, "Expected 0, got %d\n", VAR_3);

    FUNC_1("test.inf");
}
