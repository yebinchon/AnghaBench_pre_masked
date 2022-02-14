
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
typedef int ULONG ;
struct TYPE_6__ {int member_3; int member_2; int * member_1; int * member_0; } ;
struct TYPE_5__ {int plugin_unk; } ;
typedef TYPE_1__ PluginHost ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_2__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int ,TYPE_2__*,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,void**) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(PluginHost *VAR_5)
{
    DISPPARAMS VAR_6 = {((void*)0),((void*)0),0,0};
    IDispatchEx *VAR_7;
    IDispatch *VAR_8;
    ULONG VAR_9 = 0;
    VARIANT VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_5(VAR_5->plugin_unk, &VAR_3, (void**)&VAR_7);
    if(FUNC_6(VAR_11)) {
        FUNC_1("Use IDispatchEx\n");
        FUNC_2(VAR_7);
    }

    VAR_11 = FUNC_5(VAR_5->plugin_unk, &VAR_2, (void**)&VAR_8);
    if(FUNC_0(VAR_11))
        return;

    VAR_11 = FUNC_3(VAR_8, VAR_1, &VAR_4, 0, VAR_0, &VAR_6, &VAR_10, ((void*)0), &VAR_9);
    FUNC_4(VAR_8);
    if(FUNC_6(VAR_11)) {

        FUNC_7("readystate = %s\n", FUNC_9(&VAR_10));
        FUNC_8(&VAR_10);
    }
}
