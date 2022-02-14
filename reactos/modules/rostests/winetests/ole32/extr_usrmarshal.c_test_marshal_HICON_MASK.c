
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* wireHICON ;
struct TYPE_7__ {int Flags; } ;
typedef TYPE_3__ USER_MARSHAL_CB ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ hInproc; int hRemote; } ;
struct TYPE_6__ {TYPE_1__ u; int fContext; } ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ HICON ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int,int,int,int,int const*,int const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__*) ;
 unsigned char* FUNC_4 (int *,unsigned char*,scalar_t__*) ;
 int FUNC_5 (int *,int,scalar_t__*) ;
 unsigned char* FUNC_6 (int *,unsigned char*,scalar_t__*) ;
 unsigned char* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (TYPE_3__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const BYTE VAR_2[1024];
    MIDL_STUB_MESSAGE VAR_3;
    HICON VAR_4, VAR_5;
    USER_MARSHAL_CB VAR_6;
    RPC_MESSAGE VAR_7;
    unsigned char *VAR_8, *VAR_9;
    wireHICON VAR_10;
    ULONG VAR_11;

    VAR_4 = FUNC_0(0, 16, 16, 1, 1, VAR_2, VAR_2);
    FUNC_10(VAR_4 != 0, "CreateIcon failed\n");

    FUNC_9(&VAR_6, &VAR_3, &VAR_7, ((void*)0), 0, VAR_0);
    VAR_11 = FUNC_5(&VAR_6.Flags, 1, &VAR_4);
    FUNC_10(VAR_11 == 4 + sizeof(*VAR_10), "Wrong size %d\n", VAR_11);

    VAR_8 = FUNC_7(FUNC_2(), 0, VAR_11);
    FUNC_9(&VAR_6, &VAR_3, &VAR_7, VAR_8, VAR_11, VAR_0);
    VAR_9 = FUNC_4(&VAR_6.Flags, VAR_8 + 1, &VAR_4);
    FUNC_10(VAR_9 == VAR_8 + 4 + sizeof(*VAR_10), "got %p buffer %p\n", VAR_9, VAR_8);
    VAR_10 = (wireHICON)(VAR_8 + 4);
    FUNC_10(VAR_10->fContext == VAR_1, "Context should be WDT_INPROC_CALL instead of 0x%08x\n", VAR_10->fContext);
    FUNC_10(VAR_10->u.hInproc == (LONG_PTR)VAR_4, "Marshaled value should be %p instead of %x\n", VAR_4, VAR_10->u.hRemote);

    FUNC_9(&VAR_6, &VAR_3, &VAR_7, VAR_8, VAR_11, VAR_0);
    VAR_9 = FUNC_6(&VAR_6.Flags, VAR_8 + 1, &VAR_5);
    FUNC_10(VAR_9 == VAR_8 + 4 + sizeof(*VAR_10), "got %p buffer %p\n", VAR_9, VAR_8);
    FUNC_10(VAR_4 == VAR_5, "Didn't unmarshal properly\n");
    FUNC_8(FUNC_2(), 0, VAR_8);

    FUNC_9(&VAR_6, &VAR_3, &VAR_7, ((void*)0), 0, VAR_0);
    FUNC_3(&VAR_6.Flags, &VAR_5);
    FUNC_1(VAR_4);
}
