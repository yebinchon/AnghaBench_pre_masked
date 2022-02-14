
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* curve448_scalar_t ;
typedef int c448_word_t ;
typedef int c448_dword_t ;
struct TYPE_6__ {int* limb; } ;
struct TYPE_5__ {int* limb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_0(curve448_scalar_t VAR_4, const curve448_scalar_t VAR_5)
{
    c448_word_t VAR_6 = 0 - (VAR_5->limb[0] & 1);
    c448_dword_t VAR_7 = 0;
    unsigned int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        VAR_7 = (VAR_7 + VAR_5->limb[VAR_8]) + (VAR_3->limb[VAR_8] & VAR_6);
        VAR_4->limb[VAR_8] = (c448_word_t)VAR_7;
        VAR_7 >>= VAR_1;
    }
    for (VAR_8 = 0; VAR_8 < VAR_0 - 1; VAR_8++)
        VAR_4->limb[VAR_8] = VAR_4->limb[VAR_8] >> 1 | VAR_4->limb[VAR_8 + 1] << (VAR_2 - 1);
    VAR_4->limb[VAR_8] = VAR_4->limb[VAR_8] >> 1 | (c448_word_t)(VAR_7 << (VAR_2 - 1));
}
