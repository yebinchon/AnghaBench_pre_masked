
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {size_t props_len; scalar_t__* props; int props_size; TYPE_1__* plugin_host; } ;
struct TYPE_4__ {int * disp; } ;
typedef int IDispatch ;
typedef TYPE_2__ HTMLPluginContainer ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef scalar_t__ DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int **,int,int ,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__* FUNC_5 (int) ;
 scalar_t__* FUNC_6 (scalar_t__*,int) ;

HRESULT FUNC_7(HTMLPluginContainer *VAR_5, WCHAR *VAR_6, DISPID *VAR_7)
{
    IDispatch *VAR_8;
    DISPID VAR_9;
    DWORD VAR_10;
    HRESULT VAR_11;

    if(!VAR_5->plugin_host) {
        FUNC_3("no plugin host\n");
        return VAR_0;
    }

    VAR_8 = VAR_5->plugin_host->disp;
    if(!VAR_8)
        return VAR_0;

    VAR_11 = FUNC_1(VAR_8, &VAR_2, &VAR_6, 1, 0, &VAR_9);
    if(FUNC_0(VAR_11)) {
        FUNC_2("no prop %s\n", FUNC_4(VAR_6));
        return VAR_0;
    }

    for(VAR_10=0; VAR_10 < VAR_5->props_len; VAR_10++) {
        if(VAR_9 == VAR_5->props[VAR_10]) {
            *VAR_7 = VAR_3+VAR_10;
            return VAR_4;
        }
    }

    if(!VAR_5->props) {
        VAR_5->props = FUNC_5(8*sizeof(DISPID));
        if(!VAR_5->props)
            return VAR_1;
        VAR_5->props_size = 8;
    }else if(VAR_5->props_len == VAR_5->props_size) {
        DISPID *VAR_12;

        VAR_12 = FUNC_6(VAR_5->props, VAR_5->props_size*2*sizeof(DISPID));
        if(!VAR_12)
            return VAR_1;

        VAR_5->props = VAR_12;
        VAR_5->props_size *= 2;
    }

    VAR_5->props[VAR_5->props_len] = VAR_9;
    *VAR_7 = VAR_3+VAR_5->props_len;
    VAR_5->props_len++;
    return VAR_4;
}
