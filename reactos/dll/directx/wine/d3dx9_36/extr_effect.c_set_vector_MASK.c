
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ columns; int type; scalar_t__ data; } ;
typedef scalar_t__ UINT ;
typedef int FLOAT ;
typedef int D3DXVECTOR4 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct d3dx_parameter *VAR_1, const D3DXVECTOR4 *VAR_2)
{
    UINT VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->columns; ++VAR_3)
    {
        FUNC_0((FLOAT *)VAR_1->data + VAR_3, VAR_1->type, (FLOAT *)VAR_2 + VAR_3, VAR_0);
    }
}
