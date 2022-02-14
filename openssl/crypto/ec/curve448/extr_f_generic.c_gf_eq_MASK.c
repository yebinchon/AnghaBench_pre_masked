
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mask_t ;
typedef TYPE_1__* gf ;
struct TYPE_8__ {int * limb; } ;


 size_t FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__* const,TYPE_1__* const) ;
 int FUNC_3 (int ) ;

mask_t FUNC_4(const gf VAR_1, const gf VAR_2)
{
    gf VAR_3;
    mask_t VAR_4 = 0;
    unsigned int VAR_5;

    FUNC_2(VAR_3, VAR_1, VAR_2);
    FUNC_1(VAR_3);

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_4 |= VAR_3->limb[FUNC_0(VAR_5)];

    return FUNC_3(VAR_4);
}
