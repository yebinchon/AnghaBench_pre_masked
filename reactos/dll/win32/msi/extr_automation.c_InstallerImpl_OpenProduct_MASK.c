
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int VARIANTARG ;
typedef int VARIANT ;
typedef int UINT ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static HRESULT FUNC_7(WORD VAR_4,
                                         DISPPARAMS* VAR_5,
                                         VARIANT* VAR_6,
                                         EXCEPINFO* VAR_7,
                                         UINT* VAR_8)
{
    HRESULT VAR_9;
    VARIANTARG VAR_10;

    if (!(VAR_4 & VAR_0))
        return VAR_1;

    FUNC_5(&VAR_10);
    VAR_9 = FUNC_0(VAR_5, 0, VAR_3, &VAR_10, VAR_8);
    if (FUNC_1(VAR_9))
        return VAR_9;

    FUNC_2("%s\n", FUNC_6(FUNC_3(&VAR_10)));

    FUNC_5(VAR_6);

    FUNC_4(&VAR_10);
    return VAR_2;
}
