
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ID8; } ;
typedef TYPE_1__ cmsProfileID ;
typedef scalar_t__ cmsHPROFILE ;
typedef int _cmsICCPROFILE ;
typedef int ProfileID2 ;
typedef int ProfileID1 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static
int FUNC_6(void)
{
    _cmsICCPROFILE* VAR_0;
    cmsHPROFILE VAR_1 = FUNC_4(FUNC_0(), "sRGBlcms2.icc", "r");
    cmsProfileID VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_0 =(_cmsICCPROFILE*) VAR_1;
    if (FUNC_3(FUNC_0(), VAR_1)) FUNC_2(FUNC_0(), VAR_1, VAR_2);
    if (FUNC_3(FUNC_0(), VAR_1)) FUNC_2(FUNC_0(), VAR_1,VAR_3);

    FUNC_1(FUNC_0(), VAR_1);


    VAR_1 = FUNC_4(FUNC_0(), "sRGBlcms2.icc", "r");

    VAR_0 =(_cmsICCPROFILE*) VAR_1;
    if (FUNC_3(FUNC_0(), VAR_1)) FUNC_2(FUNC_0(), VAR_1, VAR_4);
    if (FUNC_3(FUNC_0(), VAR_1)) FUNC_2(FUNC_0(), VAR_1,VAR_5);

    FUNC_1(FUNC_0(), VAR_1);

    return ((FUNC_5(VAR_2, VAR_4, sizeof(VAR_2)) == 0) &&
            (FUNC_5(VAR_3, VAR_5, sizeof(VAR_3)) == 0));
}
