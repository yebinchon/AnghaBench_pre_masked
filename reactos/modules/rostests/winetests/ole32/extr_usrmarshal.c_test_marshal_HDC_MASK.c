
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* wireHDC ;
struct TYPE_7__ {int Flags; } ;
typedef TYPE_3__ USER_MARSHAL_CB ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ hInproc; int hRemote; } ;
struct TYPE_6__ {TYPE_1__ u; int fContext; } ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__*) ;
 unsigned char* FUNC_3 (int *,unsigned char*,scalar_t__*) ;
 int FUNC_4 (int *,int,scalar_t__*) ;
 unsigned char* FUNC_5 (int *,unsigned char*,scalar_t__*) ;
 unsigned char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_3__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    MIDL_STUB_MESSAGE VAR_2;
    HDC VAR_3 = FUNC_0(0), VAR_4;
    USER_MARSHAL_CB VAR_5;
    RPC_MESSAGE VAR_6;
    unsigned char *VAR_7, *VAR_8;
    wireHDC VAR_9;
    ULONG VAR_10;

    FUNC_9(&VAR_5, &VAR_2, &VAR_6, ((void*)0), 0, VAR_0);
    VAR_10 = FUNC_4(&VAR_5.Flags, 1, &VAR_3);
    FUNC_10(VAR_10 == 4 + sizeof(*VAR_9), "Wrong size %d\n", VAR_10);

    VAR_7 = FUNC_6(FUNC_1(), 0, VAR_10);
    FUNC_9(&VAR_5, &VAR_2, &VAR_6, VAR_7, VAR_10, VAR_0);
    VAR_8 = FUNC_3(&VAR_5.Flags, VAR_7 + 1, &VAR_3);
    FUNC_10(VAR_8 == VAR_7 + 4 + sizeof(*VAR_9), "got %p buffer %p\n", VAR_8, VAR_7);
    VAR_9 = (wireHDC)(VAR_7 + 4);
    FUNC_10(VAR_9->fContext == VAR_1, "Context should be WDT_INPROC_CALL instead of 0x%08x\n", VAR_9->fContext);
    FUNC_10(VAR_9->u.hInproc == (LONG_PTR)VAR_3, "Marshaled value should be %p instead of %x\n", VAR_3, VAR_9->u.hRemote);

    FUNC_9(&VAR_5, &VAR_2, &VAR_6, VAR_7, VAR_10, VAR_0);
    VAR_8 = FUNC_5(&VAR_5.Flags, VAR_7 + 1, &VAR_4);
    FUNC_10(VAR_8 == VAR_7 + 4 + sizeof(*VAR_9), "got %p buffer %p\n", VAR_8, VAR_7);
    FUNC_10(VAR_3 == VAR_4, "Didn't unmarshal properly\n");
    FUNC_7(FUNC_1(), 0, VAR_7);

    FUNC_9(&VAR_5, &VAR_2, &VAR_6, ((void*)0), 0, VAR_0);
    FUNC_2(&VAR_5.Flags, &VAR_4);
    FUNC_8(0, VAR_3);
}
