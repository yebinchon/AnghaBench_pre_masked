
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICBitmapFrameDecode ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int **) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int *,int **) ;
 int VAR_11 ;

__attribute__((used)) static GpStatus FUNC_9(IStream* VAR_12, GpImage **VAR_13)
{
    IWICBitmapDecoder *VAR_14;
    IWICBitmapFrameDecode *VAR_15;
    GpStatus VAR_16;
    HRESULT VAR_17;
    GUID VAR_18;
    BOOL VAR_19 = VAR_0;

    VAR_16 = FUNC_8(VAR_12, &VAR_1, &VAR_14);
    if (VAR_16 != VAR_8)
        return VAR_16;

    VAR_17 = FUNC_0(VAR_14, 0, &VAR_15);
    if (VAR_17 == VAR_9)
    {
        VAR_17 = FUNC_2(VAR_15, &VAR_18);
        if (VAR_17 == VAR_9)
        {
            if (FUNC_4(&VAR_18, &VAR_6))
                VAR_19 = VAR_10;
            else if ((FUNC_4(&VAR_18, &VAR_7) ||
                      FUNC_4(&VAR_18, &VAR_5) ||
                      FUNC_4(&VAR_18, &VAR_4) ||
                      FUNC_4(&VAR_18, &VAR_2) ||
                      FUNC_4(&VAR_18, &VAR_3)) &&
                     FUNC_6(VAR_12))
                VAR_19 = VAR_10;

            VAR_16 = FUNC_5(VAR_14, VAR_19, 0, VAR_11, VAR_13);
        }
        else
            VAR_16 = FUNC_7(VAR_17);

        FUNC_3(VAR_15);
    }
    else
        VAR_16 = FUNC_7(VAR_17);

    FUNC_1(VAR_14);
    return VAR_16;
}
