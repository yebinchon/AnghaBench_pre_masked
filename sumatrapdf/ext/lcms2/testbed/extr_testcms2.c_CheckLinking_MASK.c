
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *,int ,scalar_t__) ;
 int * FUNC_4 (int ,char*,char*) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int ,int *,int ,int **) ;
 scalar_t__ FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int *,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int ,int *,scalar_t__,int *) ;

__attribute__((used)) static
int FUNC_13(void)
{
    cmsHPROFILE VAR_5;
    cmsPipeline * VAR_6;
    cmsStage *VAR_7, *VAR_8;


     VAR_5 = FUNC_2(FUNC_0(), VAR_4, 150);


     FUNC_3(FUNC_0(), VAR_5, VAR_3, VAR_2);


    if (!FUNC_10(FUNC_0(), VAR_5, "lcms2link.icc")) return 0;
    FUNC_1(FUNC_0(), VAR_5);


    VAR_5 = FUNC_4(FUNC_0(), "lcms2link.icc", "r");
    if (VAR_5 == ((void*)0)) return 0;

    VAR_6 = (cmsPipeline*) FUNC_9(FUNC_0(), VAR_5, VAR_3);
    if (VAR_6 == ((void*)0))
    {
        return 0;
    }

    VAR_6 = FUNC_5(FUNC_0(), VAR_6);


    FUNC_8(FUNC_0(), VAR_6, VAR_0, &VAR_7);
    FUNC_8(FUNC_0(), VAR_6, VAR_1, &VAR_8);
    FUNC_7(FUNC_0(), VAR_6, VAR_1, VAR_8);
    FUNC_7(FUNC_0(), VAR_6, VAR_0, VAR_7);

    if (FUNC_11(FUNC_0(), VAR_5, VAR_3) != VAR_2) return 0;

    FUNC_12(FUNC_0(), VAR_5, VAR_2, VAR_6);
    FUNC_6(FUNC_0(), VAR_6);

    if (!FUNC_10(FUNC_0(), VAR_5, "lcms2link2.icc")) return 0;
    FUNC_1(FUNC_0(), VAR_5);


    return 1;

}
