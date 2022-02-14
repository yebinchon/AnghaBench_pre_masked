
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int matrix ;


 int FUNC_0 (float*,float**,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, int VAR_1, float *VAR_2)
{
    const float VAR_3 = 0.5f;
    const float VAR_4 = (float)VAR_0 + 0.5f;
    const float VAR_5 = 0.5f;
    const float VAR_6 = (float)VAR_1 + 0.5f;
    float VAR_7[4][4] = {
        { 2.0f / (VAR_4 - VAR_3), 0.0f, 0.0f, 0.0f },
        { 0.0f, 2.0f / (VAR_5 - VAR_6), 0.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 0.0f },
        { (VAR_4 + VAR_3) / (VAR_3 - VAR_4), (VAR_5 + VAR_6) / (VAR_6 - VAR_5), 0.0f, 1.0f },
    };
    FUNC_0(VAR_2, VAR_7, sizeof(VAR_7));
}
