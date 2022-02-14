
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsContext ;


 double const FUNC_0 (double,double const) ;

__attribute__((used)) static double FUNC_1(cmsContext VAR_0, int VAR_1, const double VAR_2[], double VAR_3)
{
    double VAR_4 = 0;

    switch (VAR_1)
    {
    case 709:

        if (VAR_3 <= (VAR_2[3]*VAR_2[4])) VAR_4 = VAR_3 / VAR_2[3];
        else VAR_4 = FUNC_0(((VAR_3 - VAR_2[2])/VAR_2[1]), VAR_2[0]);
        break;

    case -709:

        if (VAR_3 <= VAR_2[4]) VAR_4 = VAR_3 * VAR_2[3];
        else VAR_4 = VAR_2[1] * FUNC_0(VAR_3, (1/VAR_2[0])) + VAR_2[2];
        break;
    }
    return VAR_4;
}
