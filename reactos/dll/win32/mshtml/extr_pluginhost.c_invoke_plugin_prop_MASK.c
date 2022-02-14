
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int VARIANT ;
struct TYPE_6__ {scalar_t__ props_len; int * props; TYPE_1__* plugin_host; } ;
struct TYPE_5__ {int disp; } ;
typedef TYPE_1__ PluginHost ;
typedef int LCID ;
typedef TYPE_2__ HTMLPluginContainer ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;
typedef scalar_t__ DISPID ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int *,int *,int *,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

HRESULT FUNC_4(HTMLPluginContainer *VAR_4, DISPID VAR_5, LCID VAR_6, WORD VAR_7, DISPPARAMS *VAR_8,
        VARIANT *VAR_9, EXCEPINFO *VAR_10)
{
    PluginHost *VAR_11;

    VAR_11 = VAR_4->plugin_host;
    if(!VAR_11 || !VAR_11->disp) {
        FUNC_1("Called with no disp\n");
        return VAR_1;
    }

    if(!FUNC_3(VAR_11)) {
        FUNC_1("Insecure object\n");
        return VAR_0;
    }

    if(VAR_5 < VAR_3 || VAR_5 > VAR_3 + VAR_4->props_len) {
        FUNC_0("Invalid id\n");
        return VAR_0;
    }

    return FUNC_2(VAR_11->disp, VAR_4->props[VAR_5-VAR_3], &VAR_2,
            VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, ((void*)0));
}
