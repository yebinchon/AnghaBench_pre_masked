
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca_midi {scalar_t__ ack; int dev_id; int (* get_dev_id_port ) (int ) ;int input_lock; } ;


 scalar_t__ FUNC_0 (struct snd_ca_midi*) ;
 scalar_t__ FUNC_1 (struct snd_ca_midi*) ;
 int FUNC_2 (struct snd_ca_midi*) ;
 int FUNC_3 (struct snd_ca_midi*,unsigned char) ;
 int FUNC_4 (struct snd_ca_midi*,int) ;
 int FUNC_5 (char*,unsigned char,int ,int ,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct snd_ca_midi *VAR_0, unsigned char VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4, VAR_5;

 FUNC_6(&VAR_0->input_lock, VAR_3);
 FUNC_4(VAR_0, 0x00);


 FUNC_3(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_5 = 0;
  VAR_4 = 10000;
  while (!VAR_5 && VAR_4-- > 0) {
   if (FUNC_0(VAR_0)) {
    if (FUNC_1(VAR_0) == VAR_0->ack)
     VAR_5 = 1;
   }
  }
  if (!VAR_5 && FUNC_1(VAR_0) == VAR_0->ack)
   VAR_5 = 1;
 } else {
  VAR_5 = 1;
 }
 FUNC_7(&VAR_0->input_lock, VAR_3);
 if (!VAR_5)
  FUNC_5("ca_midi_cmd: 0x%x failed at 0x%x (status = 0x%x, data = 0x%x)!!!\n",
      VAR_1,
      VAR_0->get_dev_id_port(VAR_0->dev_id),
      FUNC_2(VAR_0),
      FUNC_1(VAR_0));
}
