
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* plugin_host; } ;
struct TYPE_5__ {int * disp; } ;
typedef TYPE_1__ PluginHost ;
typedef int IDispatch ;
typedef TYPE_2__ HTMLPluginContainer ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

HRESULT FUNC_4(HTMLPluginContainer *VAR_3, IDispatch **VAR_4)
{
    PluginHost *VAR_5;

    VAR_5 = VAR_3->plugin_host;
    if(!VAR_5) {
        FUNC_0("No plugin host\n");
        return VAR_1;
    }

    if(!VAR_5->disp) {
        *VAR_4 = ((void*)0);
        return VAR_2;
    }

    if(!FUNC_3(VAR_5)) {
        FUNC_1("Insecure object\n");
        return VAR_0;
    }

    FUNC_2(VAR_5->disp);
    *VAR_4 = VAR_5->disp;
    return VAR_2;
}
