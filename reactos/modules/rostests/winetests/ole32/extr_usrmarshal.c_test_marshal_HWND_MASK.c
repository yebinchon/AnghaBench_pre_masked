
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* wireHWND ;
struct TYPE_7__ {int Flags; } ;
typedef TYPE_3__ USER_MARSHAL_CB ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ hInproc; int hRemote; } ;
struct TYPE_6__ {TYPE_1__ u; int fContext; } ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__*) ;
 unsigned char* FUNC_3 (int *,unsigned char*,scalar_t__*) ;
 int FUNC_4 (int *,int,scalar_t__*) ;
 unsigned char* FUNC_5 (int *,unsigned char*,scalar_t__*) ;
 unsigned char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (TYPE_3__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    USER_MARSHAL_CB VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    RPC_MESSAGE VAR_4;
    unsigned char *VAR_5, *VAR_6;
    ULONG VAR_7;
    HWND VAR_8 = FUNC_0();
    HWND VAR_9;
    wireHWND VAR_10;

    FUNC_8(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
    VAR_7 = FUNC_4(&VAR_2.Flags, 1, &VAR_8);
    FUNC_9(VAR_7 == 4 + sizeof(*VAR_10), "Wrong size %d\n", VAR_7);

    VAR_5 = FUNC_6(FUNC_1(), 0, VAR_7);
    FUNC_8(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_7, VAR_0);
    VAR_6 = FUNC_3(&VAR_2.Flags, VAR_5 + 1, &VAR_8);
    FUNC_9(VAR_6 == VAR_5 + VAR_7, "got %p buffer %p\n", VAR_6, VAR_5);
    VAR_10 = (wireHWND)(VAR_5 + 4);
    FUNC_9(VAR_10->fContext == VAR_1, "Context should be WDT_INPROC_CALL instead of 0x%08x\n", VAR_10->fContext);
    FUNC_9(VAR_10->u.hInproc == (LONG_PTR)VAR_8, "Marshaled value should be %p instead of %x\n", VAR_8, VAR_10->u.hRemote);

    FUNC_8(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_7, VAR_0);
    VAR_6 = FUNC_5(&VAR_2.Flags, VAR_5 + 1, &VAR_9);
    FUNC_9(VAR_6 == VAR_5 + VAR_7, "got %p buffer %p\n", VAR_6, VAR_5);
    FUNC_9(VAR_8 == VAR_9, "Didn't unmarshal properly\n");
    FUNC_7(FUNC_1(), 0, VAR_5);

    FUNC_8(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
    FUNC_2(&VAR_2.Flags, &VAR_9);
}
