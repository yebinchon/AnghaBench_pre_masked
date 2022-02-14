
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MIMECPINFO ;
typedef int IMultiLanguage ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int **) ;

__attribute__((used)) static HRESULT FUNC_4(UINT VAR_0, MIMECPINFO *VAR_1)
{
    HRESULT VAR_2;
    IMultiLanguage *VAR_3;

    VAR_2 = FUNC_3(&VAR_3);

    if(FUNC_2(VAR_2))
    {
        VAR_2 = FUNC_0(VAR_3, VAR_0, VAR_1);
        FUNC_1(VAR_3);
    }
    return VAR_2;
}
