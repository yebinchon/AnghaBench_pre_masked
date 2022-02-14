
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct d3drm_matrix {int _11; int _21; int _31; int _41; int _12; int _22; int _32; int _42; int _13; int _23; int _33; int _43; } ;
struct TYPE_9__ {int z; } ;
struct TYPE_8__ {int y; } ;
struct TYPE_7__ {int x; } ;
struct TYPE_10__ {TYPE_3__ u3; TYPE_2__ u2; TYPE_1__ u1; } ;
typedef TYPE_4__ D3DVECTOR ;



__attribute__((used)) static void FUNC_0(D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1, const struct d3drm_matrix *VAR_2)
{
    D3DVECTOR VAR_3;

    VAR_3.u1.x = VAR_1->u1.x * VAR_2->_11 + VAR_1->u2.y * VAR_2->_21 + VAR_1->u3.z * VAR_2->_31 + VAR_2->_41;
    VAR_3.u2.y = VAR_1->u1.x * VAR_2->_12 + VAR_1->u2.y * VAR_2->_22 + VAR_1->u3.z * VAR_2->_32 + VAR_2->_42;
    VAR_3.u3.z = VAR_1->u1.x * VAR_2->_13 + VAR_1->u2.y * VAR_2->_23 + VAR_1->u3.z * VAR_2->_33 + VAR_2->_43;

    *VAR_0 = VAR_3;
}
