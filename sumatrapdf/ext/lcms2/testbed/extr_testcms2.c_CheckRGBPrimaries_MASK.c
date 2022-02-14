
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsHPROFILE ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_5__ {TYPE_3__ Blue; TYPE_3__ Green; TYPE_3__ Red; } ;
typedef TYPE_1__ cmsCIExyYTRIPLE ;
struct TYPE_6__ {int Blue; int Green; int Red; } ;
typedef TYPE_2__ cmsCIEXYZTRIPLE ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,double) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_3__*,int *) ;

__attribute__((used)) static
int FUNC_8(void)
{
    cmsHPROFILE VAR_3;
    cmsCIEXYZTRIPLE VAR_4;
    cmsCIExyYTRIPLE VAR_5;
    cmsBool VAR_6;

    FUNC_6(FUNC_0(), 0);
    VAR_3 = FUNC_5(FUNC_0());
    if (!VAR_3) return 0;

    VAR_6 = FUNC_2(VAR_3, &VAR_4,
        VAR_1);

    FUNC_4(FUNC_0(), VAR_3);
    if (!VAR_6) return 0;

    FUNC_7(FUNC_0(), &VAR_5.Red, &VAR_4.Red);
    FUNC_7(FUNC_0(), &VAR_5.Green, &VAR_4.Green);
    FUNC_7(FUNC_0(), &VAR_5.Blue, &VAR_4.Blue);




    if (!FUNC_3("xRed", VAR_5.Red.x, 0.64) ||
        !FUNC_3("yRed", VAR_5.Red.y, 0.33) ||
        !FUNC_3("xGreen", VAR_5.Green.x, 0.30) ||
        !FUNC_3("yGreen", VAR_5.Green.y, 0.60) ||
        !FUNC_3("xBlue", VAR_5.Blue.x, 0.15) ||
        !FUNC_3("yBlue", VAR_5.Blue.y, 0.06)) {
            FUNC_1("One or more primaries are wrong.");
            return VAR_0;
    }

    return VAR_2;
}
