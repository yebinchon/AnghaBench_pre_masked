
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IAudioData ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_5 () ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IUnknown *VAR_2 = FUNC_5();
    IAudioData *VAR_3 = ((void*)0);

    HRESULT VAR_4;

    VAR_4 = FUNC_3(VAR_2, &VAR_0, (void **)&VAR_3);
    if (FUNC_0(VAR_4))
    {

        FUNC_7("No IAudioData\n");
        goto out_unknown;
    }

    VAR_4 = FUNC_1(VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(VAR_1 == VAR_4, "got 0x%08x\n", VAR_4);

    FUNC_2(VAR_3);

out_unknown:
    FUNC_4(VAR_2);
}
