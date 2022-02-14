
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int IUnknown ;
typedef int IAudioData ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int * FUNC_7 () ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    IUnknown *VAR_3 = FUNC_7();
    IAudioData *VAR_4 = ((void*)0);
    BYTE VAR_5[100] = {0};
    DWORD VAR_6 = 0;

    HRESULT VAR_7;

    VAR_7 = FUNC_5(VAR_3, &VAR_1, (void **)&VAR_4);
    if (FUNC_0(VAR_7))
    {

        FUNC_9("No IAudioData\n");
        goto out_unknown;
    }

    VAR_7 = FUNC_3(VAR_4, 0);
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_5), VAR_5, 0);
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3(VAR_4, sizeof(VAR_5) + 1);
    FUNC_8(VAR_0 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3(VAR_4, sizeof(VAR_5));
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_1(VAR_4, ((void*)0), ((void*)0), &VAR_6);
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);
    FUNC_8(sizeof(VAR_5) == VAR_6, "got %u\n", VAR_6);

    VAR_7 = FUNC_3(VAR_4, 0);
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_1(VAR_4, ((void*)0), ((void*)0), &VAR_6);
    FUNC_8(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);
    FUNC_8(0 == VAR_6, "got %u\n", VAR_6);

    FUNC_2(VAR_4);

out_unknown:
    FUNC_6(VAR_3);
}
