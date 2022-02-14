
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* wireHBRUSH ;
struct TYPE_9__ {int Flags; } ;
typedef TYPE_3__ USER_MARSHAL_CB ;
typedef int ULONG ;
struct TYPE_10__ {scalar_t__ lbHatch; int lbColor; int lbStyle; } ;
struct TYPE_7__ {scalar_t__ hInproc; int hRemote; } ;
struct TYPE_8__ {TYPE_1__ u; int fContext; } ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef scalar_t__ LONG_PTR ;
typedef TYPE_4__ LOGBRUSH ;
typedef scalar_t__ HBRUSH ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__*) ;
 unsigned char* FUNC_4 (int *,unsigned char*,scalar_t__*) ;
 int FUNC_5 (int *,int,scalar_t__*) ;
 unsigned char* FUNC_6 (int *,unsigned char*,scalar_t__*) ;
 unsigned char* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,unsigned char*) ;
 int VAR_1 ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_3__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    MIDL_STUB_MESSAGE VAR_3;
    HBRUSH VAR_4, VAR_5;
    USER_MARSHAL_CB VAR_6;
    RPC_MESSAGE VAR_7;
    unsigned char *VAR_8, *VAR_9;
    LOGBRUSH VAR_10;
    wireHBRUSH VAR_11;
    ULONG VAR_12;

    VAR_10.lbStyle = VAR_0;
    VAR_10.lbColor = FUNC_9(0, 0, 0);
    VAR_10.lbHatch = 0;

    VAR_4 = FUNC_0(&VAR_10);
    FUNC_11(VAR_4 != 0, "CreateBrushIndirect failed\n");

    FUNC_10(&VAR_6, &VAR_3, &VAR_7, ((void*)0), 0, VAR_1);
    VAR_12 = FUNC_5(&VAR_6.Flags, 1, &VAR_4);
    FUNC_11(VAR_12 == 4 + sizeof(*VAR_11), "Wrong size %d\n", VAR_12);

    VAR_8 = FUNC_7(FUNC_2(), 0, VAR_12);
    FUNC_10(&VAR_6, &VAR_3, &VAR_7, VAR_8, VAR_12, VAR_1);
    VAR_9 = FUNC_4(&VAR_6.Flags, VAR_8 + 1, &VAR_4);
    FUNC_11(VAR_9 == VAR_8 + 4 + sizeof(*VAR_11), "got %p buffer %p\n", VAR_9, VAR_8);
    VAR_11 = (wireHBRUSH)(VAR_8 + 4);
    FUNC_11(VAR_11->fContext == VAR_2, "Context should be WDT_INPROC_CALL instead of 0x%08x\n", VAR_11->fContext);
    FUNC_11(VAR_11->u.hInproc == (LONG_PTR)VAR_4, "Marshaled value should be %p instead of %x\n", VAR_4, VAR_11->u.hRemote);

    FUNC_10(&VAR_6, &VAR_3, &VAR_7, VAR_8, VAR_12, VAR_1);
    VAR_9 = FUNC_6(&VAR_6.Flags, VAR_8 + 1, &VAR_5);
    FUNC_11(VAR_9 == VAR_8 + 4 + sizeof(*VAR_11), "got %p buffer %p\n", VAR_9, VAR_8);
    FUNC_11(VAR_4 == VAR_5, "Didn't unmarshal properly\n");
    FUNC_8(FUNC_2(), 0, VAR_8);

    FUNC_10(&VAR_6, &VAR_3, &VAR_7, ((void*)0), 0, VAR_1);
    FUNC_3(&VAR_6.Flags, &VAR_5);
    FUNC_1(VAR_4);
}
