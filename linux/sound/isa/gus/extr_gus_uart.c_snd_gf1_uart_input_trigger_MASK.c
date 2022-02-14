
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {int uart_cmd; } ;
struct snd_gus_card {int uart_cmd_lock; TYPE_2__ gf1; } ;
struct TYPE_3__ {struct snd_gus_card* private_data; } ;


 int FUNC_0 (struct snd_gus_card*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_gus_card *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_0->rmidi->private_data;

 FUNC_1(&VAR_2->uart_cmd_lock, VAR_3);
 if (VAR_1) {
  if ((VAR_2->gf1.uart_cmd & 0x80) == 0)
   FUNC_0(VAR_2, VAR_2->gf1.uart_cmd | 0x80);
 } else {
  if (VAR_2->gf1.uart_cmd & 0x80)
   FUNC_0(VAR_2, VAR_2->gf1.uart_cmd & ~0x80);
 }
 FUNC_2(&VAR_2->uart_cmd_lock, VAR_3);
}
