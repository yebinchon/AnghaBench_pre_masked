
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctab_constant {int constantinfo_reserved; int desc; } ;
typedef int WORD ;
typedef int ID3DXConstantTable ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;
typedef int D3DXCONSTANT_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct ctab_constant* FUNC_1 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_2(ID3DXConstantTable *VAR_2, D3DXHANDLE VAR_3, D3DXCONSTANT_DESC *VAR_4,
        WORD *VAR_5)
{
    const struct ctab_constant *VAR_6 = FUNC_1(VAR_2, VAR_3);

    if (!VAR_6)
    {
        FUNC_0("Could not get constant desc.\n");
        if (VAR_5)
            *VAR_5 = 0;
        return VAR_0;
    }
    *VAR_4 = VAR_6->desc;
    if (VAR_5)
        *VAR_5 = VAR_6->constantinfo_reserved;
    return VAR_1;
}
