
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IFilterMapper_iface; } ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_1__ FilterMapper3Impl ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (char*,int *,int **) ;

HRESULT FUNC_3(IUnknown *VAR_0, LPVOID *VAR_1)
{
    FilterMapper3Impl *VAR_2;
    HRESULT VAR_3;

    FUNC_2("(%p, %p)\n", VAR_0, VAR_1);

    VAR_3 = FUNC_1(VAR_0, (LPVOID*)&VAR_2);
    if (FUNC_0(VAR_3))
        return VAR_3;

    *VAR_1 = &VAR_2->IFilterMapper_iface;

    return VAR_3;
}
