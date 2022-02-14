
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICComponentFactory ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_4;
    IWICComponentFactory *VAR_5;
    IPropertyBag2 *VAR_6;

    VAR_4 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_2, (void**)&VAR_5);
    FUNC_5(VAR_4 == VAR_3, "CoCreateInstance failed, hr=%x\n", VAR_4);

    VAR_4 = FUNC_3(VAR_5, ((void*)0), 0, &VAR_6);

    FUNC_5(VAR_4 == VAR_3, "Creating EncoderPropertyBag failed, hr=%x\n", VAR_4);
    if (FUNC_1(VAR_4)) return;

    FUNC_6(VAR_6, 0);

    FUNC_7(VAR_6, 0);

    FUNC_2(VAR_6);

    FUNC_4(VAR_5);
}
