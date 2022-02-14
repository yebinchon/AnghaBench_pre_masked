
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsPipeline ;
typedef int cmsInt32Number ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsPipeline* VAR_0, cmsInt32Number VAR_1)
{

    cmsInt32Number VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_1(FUNC_0(), VAR_0);
    VAR_3 = FUNC_2(FUNC_0(), VAR_0);
    VAR_4 = FUNC_3(FUNC_0(), VAR_0);

    return (VAR_2 == 3) && (VAR_3 == 3) && (VAR_4 == VAR_1);
}
