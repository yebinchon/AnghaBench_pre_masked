
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int IWICBitmapFrameDecode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static HRESULT FUNC_2(IWICBitmapFrameDecode *VAR_1,
        UINT *VAR_2, UINT *VAR_3, UINT *VAR_4, UINT *VAR_5)
{
    static const WCHAR VAR_6[] = {'L','e','f','t',0};
    static const WCHAR VAR_7[] = {'T','o','p',0};

    *VAR_2 = FUNC_1(VAR_1, &VAR_0, VAR_6);
    *VAR_3 = FUNC_1(VAR_1, &VAR_0, VAR_7);

    return FUNC_0(VAR_1, VAR_4, VAR_5);
}
