
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_data {int dummy; } ;
typedef int colors ;
typedef int WICColor ;
typedef int IWICPalette ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (struct bitmap_data const**,int const*,struct bitmap_data const**,int const*,int *,int *,char const*,int *) ;

__attribute__((used)) static void FUNC_6(const struct bitmap_data *VAR_2, const CLSID* VAR_3,
    const struct bitmap_data *VAR_4, const CLSID *VAR_5, const char *VAR_6)
{
    const struct bitmap_data *VAR_7[2];
    const struct bitmap_data *VAR_8[2];
    WICColor VAR_9[256];
    IWICPalette *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(VAR_1, &VAR_10);
    FUNC_4(VAR_11 == VAR_0, "CreatePalette error %#x\n", VAR_11);

    FUNC_3(VAR_9, 0, sizeof(VAR_9));
    VAR_9[0] = 0x11111111;
    VAR_9[1] = 0x22222222;
    VAR_9[2] = 0x33333333;
    VAR_9[3] = 0x44444444;
    VAR_9[4] = 0x55555555;

    VAR_11 = FUNC_1(VAR_10, VAR_9, 256);
    FUNC_4(VAR_11 == VAR_0, "InitializeCustom error %#x\n", VAR_11);

    VAR_7[0] = VAR_2;
    VAR_7[1] = ((void*)0);
    VAR_8[0] = VAR_4;
    VAR_8[1] = ((void*)0);

    FUNC_5(VAR_7, VAR_3, VAR_8, VAR_5, ((void*)0), ((void*)0), VAR_6, VAR_10);

    FUNC_2(VAR_10);
}
