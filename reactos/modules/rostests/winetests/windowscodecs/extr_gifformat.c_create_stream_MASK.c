
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,void const*,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static IStream *FUNC_6(const void *VAR_2, UINT VAR_3)
{
    HGLOBAL VAR_4;
    BYTE *VAR_5;
    HRESULT VAR_6;
    IStream *VAR_7;

    VAR_4 = FUNC_1(0, VAR_3);
    VAR_5 = FUNC_2(VAR_4);
    FUNC_4(VAR_5, VAR_2, VAR_3);
    FUNC_3(VAR_4);

    VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_7);
    FUNC_5(VAR_6 == VAR_0, "CreateStreamOnHGlobal error %#x\n", VAR_6);

    return VAR_7;
}
