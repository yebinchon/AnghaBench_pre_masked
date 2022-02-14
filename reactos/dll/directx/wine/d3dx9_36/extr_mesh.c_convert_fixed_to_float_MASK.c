
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {float x; float y; } ;
struct TYPE_7__ {float value; float fract; } ;
struct TYPE_8__ {float value; float fract; } ;
struct TYPE_9__ {TYPE_1__ y; TYPE_2__ x; } ;
typedef TYPE_3__ POINTFX ;
typedef TYPE_4__ D3DXVECTOR2 ;



__attribute__((used)) static inline D3DXVECTOR2 *FUNC_0(POINTFX *VAR_0, int VAR_1, unsigned int VAR_2)
{
    D3DXVECTOR2 *VAR_3 = (D3DXVECTOR2*)VAR_0;
    while (VAR_1--) {
        D3DXVECTOR2 *VAR_4 = (D3DXVECTOR2*)VAR_0;
        VAR_4->x = (VAR_0->x.value + VAR_0->x.fract / (float)0x10000) / VAR_2;
        VAR_4->y = (VAR_0->y.value + VAR_0->y.fract / (float)0x10000) / VAR_2;
        VAR_0++;
    }
    return VAR_3;
}
