
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* curve448_scalar_t ;
typedef int c448_word_t ;
typedef int c448_dword_t ;
struct TYPE_6__ {int* limb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,int ,int ,int) ;

void FUNC_1(curve448_scalar_t VAR_3, const curve448_scalar_t VAR_4,
                         const curve448_scalar_t VAR_5)
{
    c448_dword_t VAR_6 = 0;
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        VAR_6 = (VAR_6 + VAR_4->limb[VAR_7]) + VAR_5->limb[VAR_7];
        VAR_3->limb[VAR_7] = (c448_word_t)VAR_6;
        VAR_6 >>= VAR_1;
    }
    FUNC_0(VAR_3, VAR_3->limb, VAR_2, VAR_2, (c448_word_t)VAR_6);
}
