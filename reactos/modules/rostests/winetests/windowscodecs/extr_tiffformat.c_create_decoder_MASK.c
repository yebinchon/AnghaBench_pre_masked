
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ LONG ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;
typedef int GUID ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int ,int **) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,void const*,int ) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static HRESULT FUNC_11(const void *VAR_4, UINT VAR_5, IWICBitmapDecoder **VAR_6)
{
    HGLOBAL VAR_7;
    BYTE *VAR_8;
    HRESULT VAR_9;
    IStream *VAR_10;
    GUID VAR_11;
    LONG VAR_12;

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_1(0, VAR_5);
    VAR_8 = FUNC_2(VAR_7);
    FUNC_8(VAR_8, VAR_4, VAR_5);
    FUNC_3(VAR_7);

    VAR_9 = FUNC_0(VAR_7, VAR_2, &VAR_10);
    FUNC_9(VAR_9 == VAR_1, "CreateStreamOnHGlobal error %#x\n", VAR_9);

    VAR_9 = FUNC_6(VAR_3, VAR_10, ((void*)0), 0, VAR_6);
    if (VAR_9 == VAR_1)
    {
        VAR_9 = FUNC_5(*VAR_6, &VAR_11);
        FUNC_9(VAR_9 == VAR_1, "GetContainerFormat error %#x\n", VAR_9);
        FUNC_9(FUNC_7(&VAR_11, &VAR_0),
           "wrong container format %s\n", FUNC_10(&VAR_11));

        VAR_12 = FUNC_4(VAR_10);
        FUNC_9(VAR_12 > 0, "expected stream refcount > 0\n");
    }

    return VAR_9;
}
