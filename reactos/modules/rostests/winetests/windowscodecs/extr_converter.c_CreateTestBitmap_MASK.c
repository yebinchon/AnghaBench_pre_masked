
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bitmap_data ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int const* data; TYPE_1__ IWICBitmapSource_iface; } ;
typedef TYPE_2__ BitmapTestSrc ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(const bitmap_data *VAR_1, BitmapTestSrc **VAR_2)
{
    *VAR_2 = FUNC_1(FUNC_0(), 0, sizeof(**VAR_2));

    if (*VAR_2)
    {
        (*VAR_2)->IWICBitmapSource_iface.lpVtbl = &VAR_0;
        (*VAR_2)->ref = 1;
        (*VAR_2)->data = VAR_1;
    }
}
