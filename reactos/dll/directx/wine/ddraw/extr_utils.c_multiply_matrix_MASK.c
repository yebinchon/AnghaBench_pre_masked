
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int _11; int _21; int _12; int _31; int _13; int _41; int _14; int _22; int _23; int _24; int _32; int _33; int _34; int _42; int _43; int _44; } ;
typedef int D3DVALUE ;
typedef TYPE_1__ D3DMATRIX ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

void
FUNC_1(D3DMATRIX *VAR_0,
                const D3DMATRIX *VAR_1,
                const D3DMATRIX *VAR_2)
{
    D3DMATRIX VAR_3;



    VAR_3._11 = (VAR_1->_11 * VAR_2->_11) + (VAR_1->_21 * VAR_2->_12) + (VAR_1->_31 * VAR_2->_13) + (VAR_1->_41 * VAR_2->_14);
    VAR_3._21 = (VAR_1->_11 * VAR_2->_21) + (VAR_1->_21 * VAR_2->_22) + (VAR_1->_31 * VAR_2->_23) + (VAR_1->_41 * VAR_2->_24);
    VAR_3._31 = (VAR_1->_11 * VAR_2->_31) + (VAR_1->_21 * VAR_2->_32) + (VAR_1->_31 * VAR_2->_33) + (VAR_1->_41 * VAR_2->_34);
    VAR_3._41 = (VAR_1->_11 * VAR_2->_41) + (VAR_1->_21 * VAR_2->_42) + (VAR_1->_31 * VAR_2->_43) + (VAR_1->_41 * VAR_2->_44);

    VAR_3._12 = (VAR_1->_12 * VAR_2->_11) + (VAR_1->_22 * VAR_2->_12) + (VAR_1->_32 * VAR_2->_13) + (VAR_1->_42 * VAR_2->_14);
    VAR_3._22 = (VAR_1->_12 * VAR_2->_21) + (VAR_1->_22 * VAR_2->_22) + (VAR_1->_32 * VAR_2->_23) + (VAR_1->_42 * VAR_2->_24);
    VAR_3._32 = (VAR_1->_12 * VAR_2->_31) + (VAR_1->_22 * VAR_2->_32) + (VAR_1->_32 * VAR_2->_33) + (VAR_1->_42 * VAR_2->_34);
    VAR_3._42 = (VAR_1->_12 * VAR_2->_41) + (VAR_1->_22 * VAR_2->_42) + (VAR_1->_32 * VAR_2->_43) + (VAR_1->_42 * VAR_2->_44);

    VAR_3._13 = (VAR_1->_13 * VAR_2->_11) + (VAR_1->_23 * VAR_2->_12) + (VAR_1->_33 * VAR_2->_13) + (VAR_1->_43 * VAR_2->_14);
    VAR_3._23 = (VAR_1->_13 * VAR_2->_21) + (VAR_1->_23 * VAR_2->_22) + (VAR_1->_33 * VAR_2->_23) + (VAR_1->_43 * VAR_2->_24);
    VAR_3._33 = (VAR_1->_13 * VAR_2->_31) + (VAR_1->_23 * VAR_2->_32) + (VAR_1->_33 * VAR_2->_33) + (VAR_1->_43 * VAR_2->_34);
    VAR_3._43 = (VAR_1->_13 * VAR_2->_41) + (VAR_1->_23 * VAR_2->_42) + (VAR_1->_33 * VAR_2->_43) + (VAR_1->_43 * VAR_2->_44);

    VAR_3._14 = (VAR_1->_14 * VAR_2->_11) + (VAR_1->_24 * VAR_2->_12) + (VAR_1->_34 * VAR_2->_13) + (VAR_1->_44 * VAR_2->_14);
    VAR_3._24 = (VAR_1->_14 * VAR_2->_21) + (VAR_1->_24 * VAR_2->_22) + (VAR_1->_34 * VAR_2->_23) + (VAR_1->_44 * VAR_2->_24);
    VAR_3._34 = (VAR_1->_14 * VAR_2->_31) + (VAR_1->_24 * VAR_2->_32) + (VAR_1->_34 * VAR_2->_33) + (VAR_1->_44 * VAR_2->_34);
    VAR_3._44 = (VAR_1->_14 * VAR_2->_41) + (VAR_1->_24 * VAR_2->_42) + (VAR_1->_34 * VAR_2->_43) + (VAR_1->_44 * VAR_2->_44);


    FUNC_0(VAR_0, &VAR_3, 16 * sizeof(D3DVALUE));
}
