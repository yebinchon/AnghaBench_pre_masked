
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axg_spdifin {TYPE_1__* conf; } ;
struct TYPE_2__ {int* mode_rates; } ;



__attribute__((used)) static unsigned int FUNC_0(struct axg_spdifin *VAR_0,
        int VAR_1,
        unsigned int VAR_2)
{




 return VAR_2 / (128 * VAR_0->conf->mode_rates[VAR_1]);
}
