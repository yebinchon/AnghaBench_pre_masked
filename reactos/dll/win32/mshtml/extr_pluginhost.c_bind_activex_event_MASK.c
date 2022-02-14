
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_17__ {int * typeinfo; } ;
struct TYPE_16__ {TYPE_1__* plugin_host; } ;
struct TYPE_15__ {TYPE_5__* sink; int plugin_unk; } ;
typedef TYPE_1__ PluginHost ;
typedef int ITypeInfo ;
typedef int IProvideClassInfo ;
typedef int IDispatch ;
typedef TYPE_2__ HTMLPluginContainer ;
typedef int HTMLDocumentNode ;
typedef TYPE_1__* HRESULT ;
typedef int DISPID ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int **,int,int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int ,int *,void**) ;
 int FUNC_8 (char*,int *,TYPE_1__*,int ,int *) ;
 int FUNC_9 (char*,TYPE_1__*) ;
 int FUNC_10 (TYPE_5__*,int ,int *) ;
 TYPE_5__* FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_2__*,int *) ;

void FUNC_14(HTMLDocumentNode *VAR_1, HTMLPluginContainer *VAR_2, WCHAR *VAR_3, IDispatch *VAR_4)
{
    PluginHost *VAR_5 = VAR_2->plugin_host;
    ITypeInfo *VAR_6, *VAR_7;
    DISPID VAR_8;
    HRESULT VAR_9;

    FUNC_8("(%p %p %s %p)\n", VAR_1, VAR_5, FUNC_12(VAR_3), VAR_4);

    if(!VAR_5 || !VAR_5->plugin_unk) {
        FUNC_9("detached element %p\n", VAR_5);
        return;
    }

    if(VAR_5->sink) {
        VAR_7 = VAR_5->sink->typeinfo;
        FUNC_4(VAR_7);
    }else {
        IProvideClassInfo *VAR_10;

        VAR_9 = FUNC_7(VAR_5->plugin_unk, &VAR_0, (void**)&VAR_10);
        if(FUNC_0(VAR_9)) {
            FUNC_1("No IProvideClassInfo, try GetTypeInfo?\n");
            return;
        }

        VAR_9 = FUNC_2(VAR_10, &VAR_6);
        FUNC_3(VAR_10);
        if(FUNC_0(VAR_9) || !VAR_6) {
            FUNC_9("GetClassInfo failed: %08x\n", VAR_9);
            return;
        }

        VAR_7 = FUNC_13(VAR_2, VAR_6);
        FUNC_6(VAR_6);
        if(!VAR_7)
            return;
    }

    VAR_9 = FUNC_5(VAR_7, &VAR_3, 1, &VAR_8);
    if(FUNC_0(VAR_9))
        FUNC_9("Could not get disp id: %08x\n", VAR_9);
    else if(!VAR_5->sink)
        VAR_5->sink = FUNC_11(VAR_5, VAR_7);

    FUNC_6(VAR_7);
    if(FUNC_0(VAR_9) || !VAR_5->sink)
        return;

    FUNC_10(VAR_5->sink, VAR_8, VAR_4);
}
