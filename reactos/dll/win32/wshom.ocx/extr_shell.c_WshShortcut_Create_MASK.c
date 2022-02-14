
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IWshShortcut_iface; int classinfo; int link; int path_link; } ;
typedef TYPE_2__ WshShortcut ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int const*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7(const WCHAR *VAR_7, IDispatch **VAR_8)
{
    WshShortcut *VAR_9;
    HRESULT VAR_10;

    *VAR_8 = ((void*)0);

    VAR_9 = FUNC_4(sizeof(*VAR_9));
    if (!VAR_9) return VAR_2;

    VAR_9->IWshShortcut_iface.lpVtbl = &VAR_6;
    VAR_9->ref = 1;

    VAR_10 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_3, (void**)&VAR_9->link);
    if (FUNC_1(VAR_10))
    {
        FUNC_5(VAR_9);
        return VAR_10;
    }

    VAR_9->path_link = FUNC_3(VAR_7);
    if (!VAR_9->path_link)
    {
        FUNC_2(VAR_9->link);
        FUNC_5(VAR_9);
        return VAR_2;
    }

    FUNC_6(&VAR_4, (IUnknown *)&VAR_9->IWshShortcut_iface, &VAR_9->classinfo);
    *VAR_8 = (IDispatch*)&VAR_9->IWshShortcut_iface;

    return VAR_5;
}
