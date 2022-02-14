
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int * uri; int * URLName; TYPE_1__ IUriContainer_iface; TYPE_2__ IMoniker_iface; } ;
typedef TYPE_3__ URLMoniker ;
typedef int IUri ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_6(IUri *VAR_4, URLMoniker **VAR_5)
{
    URLMoniker *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_4(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IMoniker_iface.lpVtbl = &VAR_2;
    VAR_6->IUriContainer_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;

    if(VAR_4) {

        VAR_7 = FUNC_2(VAR_4, &VAR_6->URLName);
        if(FUNC_0(VAR_7)) {
            FUNC_5(VAR_6);
            return VAR_7;
        }

        FUNC_1(VAR_4);
        VAR_6->uri = VAR_4;
    }else {
        VAR_6->URLName = ((void*)0);
        VAR_6->uri = ((void*)0);
    }

    FUNC_3();
    *VAR_5 = VAR_6;
    return VAR_1;
}
