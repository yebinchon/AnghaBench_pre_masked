
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    UINT VAR_0 = FUNC_3("DataObject");
    UINT VAR_1 = FUNC_3("Ole Private Data");
    HANDLE VAR_2;
    FUNC_2(((void*)0));

    VAR_2 = FUNC_1(VAR_0);
    FUNC_4(!VAR_2, "got %p\n", VAR_2);
    VAR_2 = FUNC_1(VAR_1);
    FUNC_4(!VAR_2, "got %p\n", VAR_2);

    FUNC_0();
}
