
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ cmsVEC3 ;
typedef int cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,int,int,int *,int *) ;
 int FUNC_13 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsHPROFILE FUNC_14( cmsColorSpaceSignature VAR_7)
{
    cmsContext VAR_8 = 0;
    cmsVEC3 VAR_9 = {{0,0,0}};
    cmsMAT3 VAR_10;
    cmsPipeline* VAR_11;
    cmsPipeline* VAR_12;
    cmsHPROFILE VAR_13 = FUNC_2( VAR_8);


    FUNC_11(FUNC_0(), VAR_13, 4.3);

    FUNC_8(FUNC_0(), VAR_13, VAR_3);
    FUNC_7(FUNC_0(), VAR_13, VAR_7);
    FUNC_10(FUNC_0(), VAR_13, VAR_6);

    FUNC_9(FUNC_0(), VAR_13, VAR_0);

    FUNC_13(FUNC_0(), VAR_13, VAR_5, FUNC_3(FUNC_0()));



    FUNC_1(FUNC_0(), &VAR_10);


    VAR_11 = FUNC_4( 0, 3, 3);
    FUNC_6(FUNC_0(), VAR_11, VAR_1, FUNC_12( VAR_8, 3, 3, (cmsFloat64Number*)&VAR_10, (cmsFloat64Number*)&VAR_9));
    FUNC_13(FUNC_0(), VAR_13, VAR_4, VAR_11);

    FUNC_5(FUNC_0(), VAR_11);

    VAR_12 = FUNC_4( 0, 3, 3);
    FUNC_6(FUNC_0(), VAR_12, VAR_1, FUNC_12( VAR_8, 3, 3, (cmsFloat64Number*)&VAR_10, (cmsFloat64Number*)&VAR_9));
    FUNC_13(FUNC_0(), VAR_13, VAR_2, VAR_12);

    FUNC_5(FUNC_0(), VAR_12);

    return VAR_13;
}
