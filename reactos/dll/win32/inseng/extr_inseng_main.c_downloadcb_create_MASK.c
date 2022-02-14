
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct downloadcb {int ref; char* id; char* display; int file_name; int event_done; int dl_previous_kb; int dl_size; TYPE_3__* engine; int hr; TYPE_1__ IBindStatusCallback_iface; } ;
struct TYPE_6__ {int downloaded_kb; } ;
struct TYPE_7__ {int IInstallEngine2_iface; TYPE_2__ thread; } ;
typedef TYPE_3__ InstallEngine ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct downloadcb* FUNC_1 (int) ;
 int FUNC_2 (struct downloadcb*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HRESULT FUNC_4(InstallEngine *VAR_4, HANDLE VAR_5, char *VAR_6, char *VAR_7,
                                 char *VAR_8, DWORD VAR_9, struct downloadcb **VAR_10)
{
    struct downloadcb *VAR_11;

    VAR_11 = FUNC_1(sizeof(*VAR_11));
    if (!VAR_11) return VAR_2;

    VAR_11->IBindStatusCallback_iface.lpVtbl = &VAR_0;
    VAR_11->ref = 1;
    VAR_11->hr = VAR_1;
    VAR_11->id = VAR_7;
    VAR_11->display = VAR_8;
    VAR_11->engine = VAR_4;
    VAR_11->dl_size = VAR_9;
    VAR_11->dl_previous_kb = VAR_4->thread.downloaded_kb;
    VAR_11->event_done = VAR_5;
    VAR_11->file_name = FUNC_3(VAR_6);
    if (!VAR_11->file_name)
    {
        FUNC_2(VAR_11);
        return VAR_2;
    }

    FUNC_0(&VAR_4->IInstallEngine2_iface);

    *VAR_10 = VAR_11;
    return VAR_3;
}
