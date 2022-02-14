
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct foldercollection {int ref; TYPE_1__ IFolderCollection_iface; int classinfo; int path; } ;
typedef int IUnknown ;
typedef TYPE_1__ IFolderCollection ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct foldercollection* FUNC_1 (int) ;
 int FUNC_2 (struct foldercollection*) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(BSTR VAR_4, IFolderCollection **VAR_5)
{
    struct foldercollection *VAR_6;

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_1(sizeof(struct foldercollection));
    if (!VAR_6) return VAR_1;

    VAR_6->IFolderCollection_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->path = FUNC_0(VAR_4);
    if (!VAR_6->path)
    {
        FUNC_2(VAR_6);
        return VAR_1;
    }

    FUNC_3(&VAR_0, (IUnknown *)&VAR_6->IFolderCollection_iface, &VAR_6->classinfo);
    *VAR_5 = &VAR_6->IFolderCollection_iface;

    return VAR_2;
}
