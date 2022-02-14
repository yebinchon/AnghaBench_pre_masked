
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wFormatTag; } ;
struct TYPE_5__ {TYPE_2__ Format; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef TYPE_2__ WAVEFORMATEX ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(WAVEFORMATEXTENSIBLE* VAR_1, WAVEFORMATEX* VAR_2)
{
    if (VAR_2->wFormatTag == VAR_0) {
        *VAR_1 = *(WAVEFORMATEXTENSIBLE *)VAR_2;
    } else {
        VAR_1->Format = *VAR_2;
    }
}
