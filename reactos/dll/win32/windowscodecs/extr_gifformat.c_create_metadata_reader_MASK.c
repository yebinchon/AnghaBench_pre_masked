
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* class_constructor ) (int *,void**) ;
typedef int IWICPersistStream ;
typedef int IWICMetadataReader ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_6 (void const*,int) ;

__attribute__((used)) static HRESULT FUNC_7(const void *VAR_4, int VAR_5,
                                      class_constructor VAR_6,
                                      IWICMetadataReader **VAR_7)
{
    HRESULT VAR_8;
    IWICMetadataReader *VAR_9;
    IWICPersistStream *VAR_10;
    IStream *VAR_11;



    VAR_8 = VAR_6(&VAR_0, (void**)&VAR_9);
    if (FUNC_0(VAR_8)) return VAR_8;

    VAR_8 = FUNC_2(VAR_9, &VAR_1, (void **)&VAR_10);
    if (FUNC_0(VAR_8))
    {
        FUNC_3(VAR_9);
        return VAR_8;
    }

    VAR_11 = FUNC_6(VAR_4, VAR_5);
    FUNC_4(VAR_10, VAR_11, ((void*)0), VAR_3);
    FUNC_1(VAR_11);

    FUNC_5(VAR_10);

    *VAR_7 = VAR_9;
    return VAR_2;
}
