
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct d3drm_matrix {float _11; float _21; float _31; float _41; float _12; float _22; float _32; float _42; float _13; float _23; float _33; float _43; float _14; float _24; float _34; float _44; } ;
struct TYPE_9__ {float z; } ;
struct TYPE_8__ {float x; } ;
struct TYPE_7__ {float y; } ;
struct TYPE_10__ {TYPE_3__ u3; TYPE_2__ u1; TYPE_1__ u2; } ;
typedef TYPE_4__ D3DVECTOR ;


 int FUNC_0 (TYPE_4__*) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(struct d3drm_matrix *VAR_0, D3DVECTOR *VAR_1, float VAR_2)
{
    float VAR_3, VAR_4, VAR_5;

    FUNC_0(VAR_1);
    VAR_3 = FUNC_2(VAR_2);
    VAR_4 = FUNC_1(VAR_2);
    VAR_5 = 1.0f - VAR_4;

    VAR_0->_11 = VAR_5 * VAR_1->u1.x * VAR_1->u1.x + VAR_4;
    VAR_0->_21 = VAR_5 * VAR_1->u1.x * VAR_1->u2.y - VAR_3 * VAR_1->u3.z;
    VAR_0->_31 = VAR_5 * VAR_1->u1.x * VAR_1->u3.z + VAR_3 * VAR_1->u2.y;
    VAR_0->_41 = 0.0f;

    VAR_0->_12 = VAR_5 * VAR_1->u2.y * VAR_1->u1.x + VAR_3 * VAR_1->u3.z;
    VAR_0->_22 = VAR_5 * VAR_1->u2.y * VAR_1->u2.y + VAR_4;
    VAR_0->_32 = VAR_5 * VAR_1->u2.y * VAR_1->u3.z - VAR_3 * VAR_1->u1.x;
    VAR_0->_42 = 0.0f;

    VAR_0->_13 = VAR_5 * VAR_1->u3.z * VAR_1->u1.x - VAR_3 * VAR_1->u2.y;
    VAR_0->_23 = VAR_5 * VAR_1->u3.z * VAR_1->u2.y + VAR_3 * VAR_1->u1.x;
    VAR_0->_33 = VAR_5 * VAR_1->u3.z * VAR_1->u3.z + VAR_4;
    VAR_0->_43 = 0.0f;

    VAR_0->_14 = 0.0f;
    VAR_0->_24 = 0.0f;
    VAR_0->_34 = 0.0f;
    VAR_0->_44 = 1.0f;
}
