
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_matrix {int _11; int _12; int _21; int _13; int _31; int _22; int _32; int _23; int _33; float _14; float _24; float _34; int _41; int _42; int _43; float _44; } ;



__attribute__((used)) static void FUNC_0(struct d3drm_matrix *VAR_0,
        const struct d3drm_matrix *VAR_1, const struct d3drm_matrix *VAR_2)
{
    struct d3drm_matrix VAR_3;

    VAR_3._11 = VAR_1->_11 * VAR_2->_11 + VAR_1->_12 * VAR_2->_21 + VAR_1->_13 * VAR_2->_31;
    VAR_3._12 = VAR_1->_11 * VAR_2->_12 + VAR_1->_12 * VAR_2->_22 + VAR_1->_13 * VAR_2->_32;
    VAR_3._13 = VAR_1->_11 * VAR_2->_13 + VAR_1->_12 * VAR_2->_23 + VAR_1->_13 * VAR_2->_33;
    VAR_3._14 = 0.0f;

    VAR_3._21 = VAR_1->_21 * VAR_2->_11 + VAR_1->_22 * VAR_2->_21 + VAR_1->_23 * VAR_2->_31;
    VAR_3._22 = VAR_1->_21 * VAR_2->_12 + VAR_1->_22 * VAR_2->_22 + VAR_1->_23 * VAR_2->_32;
    VAR_3._23 = VAR_1->_21 * VAR_2->_13 + VAR_1->_22 * VAR_2->_23 + VAR_1->_23 * VAR_2->_33;
    VAR_3._24 = 0.0f;

    VAR_3._31 = VAR_1->_31 * VAR_2->_11 + VAR_1->_32 * VAR_2->_21 + VAR_1->_33 * VAR_2->_31;
    VAR_3._32 = VAR_1->_31 * VAR_2->_12 + VAR_1->_32 * VAR_2->_22 + VAR_1->_33 * VAR_2->_32;
    VAR_3._33 = VAR_1->_31 * VAR_2->_13 + VAR_1->_32 * VAR_2->_23 + VAR_1->_33 * VAR_2->_33;
    VAR_3._34 = 0.0f;

    VAR_3._41 = VAR_1->_41 * VAR_2->_11 + VAR_1->_42 * VAR_2->_21 + VAR_1->_43 * VAR_2->_31 + VAR_2->_41;
    VAR_3._42 = VAR_1->_41 * VAR_2->_12 + VAR_1->_42 * VAR_2->_22 + VAR_1->_43 * VAR_2->_32 + VAR_2->_42;
    VAR_3._43 = VAR_1->_41 * VAR_2->_13 + VAR_1->_42 * VAR_2->_23 + VAR_1->_43 * VAR_2->_33 + VAR_2->_43;
    VAR_3._44 = 1.0f;

    *VAR_0 = VAR_3;
}
