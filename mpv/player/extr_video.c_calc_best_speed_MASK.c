
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(double VAR_1, double VAR_2)
{
    double VAR_3 = VAR_2 / VAR_1;
    double VAR_4 = -1;
    double VAR_5 = VAR_0;
    for (int VAR_6 = 1; VAR_6 <= 5; VAR_6++) {
        double VAR_7 = VAR_3 * VAR_6 / FUNC_1(VAR_3 * VAR_6);
        double VAR_8 = FUNC_0(VAR_7 - 1);
        if (VAR_8 < VAR_5) {
            VAR_4 = VAR_7;
            VAR_5 = VAR_8;
        }
    }
    return VAR_4;
}
