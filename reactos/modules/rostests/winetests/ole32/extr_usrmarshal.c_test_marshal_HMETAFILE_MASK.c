
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int Flags; } ;
typedef TYPE_1__ USER_MARSHAL_CB ;
typedef int ULONG ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef int * HMETAFILE ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,unsigned char*,int **) ;
 int FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (int *,unsigned char*,int **) ;
 unsigned char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    USER_MARSHAL_CB VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    RPC_MESSAGE VAR_4;
    unsigned char *VAR_5;
    ULONG VAR_6;
    HMETAFILE VAR_7;
    HMETAFILE VAR_8 = ((void*)0);
    unsigned char *VAR_9;

    VAR_7 = FUNC_8();

    FUNC_9(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
    VAR_6 = FUNC_4(&VAR_2.Flags, 0, &VAR_7);
    FUNC_10(VAR_6 > 20, "size should be at least 20 bytes, not %d\n", VAR_6);
    VAR_5 = FUNC_6(FUNC_1(), 0, VAR_6);
    FUNC_9(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    FUNC_3(&VAR_2.Flags, VAR_5, &VAR_7);
    VAR_9 = VAR_5;
    FUNC_10(*(DWORD *)VAR_9 == VAR_1, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_9 == (DWORD)(DWORD_PTR)VAR_7, "wirestgm + 0x4 should be hmf instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_9 == (VAR_6 - 0x10), "wirestgm + 0x8 should be size - 0x10 instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_9 == (VAR_6 - 0x10), "wirestgm + 0xc should be size - 0x10 instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);
    FUNC_10(*(WORD *)VAR_9 == 1, "wirestgm + 0x10 should be 1 instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);



    FUNC_9(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    FUNC_5(&VAR_2.Flags, VAR_5, &VAR_8);
    FUNC_10(VAR_8 != ((void*)0), "HMETAFILE didn't unmarshal\n");
    FUNC_7(FUNC_1(), 0, VAR_5);
    FUNC_2(&VAR_2.Flags, &VAR_8);
    FUNC_0(VAR_7);


    VAR_7 = ((void*)0);

    VAR_6 = FUNC_4(&VAR_2.Flags, 0, &VAR_7);
    FUNC_10(VAR_6 == 8, "size should be 8 bytes, not %d\n", VAR_6);
    VAR_5 = FUNC_6(FUNC_1(), 0, VAR_6);
    FUNC_9(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    FUNC_3(&VAR_2.Flags, VAR_5, &VAR_7);
    VAR_9 = VAR_5;
    FUNC_10(*(DWORD *)VAR_9 == VAR_1, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);
    FUNC_10(*(DWORD *)VAR_9 == (DWORD)(DWORD_PTR)VAR_7, "wirestgm + 0x4 should be hmf instead of 0x%08x\n", *(DWORD *)VAR_9);
    VAR_9 += sizeof(DWORD);

    FUNC_9(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    FUNC_5(&VAR_2.Flags, VAR_5, &VAR_8);
    FUNC_10(VAR_8 == ((void*)0), "NULL HMETAFILE didn't unmarshal\n");
    FUNC_7(FUNC_1(), 0, VAR_5);
    FUNC_2(&VAR_2.Flags, &VAR_8);
}
