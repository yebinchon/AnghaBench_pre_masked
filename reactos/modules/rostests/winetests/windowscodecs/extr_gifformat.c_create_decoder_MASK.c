
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ LONG ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int ,int **) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (void const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static IWICBitmapDecoder *FUNC_7(const void *VAR_3, UINT VAR_4)
{
    HRESULT VAR_5;
    IWICBitmapDecoder *VAR_6;
    IStream *VAR_7;
    GUID VAR_8;
    LONG VAR_9;

    VAR_7 = FUNC_4(VAR_3, VAR_4);
    if (!VAR_7) return ((void*)0);

    VAR_5 = FUNC_2(VAR_2, VAR_7, ((void*)0), 0, &VAR_6);
    FUNC_5(VAR_5 == VAR_1, "CreateDecoderFromStream error %#x\n", VAR_5);

    VAR_5 = FUNC_1(VAR_6, &VAR_8);
    FUNC_5(VAR_5 == VAR_1, "GetContainerFormat error %#x\n", VAR_5);
    FUNC_5(FUNC_3(&VAR_8, &VAR_0),
       "wrong container format %s\n", FUNC_6(&VAR_8));

    VAR_9 = FUNC_0(VAR_7);
    FUNC_5(VAR_9 > 0, "expected stream refcount > 0\n");

    return VAR_6;
}
