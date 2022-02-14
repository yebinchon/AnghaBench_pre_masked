
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * member_0; } ;
struct unk_impl {int member_1; int ref; int inner_unk; int IUnknown_iface; int * member_2; TYPE_1__ member_0; } ;
struct TYPE_4__ {int * member_0; } ;
struct ITextHostTestImpl {int member_1; int ITextHost_iface; TYPE_2__ member_0; } ;
typedef int ULONG ;
typedef int ITextServices ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
    struct unk_impl VAR_4 = {VAR_3, 19, ((void*)0)};
    struct ITextHostTestImpl VAR_5 = {VAR_1, 1};
    ITextServices *VAR_6;
    ULONG VAR_7;
    HRESULT VAR_8;


    VAR_8 = FUNC_5(&VAR_4.IUnknown_iface, &VAR_5.ITextHost_iface,
                             &VAR_4.inner_unk);
    FUNC_4(VAR_8 == VAR_0, "CreateTextServices failed: %08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_4.inner_unk, VAR_2, (void**)&VAR_6);
    FUNC_4(VAR_8 == VAR_0, "QueryInterface for IID_ITextServices failed: %08x\n", VAR_8);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_4(VAR_7 == VAR_4.ref, "CreateTextServices just pretends to support COM aggregation\n");
    VAR_7 = FUNC_1(VAR_6);
    FUNC_4(VAR_7 == VAR_4.ref, "CreateTextServices just pretends to support COM aggregation\n");
    VAR_7 = FUNC_1(VAR_6);
    FUNC_4(VAR_7 == 19, "Refcount should be back at 19 but is %u\n", VAR_7);

    FUNC_3(VAR_4.inner_unk);
}
