
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int Flags; } ;
typedef TYPE_1__ USER_MARSHAL_CB ;
typedef int ULONG ;
struct TYPE_6__ {int mm; int xExt; int yExt; scalar_t__ hMF; } ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef TYPE_2__ METAFILEPICT ;
typedef int * HMETAFILEPICT ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 unsigned char* FUNC_7 (int *,unsigned char*,int **) ;
 int FUNC_8 (int *,int,int **) ;
 unsigned char* FUNC_9 (int *,unsigned char*,int **) ;
 unsigned char* FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_14 (int,char*,...) ;

__attribute__((used)) static void FUNC_15(void)
{
    USER_MARSHAL_CB VAR_5;
    MIDL_STUB_MESSAGE VAR_6;
    RPC_MESSAGE VAR_7;
    unsigned char *VAR_8, *VAR_9;
    ULONG VAR_10;
    HMETAFILEPICT VAR_11;
    HMETAFILEPICT VAR_12 = ((void*)0);
    METAFILEPICT *VAR_13;
    unsigned char *VAR_14;

    VAR_11 = FUNC_2(VAR_0, sizeof(*VAR_13));
    VAR_13 = FUNC_4(VAR_11);
    VAR_13->mm = VAR_1;
    VAR_13->xExt = 1;
    VAR_13->yExt = 2;
    VAR_13->hMF = FUNC_12();
    FUNC_5(VAR_11);

    FUNC_13(&VAR_5, &VAR_6, &VAR_7, ((void*)0), 0, VAR_2);
    VAR_10 = FUNC_8(&VAR_5.Flags, 1, &VAR_11);
    FUNC_14(VAR_10 > 24, "size should be at least 24 bytes, not %d\n", VAR_10);
    VAR_8 = FUNC_10(FUNC_1(), 0, VAR_10);
    FUNC_13(&VAR_5, &VAR_6, &VAR_7, VAR_8, VAR_10, VAR_2);
    VAR_9 = FUNC_7(&VAR_5.Flags, VAR_8 + 1, &VAR_11);
    VAR_14 = VAR_8 + 4;
    FUNC_14(*(DWORD *)VAR_14 == VAR_4, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == (DWORD)(DWORD_PTR)VAR_11, "wirestgm + 0x4 should be hmf instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == VAR_1, "wirestgm + 0x8 should be MM_ISOTROPIC instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == 1, "wirestgm + 0xc should be 1 instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == 2, "wirestgm + 0x10 should be 2 instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == VAR_3, "wirestgm + 0x14 should be \"User\" instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == VAR_4, "wirestgm + 0x18 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    VAR_13 = FUNC_4(VAR_11);
    FUNC_14(*(DWORD *)VAR_14 == (DWORD)(DWORD_PTR)VAR_13->hMF, "wirestgm + 0x1c should be pmfp->hMF instead of 0x%08x\n", *(DWORD *)VAR_14);
    FUNC_5(VAR_11);
    VAR_14 += sizeof(DWORD);


    FUNC_14(*(DWORD *)VAR_14 == (VAR_9 - VAR_8 - 0x2c), "wirestgm + 0x20 should be size - 0x34 instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == (VAR_9 - VAR_8 - 0x2c), "wirestgm + 0x24 should be size - 0x34 instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(WORD *)VAR_14 == 1, "wirehmfp + 0x28 should be 1 instead of 0x%08x\n", *(DWORD *)VAR_14);



    FUNC_13(&VAR_5, &VAR_6, &VAR_7, VAR_8, VAR_10, VAR_2);
    FUNC_9(&VAR_5.Flags, VAR_8 + 1, &VAR_12);
    FUNC_14(VAR_12 != ((void*)0), "HMETAFILEPICT didn't unmarshal\n");
    FUNC_11(FUNC_1(), 0, VAR_8);
    FUNC_13(&VAR_5, &VAR_6, &VAR_7, ((void*)0), 0, VAR_2);
    FUNC_6(&VAR_5.Flags, &VAR_12);
    VAR_13 = FUNC_4(VAR_11);
    FUNC_0(VAR_13->hMF);
    FUNC_5(VAR_11);
    FUNC_3(VAR_11);


    VAR_11 = ((void*)0);

    FUNC_13(&VAR_5, &VAR_6, &VAR_7, ((void*)0), 0, VAR_2);
    VAR_10 = FUNC_8(&VAR_5.Flags, 1, &VAR_11);
    FUNC_14(VAR_10 == 12, "size should be 12 bytes, not %d\n", VAR_10);
    VAR_8 = FUNC_10(FUNC_1(), 0, VAR_10);
    FUNC_13(&VAR_5, &VAR_6, &VAR_7, VAR_8, VAR_10, VAR_2);
    VAR_9 = FUNC_7(&VAR_5.Flags, VAR_8 + 1, &VAR_11);
    FUNC_14(VAR_9 == VAR_8 + VAR_10, "got %p buffer %p\n", VAR_9, VAR_8);
    VAR_14 = VAR_8 + 4;
    FUNC_14(*(DWORD *)VAR_14 == VAR_4, "wirestgm + 0x0 should be WDT_REMOTE_CALL instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);
    FUNC_14(*(DWORD *)VAR_14 == (DWORD)(DWORD_PTR)VAR_11, "wirestgm + 0x4 should be hmf instead of 0x%08x\n", *(DWORD *)VAR_14);
    VAR_14 += sizeof(DWORD);

    VAR_12 = ((void*)0);
    FUNC_13(&VAR_5, &VAR_6, &VAR_7, VAR_8, VAR_10, VAR_2);
    VAR_9 = FUNC_9(&VAR_5.Flags, VAR_8 + 1, &VAR_12);
    FUNC_14(VAR_9 == VAR_8 + VAR_10, "got %p buffer %p\n", VAR_9, VAR_8);
    FUNC_14(VAR_12 == ((void*)0), "NULL HMETAFILE didn't unmarshal\n");
    FUNC_11(FUNC_1(), 0, VAR_8);
    FUNC_13(&VAR_5, &VAR_6, &VAR_7, ((void*)0), 0, VAR_2);
    FUNC_6(&VAR_5.Flags, &VAR_12);
}
