
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; float w; } ;
typedef int IDirect3DDevice9 ;
typedef int ID3DXConstantTable ;
typedef TYPE_1__ D3DXVECTOR4 ;


 int FUNC_0 (int *,int *,char const*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(IDirect3DDevice9 *VAR_0, ID3DXConstantTable *VAR_1, const char *VAR_2,
        float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
    D3DXVECTOR4 VAR_7;
    VAR_7.x = VAR_3;
    VAR_7.y = VAR_4;
    VAR_7.z = VAR_5;
    VAR_7.w = VAR_6;
    FUNC_0(VAR_1, VAR_0, VAR_2, &VAR_7);
}
