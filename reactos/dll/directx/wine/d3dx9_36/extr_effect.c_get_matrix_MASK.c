
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_parameter {int rows; int columns; int type; scalar_t__ data; } ;
typedef int UINT ;
struct TYPE_4__ {int ** m; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef float FLOAT ;
typedef int DWORD ;
typedef TYPE_2__ D3DXMATRIX ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (float*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct d3dx_parameter *VAR_1, D3DXMATRIX *VAR_2, BOOL VAR_3)
{
    UINT VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
    {
        for (VAR_5 = 0; VAR_5 < 4; ++VAR_5)
        {
            FLOAT *VAR_6 = VAR_3 ? (FLOAT *)&VAR_2->u.m[VAR_5][VAR_4] : (FLOAT *)&VAR_2->u.m[VAR_4][VAR_5];

            if ((VAR_4 < VAR_1->rows) && (VAR_5 < VAR_1->columns))
                FUNC_0(VAR_6, VAR_0, (DWORD *)VAR_1->data + VAR_4 * VAR_1->columns + VAR_5, VAR_1->type);
            else
                *VAR_6 = 0.0f;
        }
    }
}
