
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsPipeline ;
typedef double cmsFloat32Number ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int,int,int,double const*) ;

__attribute__((used)) static
void FUNC_3(cmsPipeline* VAR_1)
{
    const cmsFloat32Number VAR_2[] = {

        0, 0, 0,
        0, 0, 1.0,

        0, 1.0, 0,
        0, 1.0, 1.0,

        1.0, 0, 0,
        1.0, 0, 1.0,

        1.0, 1.0, 0,
        1.0, 1.0, 1.0
    };

    FUNC_1(FUNC_0(), VAR_1, VAR_0, FUNC_2(FUNC_0(), 2, 3, 3, VAR_2));
}
