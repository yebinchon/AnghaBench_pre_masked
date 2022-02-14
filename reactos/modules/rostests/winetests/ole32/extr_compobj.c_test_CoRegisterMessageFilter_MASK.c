
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMessageFilter ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    HRESULT VAR_4;
    IMessageFilter *VAR_5;

    VAR_4 = FUNC_0(&VAR_3, &VAR_5);
    FUNC_2(VAR_4 == VAR_2,
        "CoRegisterMessageFilter should have failed with CO_E_NOT_SUPPORTED instead of 0x%08x\n",
        VAR_4);

    FUNC_4(((void*)0), VAR_1);
    VAR_5 = (IMessageFilter *)0xdeadbeef;
    VAR_4 = FUNC_0(&VAR_3, &VAR_5);
    FUNC_2(VAR_4 == VAR_2,
        "CoRegisterMessageFilter should have failed with CO_E_NOT_SUPPORTED instead of 0x%08x\n",
        VAR_4);
    FUNC_2(VAR_5 == (IMessageFilter *)0xdeadbeef,
        "prev_filter should have been set to %p\n", VAR_5);
    FUNC_1();

    FUNC_4(((void*)0), VAR_0);

    VAR_4 = FUNC_0(((void*)0), ((void*)0));
    FUNC_3(VAR_4, "CoRegisterMessageFilter");

    VAR_5 = (IMessageFilter *)0xdeadbeef;
    VAR_4 = FUNC_0(((void*)0), &VAR_5);
    FUNC_3(VAR_4, "CoRegisterMessageFilter");
    FUNC_2(VAR_5 == ((void*)0), "prev_filter should have been set to NULL instead of %p\n", VAR_5);

    VAR_4 = FUNC_0(&VAR_3, &VAR_5);
    FUNC_3(VAR_4, "CoRegisterMessageFilter");
    FUNC_2(VAR_5 == ((void*)0), "prev_filter should have been set to NULL instead of %p\n", VAR_5);

    VAR_4 = FUNC_0(((void*)0), ((void*)0));
    FUNC_3(VAR_4, "CoRegisterMessageFilter");

    FUNC_1();
}
