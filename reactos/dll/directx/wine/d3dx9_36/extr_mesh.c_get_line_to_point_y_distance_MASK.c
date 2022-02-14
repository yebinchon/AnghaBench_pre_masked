
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; int member_1; int member_0; } ;
typedef TYPE_1__ D3DXVECTOR2 ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static float FUNC_1(D3DXVECTOR2 *VAR_0,
                                          D3DXVECTOR2 *VAR_1,
                                          D3DXVECTOR2 *VAR_2)
{
    D3DXVECTOR2 VAR_3 = {0, 0};
    float VAR_4;
    float VAR_5;

    FUNC_0(&VAR_3, VAR_1, VAR_0);
    VAR_4 = VAR_2->x - VAR_0->x;
    VAR_5 = VAR_0->y + (VAR_3.y * VAR_4) / VAR_3.x;
    return VAR_2->y - VAR_5;
}
