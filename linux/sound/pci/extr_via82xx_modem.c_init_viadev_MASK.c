
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx_modem {scalar_t__ port; TYPE_1__* devs; } ;
struct TYPE_2__ {unsigned int reg_offset; int direction; scalar_t__ port; } ;



__attribute__((used)) static void FUNC_0(struct via82xx_modem *VAR_0, int VAR_1, unsigned int VAR_2,
   int VAR_3)
{
 VAR_0->devs[VAR_1].reg_offset = VAR_2;
 VAR_0->devs[VAR_1].direction = VAR_3;
 VAR_0->devs[VAR_1].port = VAR_0->port + VAR_2;
}
