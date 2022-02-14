
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,short) ;
 int FUNC_7 (int *,double*) ;

__attribute__((used)) static HRESULT FUNC_8(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    double VAR_6;
    short VAR_7;
    HRESULT VAR_8;

    FUNC_2("(%s)\n", FUNC_5(VAR_3));

    FUNC_4(VAR_4 == 1);

    if(FUNC_3(VAR_3) == VAR_1)
        return FUNC_1(VAR_0);

    VAR_8 = FUNC_7(VAR_3, &VAR_6);
    if (FUNC_0(VAR_8))
        return VAR_8;

    VAR_7 = VAR_6 == 0 ? 0 : (VAR_6 > 0 ? 1 : -1);
    return FUNC_6(VAR_5, VAR_7);
}
