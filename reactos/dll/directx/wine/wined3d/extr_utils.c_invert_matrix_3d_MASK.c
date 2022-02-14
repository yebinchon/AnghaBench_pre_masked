
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_matrix {float _11; float _22; float _33; float _21; float _32; float _13; float _31; float _12; float _23; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (float) ;

BOOL FUNC_1(struct wined3d_matrix *VAR_2, const struct wined3d_matrix *VAR_3)
{
    float VAR_4, VAR_5, VAR_6, VAR_7;
    struct wined3d_matrix VAR_8;



    VAR_4 = VAR_5 = 0.0f;
    VAR_6 = VAR_3->_11 * VAR_3->_22 * VAR_3->_33;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;

    VAR_6 = VAR_3->_21 * VAR_3->_32 * VAR_3->_13;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;
    VAR_6 = VAR_3->_31 * VAR_3->_12 * VAR_3->_23;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;

    VAR_6 = -VAR_3->_31 * VAR_3->_22 * VAR_3->_13;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;
    VAR_6 = -VAR_3->_21 * VAR_3->_12 * VAR_3->_33;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;

    VAR_6 = -VAR_3->_11 * VAR_3->_32 * VAR_3->_23;
    if (VAR_6 >= 0.0f)
        VAR_4 += VAR_6;
    else
        VAR_5 += VAR_6;

    VAR_7 = VAR_4 + VAR_5;

    if (FUNC_0(VAR_7) < 1e-25f)
        return VAR_0;

    VAR_7 = 1.0f / VAR_7;
    VAR_8._11 = (VAR_3->_22 * VAR_3->_33 - VAR_3->_32 * VAR_3->_23) * VAR_7;
    VAR_8._12 = -(VAR_3->_12 * VAR_3->_33 - VAR_3->_32 * VAR_3->_13) * VAR_7;
    VAR_8._13 = (VAR_3->_12 * VAR_3->_23 - VAR_3->_22 * VAR_3->_13) * VAR_7;
    VAR_8._21 = -(VAR_3->_21 * VAR_3->_33 - VAR_3->_31 * VAR_3->_23) * VAR_7;
    VAR_8._22 = (VAR_3->_11 * VAR_3->_33 - VAR_3->_31 * VAR_3->_13) * VAR_7;
    VAR_8._23 = -(VAR_3->_11 * VAR_3->_23 - VAR_3->_21 * VAR_3->_13) * VAR_7;
    VAR_8._31 = (VAR_3->_21 * VAR_3->_32 - VAR_3->_31 * VAR_3->_22) * VAR_7;
    VAR_8._32 = -(VAR_3->_11 * VAR_3->_32 - VAR_3->_31 * VAR_3->_12) * VAR_7;
    VAR_8._33 = (VAR_3->_11 * VAR_3->_22 - VAR_3->_21 * VAR_3->_12) * VAR_7;

    *VAR_2 = VAR_8;
    return VAR_1;
}
