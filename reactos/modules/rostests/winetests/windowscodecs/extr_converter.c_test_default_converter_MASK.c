
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IWICBitmapSource_iface; } ;
typedef int IWICFormatConverter ;
typedef int IWICBitmapSource ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BitmapTestSrc ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int ,int *,double,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,int *,int *,char*) ;
 int FUNC_8 (scalar_t__,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(void)
{
    BitmapTestSrc *VAR_10;
    IWICFormatConverter *VAR_11;
    BOOL VAR_12 = VAR_5;
    HRESULT VAR_13;

    FUNC_1(&VAR_9, &VAR_10);

    VAR_13 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_4, (void**)&VAR_11);
    FUNC_8(FUNC_6(VAR_13), "CoCreateInstance failed, hr=%x\n", VAR_13);
    if (FUNC_6(VAR_13))
    {
        VAR_13 = FUNC_3(VAR_11, &VAR_3,
            &VAR_2, &VAR_12);
        FUNC_8(FUNC_6(VAR_13), "CanConvert returned %x\n", VAR_13);
        FUNC_8(VAR_12, "expected TRUE, got %i\n", VAR_12);

        VAR_13 = FUNC_4(VAR_11, &VAR_10->IWICBitmapSource_iface,
            &VAR_2, VAR_6, ((void*)0), 0.0,
            VAR_7);
        FUNC_8(FUNC_6(VAR_13), "Initialize returned %x\n", VAR_13);

        if (FUNC_6(VAR_13))
            FUNC_7(&VAR_9, &VAR_8, (IWICBitmapSource*)VAR_11, "default converter");

        FUNC_5(VAR_11);
    }

    FUNC_2(VAR_10);
}
