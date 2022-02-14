
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IWICPixelFormatInfo2 ;
typedef int IWICComponentInfo ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int const*,int **) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,char*,scalar_t__,...) ;
 int FUNC_8 (int const*) ;

__attribute__((used)) static HRESULT FUNC_9(const GUID *VAR_4, UINT *VAR_5, UINT *VAR_6, BOOL *VAR_7)
{
    HRESULT VAR_8;
    IWICComponentInfo *VAR_9;
    IWICPixelFormatInfo2 *VAR_10;

    VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_9);
    FUNC_7(VAR_8 == VAR_2, "CreateComponentInfo(%s) error %#x\n", FUNC_8(VAR_4), VAR_8);
    if (VAR_8 == VAR_2)
    {
        VAR_8 = FUNC_0(VAR_9, &VAR_1, (void **)&VAR_10);
        if (VAR_8 == VAR_2)
        {
            VAR_8 = FUNC_6(VAR_10, VAR_7);
            FUNC_7(VAR_8 == VAR_2, "SupportsTransparency error %#x\n", VAR_8);
            FUNC_5(VAR_10);
        }
        VAR_8 = FUNC_0(VAR_9, &VAR_0, (void **)&VAR_10);
        if (VAR_8 == VAR_2)
        {
            VAR_8 = FUNC_3(VAR_10, VAR_5);
            FUNC_7(VAR_8 == VAR_2, "GetBitsPerPixel error %#x\n", VAR_8);
            VAR_8 = FUNC_4(VAR_10, VAR_6);
            FUNC_7(VAR_8 == VAR_2, "GetChannelCount error %#x\n", VAR_8);
            FUNC_5(VAR_10);
        }
        FUNC_1(VAR_9);
    }
    return VAR_8;
}
