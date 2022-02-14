
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IWICBitmapSource_iface; } ;
typedef TYPE_2__ BitmapTestSrc ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int,char*,TYPE_2__*,...) ;

__attribute__((used)) static void FUNC_3(BitmapTestSrc *VAR_1)
{
    FUNC_2(VAR_1->IWICBitmapSource_iface.lpVtbl == &VAR_0, "test bitmap %p deleted with incorrect vtable\n", VAR_1);
    FUNC_2(VAR_1->ref == 1, "test bitmap %p deleted with %i references instead of 1\n", VAR_1, VAR_1->ref);
    FUNC_1(FUNC_0(), 0, VAR_1);
}
