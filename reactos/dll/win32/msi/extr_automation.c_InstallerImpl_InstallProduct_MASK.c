
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int VARIANTARG ;
typedef int VARIANT ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int *,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(WORD VAR_5,
                                            DISPPARAMS* VAR_6,
                                            VARIANT* VAR_7,
                                            EXCEPINFO* VAR_8,
                                            UINT* VAR_9)
{
    UINT VAR_10;
    HRESULT VAR_11;
    VARIANTARG VAR_12, VAR_13;

    if (!(VAR_5 & VAR_0))
        return VAR_2;

    FUNC_5(&VAR_12);
    VAR_11 = FUNC_0(VAR_6, 0, VAR_4, &VAR_12, VAR_9);
    if (FUNC_1(VAR_11))
        return VAR_11;

    FUNC_5(&VAR_13);
    VAR_11 = FUNC_0(VAR_6, 1, VAR_4, &VAR_13, VAR_9);
    if (FUNC_1(VAR_11))
        goto done;

    VAR_10 = FUNC_2(FUNC_3(&VAR_12), FUNC_3(&VAR_13));
    if (VAR_10 != VAR_3)
    {
        VAR_11 = VAR_1;
        goto done;
    }

done:
    FUNC_4(&VAR_12);
    FUNC_4(&VAR_13);
    return VAR_11;
}
