
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int msft_header ;
typedef int WCHAR ;
struct TYPE_4__ {int wLibFlags; } ;
typedef TYPE_1__ TLIBATTR ;
typedef int LCID ;
typedef int ITypeLib ;
typedef int ICreateTypeLib2 ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int **) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int ,char*) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int *,TYPE_1__**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_13 (int *,int **) ;
 int VAR_5 ;
 int FUNC_14 (int ,int ,char*,int,int *,int) ;
 int VAR_6 ;
 int FUNC_15 (scalar_t__,int*,int,int*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int,char*,...) ;

__attribute__((used)) static void FUNC_17(LCID VAR_9)
{
    char VAR_10[VAR_5];
    WCHAR VAR_11[VAR_5];
    HRESULT VAR_12;
    ICreateTypeLib2 *VAR_13;
    HANDLE VAR_14;
    DWORD VAR_15[8];
    ITypeLib *VAR_16;
    TLIBATTR *VAR_17;
    DWORD VAR_18;

    FUNC_4( ".", "tlb", 0, VAR_10 );
    FUNC_14(VAR_0, 0, VAR_10, -1, VAR_11, VAR_5);

    VAR_12 = FUNC_2(VAR_7, VAR_11, &VAR_13);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_13, &VAR_2, (void**)&VAR_16);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_10(VAR_16, &VAR_17);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);
    FUNC_16(VAR_17->wLibFlags == 0, "flags 0x%x\n", VAR_17->wLibFlags);
    FUNC_12(VAR_16, VAR_17);

    VAR_12 = FUNC_8(VAR_13, VAR_9);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_9(VAR_13, 3, 4);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_7(VAR_13);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_10(VAR_16, &VAR_17);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);
    FUNC_16(VAR_17->wLibFlags == 0, "flags 0x%x\n", VAR_17->wLibFlags);
    FUNC_12(VAR_16, VAR_17);

    FUNC_11(VAR_16);
    FUNC_6(VAR_13);

    VAR_14 = FUNC_1( VAR_10, VAR_1, 0, ((void*)0), VAR_6, 0, 0 );
    FUNC_16( VAR_14 != VAR_3, "file creation failed\n" );

    FUNC_15( VAR_14, VAR_15, sizeof(VAR_15), &VAR_18, ((void*)0) );
    FUNC_16(VAR_18 == sizeof(VAR_15), "read %d\n", VAR_18);
    FUNC_0( VAR_14 );

    FUNC_16(VAR_15[0] == 0x5446534d, "got %08x\n", VAR_15[0]);
    FUNC_16(VAR_15[1] == 0x00010002, "got %08x\n", VAR_15[1]);
    FUNC_16(VAR_15[2] == 0xffffffff, "got %08x\n", VAR_15[2]);
    FUNC_16(VAR_15[3] == (VAR_9 ? VAR_9 : 0x409), "got %08x (lcid %08x)\n", VAR_15[3], VAR_9);
    FUNC_16(VAR_15[4] == VAR_9, "got %08x (lcid %08x)\n", VAR_15[4], VAR_9);
    FUNC_16(VAR_15[6] == 0x00040003, "got %08x\n", VAR_15[6]);
    FUNC_16(VAR_15[7] == 0, "got %08x\n", VAR_15[7]);


    VAR_12 = FUNC_13(VAR_11, &VAR_16);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);

    VAR_12 = FUNC_10(VAR_16, &VAR_17);
    FUNC_16(VAR_12 == VAR_8, "got %08x\n", VAR_12);
    FUNC_16(VAR_17->wLibFlags == VAR_4, "flags 0x%x\n", VAR_17->wLibFlags);
    FUNC_12(VAR_16, VAR_17);
    FUNC_11(VAR_16);

    FUNC_3(VAR_10);
}
