
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    int VAR_5;
    HRESULT VAR_6;

    FUNC_1("%s\n", FUNC_3(VAR_2));

    FUNC_2(VAR_3 == 1);

    VAR_6 = FUNC_5(VAR_2, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;
    if(!VAR_4)
        return VAR_0;

    return FUNC_4(VAR_4, VAR_5);
}
