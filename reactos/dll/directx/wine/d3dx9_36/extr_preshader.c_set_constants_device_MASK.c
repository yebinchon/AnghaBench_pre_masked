
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDirect3DDevice9 {int dummy; } ;
typedef enum pres_reg_tables { ____Placeholder_pres_reg_tables } pres_reg_tables ;
typedef int ID3DXEffectStateManager ;
typedef int HRESULT ;
typedef scalar_t__ D3DXPARAMETER_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;



 int FUNC_1 (int *,struct IDirect3DDevice9*,int ,unsigned int,void*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HRESULT FUNC_2(ID3DXEffectStateManager *VAR_9, struct IDirect3DDevice9 *VAR_10,
        D3DXPARAMETER_TYPE VAR_11, enum pres_reg_tables VAR_12, void *VAR_13,
        unsigned int VAR_14, unsigned int VAR_15)
{
    if (VAR_11 == VAR_2)
    {
        switch(VAR_12)
        {
            case 129:
                return FUNC_1(VAR_9, VAR_10, VAR_7, VAR_14, VAR_13, VAR_15);
            case 128:
                return FUNC_1(VAR_9, VAR_10, VAR_8, VAR_14, VAR_13, VAR_15);
            case 130:
                return FUNC_1(VAR_9, VAR_10, VAR_6, VAR_14, VAR_13, VAR_15);
            default:
                FUNC_0("Unexpected register table %u.\n", VAR_12);
                return VAR_0;
        }
    }
    else if (VAR_11 == VAR_1)
    {
        switch(VAR_12)
        {
            case 129:
                return FUNC_1(VAR_9, VAR_10, VAR_4, VAR_14, VAR_13, VAR_15);
            case 128:
                return FUNC_1(VAR_9, VAR_10, VAR_5, VAR_14, VAR_13, VAR_15);
            case 130:
                return FUNC_1(VAR_9, VAR_10, VAR_3, VAR_14, VAR_13, VAR_15);
            default:
                FUNC_0("Unexpected register table %u.\n", VAR_12);
                return VAR_0;
        }
    }
    else
    {
        FUNC_0("Unexpected parameter type %u.\n", VAR_11);
        return VAR_0;
    }
}
