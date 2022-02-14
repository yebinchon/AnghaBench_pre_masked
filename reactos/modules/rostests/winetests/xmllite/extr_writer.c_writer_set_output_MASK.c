
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXmlWriter ;
typedef int IUnknown ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static IStream *FUNC_3(IXmlWriter *VAR_2)
{
    IStream *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_0(((void*)0), VAR_1, &VAR_3);
    FUNC_2(VAR_4 == VAR_0, "got 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, (IUnknown*)VAR_3);
    FUNC_2(VAR_4 == VAR_0, "got 0x%08x\n", VAR_4);

    return VAR_3;
}
