
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {TYPE_1__ member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ PROPBAG2 ;
typedef int LPOLESTR ;
typedef int IWICComponentFactory ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int,int **) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_9;
    IWICComponentFactory *VAR_10;
    IPropertyBag2 *VAR_11;
    PROPBAG2 VAR_12[2]= {
        {VAR_3, VAR_6, 0, 0, (LPOLESTR)VAR_7, 0},
        {VAR_3, VAR_5, 0, 0, (LPOLESTR)VAR_8, 0}
    };

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_2, (void**)&VAR_10);
    FUNC_5(VAR_9 == VAR_4, "CoCreateInstance failed, hr=%x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_10, VAR_12, 2, &VAR_11);

    FUNC_5(VAR_9 == VAR_4, "Creating EncoderPropertyBag failed, hr=%x\n", VAR_9);
    if (FUNC_1(VAR_9)) return;

    FUNC_6(VAR_11, 2);

    FUNC_7(VAR_11, 2);

    FUNC_9(VAR_11);

    FUNC_8(VAR_11);

    FUNC_2(VAR_11);

    FUNC_4(VAR_10);
}
