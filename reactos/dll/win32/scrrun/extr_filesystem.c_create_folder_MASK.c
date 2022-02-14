
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct folder {int ref; TYPE_1__ IFolder_iface; int classinfo; int path; } ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef TYPE_1__ IFolder ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*) ;
 int VAR_3 ;
 struct folder* FUNC_3 (int) ;
 int FUNC_4 (struct folder*) ;
 int FUNC_5 (int *,int *,int *) ;

HRESULT FUNC_6(const WCHAR *VAR_4, IFolder **VAR_5)
{
    struct folder *VAR_6;

    *VAR_5 = ((void*)0);

    FUNC_1("%s\n", FUNC_2(VAR_4));

    VAR_6 = FUNC_3(sizeof(struct folder));
    if (!VAR_6) return VAR_1;

    VAR_6->IFolder_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->path = FUNC_0(VAR_4);
    if (!VAR_6->path)
    {
        FUNC_4(VAR_6);
        return VAR_1;
    }

    FUNC_5(&VAR_0, (IUnknown *)&VAR_6->IFolder_iface, &VAR_6->classinfo);
    *VAR_5 = &VAR_6->IFolder_iface;

    return VAR_2;
}
