
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
typedef TYPE_1__ USER_MARSHAL_CB ;
typedef int ULONG ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef int * HENHMETAFILE ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int **) ;
 unsigned char* FUNC_3 (int *,unsigned char*,int **) ;
 int FUNC_4 (int *,int,int **) ;
 unsigned char* FUNC_5 (int *,unsigned char*,int **) ;
 unsigned char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    USER_MARSHAL_CB VAR_3;
    MIDL_STUB_MESSAGE VAR_4;
    RPC_MESSAGE VAR_5;
    unsigned char *VAR_6, *VAR_7;
    ULONG VAR_8;
    HENHMETAFILE VAR_9;
    HENHMETAFILE VAR_10 = ((void*)0);
    unsigned char *VAR_11;

    VAR_9 = FUNC_8();

    FUNC_9(&VAR_3, &VAR_4, &VAR_5, ((void*)0), 0, VAR_1);
    VAR_8 = FUNC_4(&VAR_3.Flags, 1, &VAR_9);
    FUNC_10(VAR_8 > 24, "size should be at least 24 bytes, not %d\n", VAR_8);
    VAR_6 = FUNC_6(FUNC_1(), 0, VAR_8);
    FUNC_9(&VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8, VAR_1);
    VAR_7 = FUNC_3(&VAR_3.Flags, VAR_6 + 1, &VAR_9);
    FUNC_10(VAR_7 == VAR_6 + VAR_8, "got %p buffer %p\n", VAR_7, VAR_6);
    VAR_11 = VAR_6 + 4;
    FUNC_10(*(DWORD *)VAR_11 == VAR_2, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_11);
    VAR_11 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_11 == (DWORD)(DWORD_PTR)VAR_9, "wirestgm + 0x4 should be hemf instead of 0x%08x\n", *(DWORD *)VAR_11);
    VAR_11 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_11 == (VAR_8 - 0x14), "wirestgm + 0x8 should be size - 0x14 instead of 0x%08x\n", *(DWORD *)VAR_11);
    VAR_11 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_11 == (VAR_8 - 0x14), "wirestgm + 0xc should be size - 0x14 instead of 0x%08x\n", *(DWORD *)VAR_11);
    VAR_11 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_11 == VAR_0, "wirestgm + 0x10 should be EMR_HEADER instead of %d\n", *(DWORD *)VAR_11);



    FUNC_9(&VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8, VAR_1);
    VAR_7 = FUNC_5(&VAR_3.Flags, VAR_6 + 1, &VAR_10);
    FUNC_10(VAR_7 == VAR_6 + VAR_8, "got %p buffer %p\n", VAR_7, VAR_6);
    FUNC_10(VAR_10 != ((void*)0), "HENHMETAFILE didn't unmarshal\n");
    FUNC_7(FUNC_1(), 0, VAR_6);
    FUNC_9(&VAR_3, &VAR_4, &VAR_5, ((void*)0), 0, VAR_1);
    FUNC_2(&VAR_3.Flags, &VAR_10);
    FUNC_0(VAR_9);


    VAR_9 = ((void*)0);

    FUNC_9(&VAR_3, &VAR_4, &VAR_5, ((void*)0), 0, VAR_1);
    VAR_8 = FUNC_4(&VAR_3.Flags, 1, &VAR_9);
    FUNC_10(VAR_8 == 12, "size should be 12 bytes, not %d\n", VAR_8);
    VAR_6 = FUNC_6(FUNC_1(), 0, VAR_8);
    FUNC_9(&VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8, VAR_1);
    VAR_7 = FUNC_3(&VAR_3.Flags, VAR_6 + 1, &VAR_9);
    FUNC_10(VAR_7 == VAR_6 + VAR_8, "got %p buffer %p\n", VAR_7, VAR_6);
    VAR_11 = VAR_6 + 4;
    FUNC_10(*(DWORD *)VAR_11 == VAR_2, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_11);
    VAR_11 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_11 == (DWORD)(DWORD_PTR)VAR_9, "wirestgm + 0x4 should be hemf instead of 0x%08x\n", *(DWORD *)VAR_11);

    FUNC_9(&VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8, VAR_1);
    VAR_7 = FUNC_5(&VAR_3.Flags, VAR_6 + 1, &VAR_10);
    FUNC_10(VAR_7 == VAR_6 + VAR_8, "got %p buffer %p\n", VAR_7, VAR_6);
    FUNC_10(VAR_10 == ((void*)0), "NULL HENHMETAFILE didn't unmarshal\n");
    FUNC_7(FUNC_1(), 0, VAR_6);
    FUNC_9(&VAR_3, &VAR_4, &VAR_5, ((void*)0), 0, VAR_1);
    FUNC_2(&VAR_3.Flags, &VAR_10);
}
