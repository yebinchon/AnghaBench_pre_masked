
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int IUnknown ;
typedef int IAudioData ;
typedef int * HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int*,int **,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int,int *,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;
 int * FUNC_6 () ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IUnknown *VAR_3 = FUNC_6();
    IAudioData *VAR_4 = ((void*)0);
    BYTE VAR_5[100] = {0};
    DWORD VAR_6 = 0;
    BYTE *VAR_7 = ((void*)0);

    HRESULT VAR_8;

    VAR_8 = FUNC_4(VAR_3, &VAR_1, (void **)&VAR_4);
    if (FUNC_0(VAR_8))
    {

        FUNC_8("No IAudioData\n");
        goto out_unknown;
    }

    VAR_8 = FUNC_3(VAR_4, 100, ((void*)0), 0);
    FUNC_7(VAR_2 == VAR_8, "got 0x%08x\n", *VAR_8);

    VAR_7 = (BYTE *)0xdeadbeef;
    VAR_6 = 0xdeadbeef;
    VAR_8 = FUNC_1(VAR_4, &VAR_6, &VAR_7, ((void*)0));
    FUNC_7(VAR_2 == VAR_8, "got 0x%08x\n", *VAR_8);
    FUNC_7(100 == VAR_6, "got %u\n", VAR_6);
    FUNC_7(((void*)0) != VAR_7, "got %p\n", *VAR_7);

    VAR_8 = FUNC_3(VAR_4, 0, VAR_5, 0);
    FUNC_7(VAR_0 == VAR_8, "got 0x%08x\n", *VAR_8);

    VAR_8 = FUNC_3(VAR_4, sizeof(VAR_5), VAR_5, 0);
    FUNC_7(VAR_2 == VAR_8, "got 0x%08x\n", *VAR_8);

    VAR_7 = (BYTE *)0xdeadbeef;
    VAR_6 = 0xdeadbeef;
    VAR_8 = FUNC_1(VAR_4, &VAR_6, &VAR_7, ((void*)0));
    FUNC_7(VAR_2 == VAR_8, "got 0x%08x\n", *VAR_8);
    FUNC_7(sizeof(VAR_5) == VAR_6, "got %u\n", VAR_6);
    FUNC_7(VAR_5 == VAR_7, "got %p\n", *VAR_7);

    FUNC_2(VAR_4);

out_unknown:
    FUNC_5(VAR_3);
}
