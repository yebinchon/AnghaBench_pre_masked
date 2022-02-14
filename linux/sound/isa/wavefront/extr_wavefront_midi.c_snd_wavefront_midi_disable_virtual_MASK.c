
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int virtual; scalar_t__ isvirtual; } ;
struct TYPE_6__ {TYPE_1__ midi; } ;
struct TYPE_7__ {TYPE_2__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2 (snd_wavefront_card_t *VAR_0)

{
 unsigned long VAR_1;

 FUNC_0 (&VAR_0->wavefront.midi.virtual, VAR_1);


 VAR_0->wavefront.midi.isvirtual = 0;
 FUNC_1 (&VAR_0->wavefront.midi.virtual, VAR_1);
}
