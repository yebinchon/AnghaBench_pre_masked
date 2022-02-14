
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int path; } ;
typedef int LPWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int IAssemblyName ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;

HRESULT FUNC_3(IAssemblyName *VAR_2, LPWSTR VAR_3, ULONG *VAR_4)
{
    ULONG VAR_5 = *VAR_4;
    IAssemblyNameImpl *VAR_6 = FUNC_2(VAR_2);

    if (!VAR_6->path)
        return VAR_1;

    if (!VAR_3)
        VAR_5 = 0;

    *VAR_4 = FUNC_1(VAR_6->path) + 1;

    if (*VAR_4 <= VAR_5)
        FUNC_0(VAR_3, VAR_6->path);
    else
        return VAR_0;

    return VAR_1;
}
