
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsToneCurve ;
typedef int cmsHPROFILE ;
struct TYPE_8__ {double member_0; double member_1; int member_2; } ;
struct TYPE_7__ {double member_0; double member_1; int member_2; } ;
struct TYPE_6__ {double member_0; double member_1; int member_2; } ;
struct TYPE_9__ {TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_4__ cmsCIExyYTRIPLE ;
typedef int cmsCIExyY ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,double) ;
 int FUNC_2 (int ,int *,TYPE_4__*,int **) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static
cmsHPROFILE FUNC_5(void)
{
    cmsToneCurve* VAR_0[3];
    cmsHPROFILE VAR_1;
    cmsCIExyY VAR_2;
    cmsCIExyYTRIPLE VAR_3 = {{0.64, 0.33, 1 },
                                 {0.21, 0.71, 1 },
                                 {0.15, 0.06, 1 }};

    VAR_0[0] = VAR_0[1] = VAR_0[2] = FUNC_1(FUNC_0(), 2.19921875);

    FUNC_4(FUNC_0(), &VAR_2, 6504);
    VAR_1 = FUNC_2(FUNC_0(), &VAR_2, &VAR_3, VAR_0);
    FUNC_3(FUNC_0(), VAR_0[0]);

    return VAR_1;
}
