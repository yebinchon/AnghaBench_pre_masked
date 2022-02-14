
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float _11; float _22; float _33; float _41; float _42; float _44; scalar_t__ _43; } ;
typedef TYPE_1__ D3DMATRIX ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(D3DMATRIX *VAR_0, float VAR_1, float VAR_2,
                             float VAR_3, float VAR_4)
{
    FUNC_0(VAR_0);
    VAR_0->_11 = 2.0f / (VAR_2 - VAR_1);
    VAR_0->_22 = 2.0f / (VAR_4 - VAR_3);
    VAR_0->_33 = 1.0f;
    VAR_0->_41 = -(VAR_2 + VAR_1) / (VAR_2 - VAR_1);
    VAR_0->_42 = -(VAR_4 + VAR_3) / (VAR_4 - VAR_3);
    VAR_0->_43 = 0;
    VAR_0->_44 = 1.0f;
}
