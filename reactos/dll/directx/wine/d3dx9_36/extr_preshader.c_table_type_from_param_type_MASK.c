
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pres_value_type { ____Placeholder_pres_value_type } pres_value_type ;
typedef int D3DXPARAMETER_TYPE ;





 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum pres_value_type FUNC_1(D3DXPARAMETER_TYPE VAR_4)
{
    switch (VAR_4)
    {
        case 129:
            return VAR_2;
        case 128:
            return VAR_3;
        case 130:
            return VAR_0;
        default:
            FUNC_0("Unsupported type %u.\n", VAR_4);
            return VAR_1;
    }
}
