
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fx_status; } ;
typedef TYPE_1__ snd_wavefront_t ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (snd_wavefront_t *VAR_0)

{
 int VAR_1;
 unsigned int VAR_2 = 0x80;

 for (VAR_1 = 0; VAR_1 < 1000; VAR_1++) {
  VAR_2 = FUNC_0 (VAR_0->fx_status);
  if ((VAR_2 & 0x80) == 0) {
   break;
  }
 }

 if (VAR_2 & 0x80) {
  FUNC_1 ("FX device never idle.\n");
  return 0;
 }

 return (1);
}
