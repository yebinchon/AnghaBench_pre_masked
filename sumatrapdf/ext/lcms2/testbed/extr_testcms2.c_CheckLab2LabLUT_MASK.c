
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsPipeline ;
typedef int cmsInt32Number ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsPipeline* VAR_1 = FUNC_5(FUNC_2(), 3, 3);
    cmsInt32Number VAR_2;

    FUNC_7(FUNC_2(), VAR_1, VAR_0, FUNC_3(FUNC_2()));
    FUNC_7(FUNC_2(), VAR_1, VAR_0, FUNC_4(FUNC_2()));

    VAR_2 = FUNC_0(VAR_1) && FUNC_1(VAR_1, 2);

    FUNC_6(FUNC_2(), VAR_1);

    return VAR_2;
}
