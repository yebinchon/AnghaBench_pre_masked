
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,double*) ;

__attribute__((used)) static HRESULT FUNC_4(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    HRESULT VAR_4;
    double VAR_5;

    VAR_4 = FUNC_3(VAR_1, &VAR_5);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_2(VAR_3, FUNC_1(VAR_5));
}
