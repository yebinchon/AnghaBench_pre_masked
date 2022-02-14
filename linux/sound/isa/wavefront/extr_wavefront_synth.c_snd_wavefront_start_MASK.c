
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int has_fx; int control_port; scalar_t__ israw; } ;
typedef TYPE_1__ snd_wavefront_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

int
FUNC_7 (snd_wavefront_t *VAR_1)

{
 int VAR_2;





 if (VAR_1->israw) {
  VAR_2 = 1;
 } else {

  VAR_2 = 0;
 }

 if (VAR_1->israw || VAR_0) {
  if (FUNC_3 (VAR_1)) {
   return -1;
  }
 }


 VAR_1->has_fx = (FUNC_1 (VAR_1) == 0);

 if (VAR_1->has_fx && VAR_0) {
  FUNC_2 (VAR_1);
 }

 FUNC_6 (VAR_1, VAR_2);
 FUNC_5 (VAR_1);
 FUNC_4 (VAR_1);




 FUNC_0 (0x80|0x40|0x20, VAR_1->control_port);

 return (0);
}
