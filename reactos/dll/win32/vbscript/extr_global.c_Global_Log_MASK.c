
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (double) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,double*) ;

__attribute__((used)) static HRESULT FUNC_5(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    HRESULT VAR_5;
    double VAR_6;

    VAR_5 = FUNC_4(VAR_2, &VAR_6);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(VAR_6 <= 0)
        return FUNC_1(VAR_0);
    else
        return FUNC_3(VAR_4, FUNC_2(VAR_6));
}
