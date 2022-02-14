
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cmsCIExyY ;
struct TYPE_10__ {double X; double Y; double Z; } ;
typedef TYPE_1__ cmsCIEXYZ ;
struct TYPE_11__ {double L; double a; double b; } ;
typedef TYPE_2__ cmsCIELab ;
struct TYPE_12__ {double L; double C; double h; } ;
typedef TYPE_3__ cmsCIELCh ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,double,...) ;
 double FUNC_4 (int) ;

__attribute__((used)) static
void FUNC_5(cmsCIEXYZ* VAR_3)
{
       cmsCIELab VAR_4;
       cmsCIELCh VAR_5;
       cmsCIExyY VAR_6;


       FUNC_1(((void*)0), &VAR_4, VAR_3);
       FUNC_0(&VAR_5, &VAR_4);
       FUNC_2(&VAR_6, VAR_3);


       if (VAR_2) FUNC_3("XYZ=(%3.1f, %3.1f, %3.1f)\n", VAR_3->X, VAR_3->Y, VAR_3->Z);
       if (VAR_1) FUNC_3("Lab=(%3.3f, %3.3f, %3.3f)\n", VAR_4.L, VAR_4.a, VAR_4.b);
       if (VAR_0) FUNC_3("LCh=(%3.3f, %3.3f, %3.3f)\n", VAR_5.L, VAR_5.C, VAR_5.h);
       {
              double VAR_7 = (VAR_5.C * 100.0 )/ FUNC_4(VAR_5.C*VAR_5.C + VAR_5.L * VAR_5.L) ;
              FUNC_3("Sens = %f\n", VAR_7);
       }

}
