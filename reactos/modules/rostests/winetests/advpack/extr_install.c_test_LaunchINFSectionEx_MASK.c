
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,char*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_4;
    char VAR_5[VAR_2];

    FUNC_1("test.inf");


    FUNC_3(VAR_5, VAR_0);
    FUNC_2(VAR_5, "\\");
    FUNC_2(VAR_5, "test.inf,DefaultInstall,c:imacab.cab,4");
    VAR_4 = FUNC_5(((void*)0), ((void*)0), VAR_5, 0);
    FUNC_4(VAR_4 == 0, "Expected 0, got %d\n", VAR_4);


    FUNC_3(VAR_5, "\"");
    FUNC_2(VAR_5, VAR_0);
    FUNC_2(VAR_5, "\\test.inf\",\"DefaultInstall\",\"c:,imacab.cab\",\"4\"");
    VAR_4 = FUNC_5(((void*)0), ((void*)0), VAR_5, 0);
    FUNC_4(VAR_4 == 0, "Expected 0, got %d\n", VAR_4);




    if (VAR_3)
    {

        FUNC_3(VAR_5, "test.inf,DefaultInstall,c:imacab.cab,4");
        VAR_4 = FUNC_5(((void*)0), ((void*)0), VAR_5, 0);
        FUNC_4(VAR_4 == VAR_1, "Expected E_INVALIDARG, got %d\n", VAR_4);
    }

    FUNC_0("test.inf");
}
