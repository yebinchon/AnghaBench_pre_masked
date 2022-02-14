
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int freemem; scalar_t__ interrupts_are_midi; int control_port; scalar_t__ debug; int irq_ok; int data_port; scalar_t__ israw; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int *,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_9 (snd_wavefront_t *VAR_5)

{
 char VAR_6[1];

 if (FUNC_6 (VAR_5)) {
  FUNC_1 ("hw reset failed.\n");
  goto gone_bad;
 }

 if (VAR_5->israw) {
  if (FUNC_3 (VAR_5, VAR_3)) {
   goto gone_bad;
  }

  VAR_5->israw = 0;
  FUNC_7 (VAR_5, VAR_1,
        VAR_5->data_port,
        (VAR_4*VAR_0));

  if (!VAR_5->irq_ok) {
   FUNC_1 ("no post-OS interrupt.\n");
   goto gone_bad;
  }



  FUNC_7 (VAR_5, VAR_1,
        VAR_5->data_port, (10*VAR_0));

  if (!VAR_5->irq_ok) {
   FUNC_1 ("no post-OS interrupt(2).\n");
   goto gone_bad;
  }





  FUNC_0 (0x80|0x40, VAR_5->control_port);
 }






 if ((VAR_5->freemem = FUNC_4 (VAR_5)) < 0) {
  goto gone_bad;
 }

 FUNC_1 ("available DRAM %dk\n", VAR_5->freemem / 1024);

 if (FUNC_8 (VAR_5, 0xf0) ||
     FUNC_8 (VAR_5, 1) ||
     (FUNC_5 (VAR_5) < 0)) {
  VAR_5->debug = 0;
  FUNC_1 ("MPU emulation mode not set.\n");
  goto gone_bad;
 }

 VAR_6[0] = 32;

 if (FUNC_2 (VAR_5, VAR_2, ((void*)0), VAR_6)) {
  FUNC_1 ("cannot set number of voices to 32.\n");
  goto gone_bad;
 }


 return 0;

 gone_bad:


 FUNC_0 (0x0, VAR_5->control_port);
 VAR_5->interrupts_are_midi = 0;
 return 1;
}
