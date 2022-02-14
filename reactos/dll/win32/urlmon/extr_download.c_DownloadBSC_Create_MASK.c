
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int * callback; int file_name; TYPE_2__ IServiceProvider_iface; TYPE_1__ IBindStatusCallback_iface; } ;
typedef scalar_t__ LPCWSTR ;
typedef int IBindStatusCallback ;
typedef int HRESULT ;
typedef TYPE_3__ DownloadBSC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_4(IBindStatusCallback *VAR_4, LPCWSTR VAR_5, DownloadBSC **VAR_6)
{
    DownloadBSC *VAR_7;

    VAR_7 = FUNC_1(sizeof(*VAR_7));
    if(!VAR_7)
        return VAR_1;

    VAR_7->IBindStatusCallback_iface.lpVtbl = &VAR_0;
    VAR_7->IServiceProvider_iface.lpVtbl = &VAR_3;
    VAR_7->ref = 1;

    if(VAR_5) {
        VAR_7->file_name = FUNC_3(VAR_5);
        if(!VAR_7->file_name) {
            FUNC_2(VAR_7);
            return VAR_1;
        }
    }

    if(VAR_4)
        FUNC_0(VAR_4);
    VAR_7->callback = VAR_4;

    *VAR_6 = VAR_7;
    return VAR_2;
}
