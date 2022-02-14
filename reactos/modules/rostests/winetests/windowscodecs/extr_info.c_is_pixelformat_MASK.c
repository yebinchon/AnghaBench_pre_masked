
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WICComponentType ;
typedef int IWICComponentInfo ;
typedef int HRESULT ;
typedef int GUID ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,int **) ;

__attribute__((used)) static BOOL FUNC_5(GUID *VAR_2)
{
    IWICComponentInfo *VAR_3;
    HRESULT VAR_4;
    WICComponentType VAR_5;

    VAR_4 = FUNC_4(VAR_2, &VAR_3);
    if (FUNC_0(VAR_4))
        return VAR_0;

    VAR_4 = FUNC_1(VAR_3, &VAR_5);

    FUNC_2(VAR_3);

    return FUNC_3(VAR_4) && VAR_5 == VAR_1;
}
