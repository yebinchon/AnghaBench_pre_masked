
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_1;

    FUNC_1(1000);
    VAR_1 = FUNC_0(VAR_0);




    FUNC_2(VAR_1 == 0, "IUnknown_Release failed with %d\n", (INT)VAR_1);

    while (VAR_1 > 0)
        VAR_1 = FUNC_0(VAR_0);
    VAR_0 = ((void*)0);
}
