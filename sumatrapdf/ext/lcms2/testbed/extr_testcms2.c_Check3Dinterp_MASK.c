
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ,int *) ;
 int * FUNC_5 (int ,int,int,int,int *) ;
 int FUNC_6 (int ,int *,int ,int *,int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(void)
{
    cmsPipeline* VAR_2;
    cmsStage* VAR_3;

    VAR_2 = FUNC_2(FUNC_1(), 3, 3);
    VAR_3 = FUNC_5(FUNC_1(), 9, 3, 3, ((void*)0));
    FUNC_6(FUNC_1(), VAR_3, VAR_0, ((void*)0), 0);
    FUNC_4(FUNC_1(), VAR_2, VAR_1, VAR_3);



    if (!FUNC_0(VAR_2, 0, 0, 0)) return 0;
    if (!FUNC_0(VAR_2, 0xffff, 0xffff, 0xffff)) return 0;

    if (!FUNC_0(VAR_2, 0x8080, 0x8080, 0x8080)) return 0;
    if (!FUNC_0(VAR_2, 0x0000, 0xFE00, 0x80FF)) return 0;
    if (!FUNC_0(VAR_2, 0x1111, 0x2222, 0x3333)) return 0;
    if (!FUNC_0(VAR_2, 0x0000, 0x0012, 0x0013)) return 0;
    if (!FUNC_0(VAR_2, 0x3141, 0x1415, 0x1592)) return 0;
    if (!FUNC_0(VAR_2, 0xFF00, 0xFF01, 0xFF12)) return 0;

    FUNC_3(FUNC_1(), VAR_2);

    return 1;
}
