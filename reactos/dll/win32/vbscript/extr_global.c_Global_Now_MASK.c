
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int SYSTEMTIME ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,double) ;

__attribute__((used)) static HRESULT FUNC_4(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    SYSTEMTIME VAR_4;
    double VAR_5;

    FUNC_2("\n");

    FUNC_0(&VAR_4);
    FUNC_1(&VAR_4, &VAR_5);
    return FUNC_3(VAR_3, VAR_5);
}
