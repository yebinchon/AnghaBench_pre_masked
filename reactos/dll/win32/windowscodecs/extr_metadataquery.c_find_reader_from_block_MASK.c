
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int IWICMetadataReader ;
typedef int IWICMetadataBlockReader ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int **) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static HRESULT FUNC_5(IWICMetadataBlockReader *VAR_2, UINT VAR_3,
                                      GUID *VAR_4, IWICMetadataReader **VAR_5)
{
    HRESULT VAR_6;
    GUID VAR_7;
    IWICMetadataReader *VAR_8;
    UINT VAR_9, VAR_10, VAR_11;

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_0(VAR_2, &VAR_9);
    if (VAR_6 != VAR_0) return VAR_6;

    VAR_11 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        VAR_6 = FUNC_1(VAR_2, VAR_10, &VAR_8);
        if (VAR_6 != VAR_0) return VAR_6;

        VAR_6 = FUNC_2(VAR_8, &VAR_7);
        if (VAR_6 == VAR_0)
        {
            if (FUNC_4(&VAR_7, VAR_4))
            {
                if (VAR_11 == VAR_3)
                {
                    *VAR_5 = VAR_8;
                    return VAR_0;
                }

                VAR_11++;
            }
        }

        FUNC_3(VAR_8);
        if (VAR_6 != VAR_0) return VAR_6;
    }

    return VAR_1;
}
