
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int irq_ok; int data_port; int control_port; int irq; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_6 (snd_wavefront_t *VAR_5)

{
 int VAR_6;
 int VAR_7[2];



 VAR_6 = FUNC_2 (VAR_5->irq);



 FUNC_0 (0x0, VAR_5->control_port);
 FUNC_0 (0x80 | 0x40 | VAR_6, VAR_5->data_port);
 FUNC_4(VAR_5, 0x80|0x40|0x10|0x1,
      VAR_5->control_port,
      (VAR_4*VAR_0)/100);





 if (!VAR_5->irq_ok) {
  FUNC_1 ("intr not received after h/w un-reset.\n");
  goto gone_bad;
 }
 FUNC_4(VAR_5, VAR_2,
      VAR_5->data_port, VAR_3*VAR_0);

 if (!VAR_5->irq_ok) {
  FUNC_1 ("post-RAM-check interrupt not received.\n");
  goto gone_bad;
 }

 if (!FUNC_5 (VAR_5, VAR_1)) {
  FUNC_1 ("no response to HW version cmd.\n");
  goto gone_bad;
 }

 if ((VAR_7[0] = FUNC_3 (VAR_5)) == -1) {
  FUNC_1 ("board not responding correctly.\n");
  goto gone_bad;
 }

 if (VAR_7[0] == 0xFF) {





  if ((VAR_7[0] = FUNC_3 (VAR_5)) == -1) {
   FUNC_1 ("on-board RAM test failed "
        "(bad error code).\n");
  } else {
   FUNC_1 ("on-board RAM test failed "
        "(error code: 0x%x).\n",
    VAR_7[0]);
  }
  goto gone_bad;
 }



 if ((VAR_7[1] = FUNC_3 (VAR_5)) == -1) {
  FUNC_1 ("incorrect h/w response.\n");
  goto gone_bad;
 }

 FUNC_1 ("hardware version %d.%d\n",
      VAR_7[0], VAR_7[1]);

 return 0;


     gone_bad:
 return (1);
}
