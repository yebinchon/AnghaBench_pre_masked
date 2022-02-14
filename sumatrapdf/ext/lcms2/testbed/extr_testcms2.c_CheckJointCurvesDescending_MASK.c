
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* Segments; scalar_t__* Table16; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsInt32Number ;
struct TYPE_11__ {scalar_t__ Type; } ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,double) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsToneCurve *VAR_0, *VAR_1, *VAR_2;
    cmsInt32Number VAR_3, VAR_4;

     VAR_0 = FUNC_1(FUNC_0(), 2.2);



    for (VAR_3=0; VAR_3 < 4096; VAR_3++)
        VAR_0 ->Table16[VAR_3] = 0xffff - VAR_0->Table16[VAR_3];
    VAR_0 ->Segments[0].Type = 0;

    VAR_1 = FUNC_5(FUNC_0(), VAR_0);

    VAR_2 = FUNC_4(FUNC_0(), VAR_1, VAR_1, 256);

    FUNC_2(FUNC_0(), VAR_0);
    FUNC_2(FUNC_0(), VAR_1);

    VAR_4 = FUNC_3(FUNC_0(), VAR_2);
    FUNC_2(FUNC_0(), VAR_2);

    return VAR_4;
}
