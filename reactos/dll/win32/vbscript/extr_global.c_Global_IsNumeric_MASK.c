
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,double*) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    HRESULT VAR_4;
    double VAR_5;

    FUNC_1("(%s)\n", FUNC_3(VAR_1));

    FUNC_2(VAR_2 == 1);

    VAR_4 = FUNC_5(VAR_1, &VAR_5);

    return FUNC_4(VAR_3, FUNC_0(VAR_4));
}
