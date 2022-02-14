
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IBindStatusCallback_iface; } ;
typedef int IBindStatusCallback ;
typedef int HRESULT ;
typedef TYPE_1__ DownloadBSC ;


 int FUNC_0 (int *,int *,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;

HRESULT FUNC_4(IBindStatusCallback **VAR_0)
{
    DownloadBSC *VAR_1;
    HRESULT VAR_2;

    VAR_2 = FUNC_0(((void*)0), ((void*)0), &VAR_1);
    if(FUNC_1(VAR_2))
        return VAR_2;

    VAR_2 = FUNC_3(&VAR_1->IBindStatusCallback_iface, VAR_0);
    FUNC_2(&VAR_1->IBindStatusCallback_iface);
    return VAR_2;
}
