
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int IDispatchEx_iface; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ IID ;
typedef TYPE_3__ DispatchEx ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_2__ const VAR_1 ;
 TYPE_2__ const VAR_2 ;
 TYPE_2__ const VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;

BOOL FUNC_3(DispatchEx *VAR_5, REFIID VAR_6, void **VAR_7)
{
    static const IID VAR_8 =
        {0x719c3050,0xf9d3,0x11cf,{0xa4,0x93,0x00,0x40,0x05,0x23,0xa8,0xa0}};
    static const IID VAR_9 =
        {0x719c3050,0xf9d3,0x11cf,{0xa4,0x93,0x00,0x40,0x05,0x23,0xa8,0xa6}};

    if(FUNC_1(&VAR_1, VAR_6)) {
        FUNC_2("(%p)->(IID_IDispatch %p)\n", VAR_5, VAR_7);
        *VAR_7 = &VAR_5->IDispatchEx_iface;
    }else if(FUNC_1(&VAR_2, VAR_6)) {
        FUNC_2("(%p)->(IID_IDispatchEx %p)\n", VAR_5, VAR_7);
        *VAR_7 = &VAR_5->IDispatchEx_iface;
    }else if(FUNC_1(&VAR_9, VAR_6)) {
        FUNC_2("(%p)->(IID_IDispatchJS %p) returning NULL\n", VAR_5, VAR_7);
        *VAR_7 = ((void*)0);
    }else if(FUNC_1(&VAR_8, VAR_6)) {
        FUNC_2("(%p)->(IID_UndocumentedScriptIface %p) returning NULL\n", VAR_5, VAR_7);
        *VAR_7 = ((void*)0);
    }else if (FUNC_1(&VAR_3, VAR_6)) {
        FUNC_2("IID_IObjectIdentity not supported returning NULL\n");
        *VAR_7 = ((void*)0);
    }else {
        return VAR_0;
    }

    if(*VAR_7)
        FUNC_0((IUnknown*)*VAR_7);
    return VAR_4;
}
