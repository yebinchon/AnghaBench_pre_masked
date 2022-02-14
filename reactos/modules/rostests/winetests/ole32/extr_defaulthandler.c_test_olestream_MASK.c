
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int version; int flags; int link_update_opt; int res; int moniker_size; } ;
typedef TYPE_2__ ole_stream_header_t ;
typedef int header ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int IStream ;
typedef int IStorage ;
typedef int IPersistStorage ;
typedef int IOleObject ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int const*,int *,int,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,int,int*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_3__ const*,int ,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int **) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_6;
    const CLSID VAR_7 = {0xa5f1772f, 0x3772, 0x490f, {0x9e, 0xc6, 0x77, 0x13, 0xe8, 0xb3, 0x4b, 0x5d}};
    IOleObject *VAR_8;
    IPersistStorage *VAR_9;
    IStorage *VAR_10;
    IStream *VAR_11;
    static const WCHAR VAR_12[] = {1,'O','l','e',0};
    ULONG VAR_13;
    ole_stream_header_t VAR_14;

    VAR_6 = FUNC_9(&VAR_10);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);

    VAR_6 = FUNC_4(VAR_10, VAR_12, ((void*)0), VAR_3 | VAR_2, 0, &VAR_11);
    FUNC_10(VAR_6 == VAR_4, "got %08x\n", VAR_6);

    VAR_6 = FUNC_8(&VAR_7, 0, &VAR_0, (void**)&VAR_8);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);

    VAR_6 = FUNC_0(VAR_8, &VAR_1, (void**)&VAR_9);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_9, VAR_10);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);

    VAR_6 = FUNC_4(VAR_10, VAR_12, ((void*)0), VAR_3 | VAR_2, 0, &VAR_11);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);
    VAR_6 = FUNC_6(VAR_11, &VAR_14, sizeof(VAR_14), &VAR_13);
    FUNC_10(VAR_6 == VAR_5, "got %08x\n", VAR_6);
    FUNC_10(VAR_13 == sizeof(VAR_14), "read %d\n", VAR_13);
    FUNC_10(VAR_14.version == 0x02000001, "got version %08x\n", VAR_14.version);
    FUNC_10(VAR_14.flags == 0x0, "got flags %08x\n", VAR_14.flags);
    FUNC_10(VAR_14.link_update_opt == 0x0, "got link update option %08x\n", VAR_14.link_update_opt);
    FUNC_10(VAR_14.res == 0x0, "got reserved %08x\n", VAR_14.res);
    FUNC_10(VAR_14.moniker_size == 0x0, "got moniker size %08x\n", VAR_14.moniker_size);

    FUNC_7(VAR_11);

    FUNC_3(VAR_9);
    FUNC_1(VAR_8);

    FUNC_5(VAR_10);
}
