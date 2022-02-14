
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IMemoryData ;
typedef int IAudioData ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_4 () ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    IUnknown *VAR_4 = FUNC_4();
    IMemoryData *VAR_5 = ((void*)0);
    IAudioData *VAR_6 = ((void*)0);

    HRESULT VAR_7;

    VAR_7 = FUNC_2(VAR_4, &VAR_2, (void **)&VAR_5);
    FUNC_5(VAR_0 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_4, &VAR_1, (void **)&VAR_6);
    FUNC_5(VAR_3 == VAR_7, "got 0x%08x\n", VAR_7);
    if (VAR_3 == VAR_7)
    {
        VAR_7 = FUNC_0(VAR_6, &VAR_2, (void **)&VAR_5);
        FUNC_5(VAR_0 == VAR_7, "got 0x%08x\n", VAR_7);

        FUNC_1(VAR_6);
    }

    FUNC_3(VAR_4);
}
