
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;




 double FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (double) ;
 int FUNC_7 (int *,double*) ;

__attribute__((used)) static HRESULT FUNC_8(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    double VAR_5;
    HRESULT VAR_6;

    FUNC_1("%s\n", FUNC_4(VAR_2));

    if(!VAR_4)
        return VAR_0;

    switch(FUNC_3(VAR_2)) {
    case 130:
    case 129:
    case 131:
        *VAR_4 = *VAR_2;
        return VAR_0;
    case 128:
        VAR_5 = FUNC_2(VAR_2);
        break;
    default:
        VAR_6 = FUNC_7(VAR_2, &VAR_5);
        if(FUNC_0(VAR_6))
            return VAR_6;
    }

    return FUNC_5(VAR_4, FUNC_6(VAR_5));
}
