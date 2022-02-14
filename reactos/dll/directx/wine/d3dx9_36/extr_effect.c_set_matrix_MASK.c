
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_parameter {int columns; float* data; int rows; int type; } ;
typedef int UINT ;
struct TYPE_4__ {int ** m; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef int FLOAT ;
typedef TYPE_2__ D3DXMATRIX ;


 int VAR_0 ;
 int FUNC_0 (float*,int **,int) ;
 int FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct d3dx_parameter *VAR_1, const D3DXMATRIX *VAR_2)
{
    UINT VAR_3, VAR_4;

    if (VAR_1->type == VAR_0)
    {
        if (VAR_1->columns == 4)
            FUNC_0(VAR_1->data, VAR_2->u.m, VAR_1->rows * 4 * sizeof(float));
        else
            for (VAR_3 = 0; VAR_3 < VAR_1->rows; ++VAR_3)
                FUNC_0((float *)VAR_1->data + VAR_3 * VAR_1->columns, VAR_2->u.m + VAR_3, VAR_1->columns * sizeof(float));
        return;
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->rows; ++VAR_3)
    {
        for (VAR_4 = 0; VAR_4 < VAR_1->columns; ++VAR_4)
        {
            FUNC_1((FLOAT *)VAR_1->data + VAR_3 * VAR_1->columns + VAR_4, VAR_1->type,
                    &VAR_2->u.m[VAR_3][VAR_4], VAR_0);
        }
    }
}
