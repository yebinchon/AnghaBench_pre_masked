
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float const int16_t ;


 int VAR_0 ;
 int FUNC_0 (int**) ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int16_t VAR_3)
{
    const int VAR_4 = 32767;
    const int VAR_5 = 1;
    const int VAR_6 = 2;
    const int VAR_7 = 3;
    const int VAR_8 = 4;

    const float VAR_9 = VAR_4 * 0.33;
    const float VAR_10 = VAR_4 * 0.06;



    if (VAR_3 < VAR_10 && VAR_3 > -VAR_10) {
        return VAR_0;
    }

    int VAR_11 = VAR_3 > 0 ? VAR_7 : VAR_6;

    if (VAR_3 >= VAR_4 - VAR_9) {
        VAR_11 = VAR_8;
    }

    if (VAR_3 <= VAR_9 - VAR_4) {
        VAR_11 = VAR_5;
    }

    for (int VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); VAR_12++) {
        if (VAR_1[VAR_12][0] == VAR_2) {
            return VAR_1[VAR_12][VAR_11];
        }
    }

    return VAR_0;
}
