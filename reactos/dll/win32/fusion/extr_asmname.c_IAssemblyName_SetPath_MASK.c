
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int IAssemblyName ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;

HRESULT FUNC_2(IAssemblyName *VAR_2, LPCWSTR VAR_3)
{
    IAssemblyNameImpl *VAR_4 = FUNC_1(VAR_2);

    VAR_4->path = FUNC_0(VAR_3);
    if (!VAR_4->path)
        return VAR_0;

    return VAR_1;
}
