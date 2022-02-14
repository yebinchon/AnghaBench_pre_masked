
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_rstart; int current_rstop; int * clock; int * tonotify; int * self; int * input; } ;
typedef TYPE_1__ QualityControlImpl ;
typedef int IPin ;
typedef int IBaseFilter ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_1__*,...) ;

HRESULT FUNC_3(IPin *VAR_3, IBaseFilter *VAR_4, QualityControlImpl **VAR_5)
{
    QualityControlImpl *VAR_6;
    FUNC_2("%p, %p, %p\n", VAR_3, VAR_4, VAR_5);
    *VAR_5 = FUNC_1(FUNC_0(),VAR_1,sizeof(QualityControlImpl));
    if (!*VAR_5)
        return VAR_0;
    VAR_6 = *VAR_5;
    VAR_6->input = VAR_3;
    VAR_6->self = VAR_4;
    VAR_6->tonotify = ((void*)0);
    VAR_6->clock = ((void*)0);
    VAR_6->current_rstart = VAR_6->current_rstop = -1;
    FUNC_2("-> %p\n", VAR_6);
    return VAR_2;
}
