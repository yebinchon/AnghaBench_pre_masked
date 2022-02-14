
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int metadata_reader_func ;
typedef int REFGUID ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;

__attribute__((used)) static GpStatus FUNC_3(IStream *VAR_2, REFGUID VAR_3,
        metadata_reader_func VAR_4, GpImage **VAR_5)
{
    IWICBitmapDecoder *VAR_6;
    GpStatus VAR_7;

    VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_6);
    if(VAR_7 != VAR_1)
        return VAR_7;

    VAR_7 = FUNC_1(VAR_6, VAR_0, 0, VAR_4, VAR_5);
    FUNC_0(VAR_6);
    return VAR_7;
}
