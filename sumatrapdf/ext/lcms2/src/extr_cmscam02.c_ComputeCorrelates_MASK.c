
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cmsFloat64Number ;
struct TYPE_7__ {double A; } ;
struct TYPE_8__ {double Nc; double Ncb; double c; double z; double FL; double n; TYPE_1__ adoptedWhite; } ;
typedef TYPE_2__ cmsCIECAM02 ;
struct TYPE_9__ {double* RGBpa; int h; int H; double J; double A; double Q; double C; double M; double s; } ;
typedef TYPE_3__ CAM02COLOR ;


 int FUNC_0 (int) ;
 double FUNC_1 (int) ;
 double FUNC_2 (double,double) ;

__attribute__((used)) static
CAM02COLOR FUNC_3(CAM02COLOR VAR_0, cmsCIECAM02* VAR_1)
{
    cmsFloat64Number VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_2 = VAR_0.RGBpa[0] - (12.0 * VAR_0.RGBpa[1] / 11.0) + (VAR_0.RGBpa[2] / 11.0);
    VAR_3 = (VAR_0.RGBpa[0] + VAR_0.RGBpa[1] - (2.0 * VAR_0.RGBpa[2])) / 9.0;

    VAR_7 = (180.0 / 3.141592654);
    if (VAR_2 == 0) {
        if (VAR_3 == 0) VAR_0.h = 0;
        else if (VAR_3 > 0) VAR_0.h = 90;
        else VAR_0.h = 270;
    }
    else if (VAR_2 > 0) {
        VAR_4 = VAR_3 / VAR_2;
        if (VAR_3 > 0) VAR_0.h = (VAR_7 * FUNC_0(VAR_4));
        else if (VAR_3 == 0) VAR_0.h = 0;
        else VAR_0.h = (VAR_7 * FUNC_0(VAR_4)) + 360;
    }
    else {
        VAR_4 = VAR_3 / VAR_2;
        VAR_0.h = (VAR_7 * FUNC_0(VAR_4)) + 180;
    }

    VAR_8 = (3.141592654 / 180.0);
    VAR_5 = ((12500.0 / 13.0) * VAR_1->Nc * VAR_1->Ncb) *
        (FUNC_1((VAR_0.h * VAR_8 + 2.0)) + 3.8);

    if (VAR_0.h < 20.14) {
        VAR_4 = ((VAR_0.h + 122.47)/1.2) + ((20.14 - VAR_0.h)/0.8);
        VAR_0.H = 300 + (100*((VAR_0.h + 122.47)/1.2)) / VAR_4;
    }
    else if (VAR_0.h < 90.0) {
        VAR_4 = ((VAR_0.h - 20.14)/0.8) + ((90.00 - VAR_0.h)/0.7);
        VAR_0.H = (100*((VAR_0.h - 20.14)/0.8)) / VAR_4;
    }
    else if (VAR_0.h < 164.25) {
        VAR_4 = ((VAR_0.h - 90.00)/0.7) + ((164.25 - VAR_0.h)/1.0);
        VAR_0.H = 100 + ((100*((VAR_0.h - 90.00)/0.7)) / VAR_4);
    }
    else if (VAR_0.h < 237.53) {
        VAR_4 = ((VAR_0.h - 164.25)/1.0) + ((237.53 - VAR_0.h)/1.2);
        VAR_0.H = 200 + ((100*((VAR_0.h - 164.25)/1.0)) / VAR_4);
    }
    else {
        VAR_4 = ((VAR_0.h - 237.53)/1.2) + ((360 - VAR_0.h + 20.14)/0.8);
        VAR_0.H = 300 + ((100*((VAR_0.h - 237.53)/1.2)) / VAR_4);
    }

    VAR_0.J = 100.0 * FUNC_2((VAR_0.A / VAR_1->adoptedWhite.A),
        (VAR_1->c * VAR_1->z));

    VAR_0.Q = (4.0 / VAR_1->c) * FUNC_2((VAR_0.J / 100.0), 0.5) *
        (VAR_1->adoptedWhite.A + 4.0) * FUNC_2(VAR_1->FL, 0.25);

    VAR_6 = (VAR_5 * FUNC_2(((VAR_2 * VAR_2) + (VAR_3 * VAR_3)), 0.5)) /
        (VAR_0.RGBpa[0] + VAR_0.RGBpa[1] +
        ((21.0 / 20.0) * VAR_0.RGBpa[2]));

    VAR_0.C = FUNC_2(VAR_6, 0.9) * FUNC_2((VAR_0.J / 100.0), 0.5) *
        FUNC_2((1.64 - FUNC_2(0.29, VAR_1->n)), 0.73);

    VAR_0.M = VAR_0.C * FUNC_2(VAR_1->FL, 0.25);
    VAR_0.s = 100.0 * FUNC_2((VAR_0.M / VAR_0.Q), 0.5);

    return VAR_0;
}
