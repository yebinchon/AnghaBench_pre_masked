
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_half ;


 float FUNC_0 (float,float,float*) ;
 int FUNC_1 (float) ;
 float FUNC_2 (int ) ;

npy_half FUNC_3(npy_half VAR_0, npy_half VAR_1, npy_half *VAR_2)
{
    float VAR_3 = FUNC_2(VAR_0);
    float VAR_4 = FUNC_2(VAR_1);
    float VAR_5, VAR_6;

    VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_6);
    *VAR_2 = FUNC_1(VAR_6);
    return FUNC_1(VAR_5);
}
