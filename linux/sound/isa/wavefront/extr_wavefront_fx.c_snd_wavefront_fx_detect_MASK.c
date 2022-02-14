
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fx_status; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

int
FUNC_2 (snd_wavefront_t *VAR_0)

{






 if (FUNC_0 (VAR_0->fx_status) & 0x80) {
  FUNC_1 ("Hmm, probably a Maui or Tropez.\n");
  return -1;
 }

 return 0;
}
