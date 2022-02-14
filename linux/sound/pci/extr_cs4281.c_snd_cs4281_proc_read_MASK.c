
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct cs4281* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct cs4281 {int spurious_dtc_irq; int spurious_dhtc_irq; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct cs4281 *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_1, "Cirrus Logic CS4281\n\n");
 FUNC_0(VAR_1, "Spurious half IRQs   : %u\n", VAR_2->spurious_dhtc_irq);
 FUNC_0(VAR_1, "Spurious end IRQs    : %u\n", VAR_2->spurious_dtc_irq);
}
