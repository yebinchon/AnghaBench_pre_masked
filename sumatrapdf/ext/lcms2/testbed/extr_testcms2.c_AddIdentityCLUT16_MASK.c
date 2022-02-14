
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsPipeline ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int,int,int,int const*) ;

__attribute__((used)) static
void FUNC_3(cmsPipeline* VAR_1)
{
    const cmsUInt16Number VAR_2[] = {

        0, 0, 0,
        0, 0, 0xffff,

        0, 0xffff, 0,
        0, 0xffff, 0xffff,

        0xffff, 0, 0,
        0xffff, 0, 0xffff,

        0xffff, 0xffff, 0,
        0xffff, 0xffff, 0xffff
    };


    FUNC_1(FUNC_0(), VAR_1, VAR_0, FUNC_2(FUNC_0(), 2, 3, 3, VAR_2));
}
