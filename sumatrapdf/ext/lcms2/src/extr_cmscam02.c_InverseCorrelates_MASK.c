
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double cmsFloat64Number ;
struct TYPE_7__ {double A; } ;
struct TYPE_8__ {double n; double Nc; double Ncb; double c; double z; double Nbb; TYPE_1__ adoptedWhite; } ;
typedef TYPE_2__ cmsCIECAM02 ;
struct TYPE_9__ {double C; double J; double h; double A; double b; double a; double* RGBpa; } ;
typedef TYPE_3__ CAM02COLOR ;


 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (double) ;

__attribute__((used)) static
CAM02COLOR FUNC_4(CAM02COLOR VAR_0, cmsCIECAM02* VAR_1)
{

    cmsFloat64Number VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_10 = 3.141592654 / 180.0;

    VAR_2 = FUNC_2( (VAR_0.C / (FUNC_2((VAR_0.J / 100.0), 0.5) *
        (FUNC_2((1.64 - FUNC_2(0.29, VAR_1->n)), 0.73)))),
        (1.0 / 0.9) );
    VAR_3 = ((12500.0 / 13.0) * VAR_1->Nc * VAR_1->Ncb) *
        (FUNC_0((VAR_0.h * VAR_10 + 2.0)) + 3.8);

    VAR_0.A = VAR_1->adoptedWhite.A * FUNC_2(
           (VAR_0.J / 100.0),
           (1.0 / (VAR_1->c * VAR_1->z)));

    VAR_4 = VAR_3 / VAR_2;
    VAR_5 = (VAR_0.A / VAR_1->Nbb) + 0.305;
    VAR_6 = 21.0 / 20.0;

    VAR_9 = VAR_0.h * VAR_10;

    if (FUNC_1(FUNC_3(VAR_9)) >= FUNC_1(FUNC_0(VAR_9))) {
        VAR_7 = VAR_4 / FUNC_3(VAR_9);
        VAR_0.b = (VAR_5 * (2.0 + VAR_6) * (460.0 / 1403.0)) /
            (VAR_7 + (2.0 + VAR_6) * (220.0 / 1403.0) *
            (FUNC_0(VAR_9) / FUNC_3(VAR_9)) - (27.0 / 1403.0) +
            VAR_6 * (6300.0 / 1403.0));
        VAR_0.a = VAR_0.b * (FUNC_0(VAR_9) / FUNC_3(VAR_9));
    }
    else {
        VAR_8 = VAR_4 / FUNC_0(VAR_9);
        VAR_0.a = (VAR_5 * (2.0 + VAR_6) * (460.0 / 1403.0)) /
            (VAR_8 + (2.0 + VAR_6) * (220.0 / 1403.0) -
            ((27.0 / 1403.0) - VAR_6 * (6300.0 / 1403.0)) *
            (FUNC_3(VAR_9) / FUNC_0(VAR_9)));
        VAR_0.b = VAR_0.a * (FUNC_3(VAR_9) / FUNC_0(VAR_9));
    }

    VAR_0.RGBpa[0] = ((460.0 / 1403.0) * VAR_5) +
              ((451.0 / 1403.0) * VAR_0.a) +
              ((288.0 / 1403.0) * VAR_0.b);
    VAR_0.RGBpa[1] = ((460.0 / 1403.0) * VAR_5) -
              ((891.0 / 1403.0) * VAR_0.a) -
              ((261.0 / 1403.0) * VAR_0.b);
    VAR_0.RGBpa[2] = ((460.0 / 1403.0) * VAR_5) -
              ((220.0 / 1403.0) * VAR_0.a) -
              ((6300.0 / 1403.0) * VAR_0.b);

    return VAR_0;
}
