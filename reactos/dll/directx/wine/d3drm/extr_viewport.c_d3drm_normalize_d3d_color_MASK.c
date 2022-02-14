
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {float a; } ;
struct TYPE_9__ {float b; } ;
struct TYPE_8__ {float g; } ;
struct TYPE_7__ {float r; } ;
struct TYPE_11__ {TYPE_4__ u4; TYPE_3__ u3; TYPE_2__ u2; TYPE_1__ u1; } ;
typedef TYPE_5__ D3DCOLORVALUE ;
typedef int D3DCOLOR ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;
 float FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(D3DCOLORVALUE *VAR_0, D3DCOLOR VAR_1)
{
    VAR_0->u1.r = FUNC_3(VAR_1) / 255.0f;
    VAR_0->u2.g = FUNC_2(VAR_1) / 255.0f;
    VAR_0->u3.b = FUNC_1(VAR_1) / 255.0f;
    VAR_0->u4.a = FUNC_0(VAR_1) / 255.0f;
}
