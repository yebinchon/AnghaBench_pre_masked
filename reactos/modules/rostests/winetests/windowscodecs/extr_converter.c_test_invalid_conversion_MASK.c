
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IWICBitmapSource_iface; } ;
typedef int IWICBitmapSource ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BitmapTestSrc ;


 int FUNC_0 (int *,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    BitmapTestSrc *VAR_3;
    IWICBitmapSource *VAR_4;
    HRESULT VAR_5;

    FUNC_0(&VAR_2, &VAR_3);


    VAR_5 = FUNC_2(&VAR_0, &VAR_3->IWICBitmapSource_iface, &VAR_4);
    FUNC_3(VAR_5 == VAR_1, "WICConvertBitmapSource returned %x\n", VAR_5);

    FUNC_1(VAR_3);
}
