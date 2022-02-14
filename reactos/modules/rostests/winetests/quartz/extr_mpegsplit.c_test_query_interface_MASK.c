
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IAMStreamSelect ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 () ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    IUnknown *VAR_2 = FUNC_3();

    IAMStreamSelect *VAR_3 = ((void*)0);
    HRESULT VAR_4 = FUNC_1(
            VAR_2, &VAR_0, (void **)&VAR_3);
    FUNC_4(VAR_1 == VAR_4, "got 0x%08x\n", VAR_4);
    if (VAR_1 == VAR_4)
    {
        FUNC_0(VAR_3);
    }

    FUNC_2(VAR_2);
}
