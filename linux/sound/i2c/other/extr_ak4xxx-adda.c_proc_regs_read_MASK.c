
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_akm4xxx* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_akm4xxx {int num_chips; int total_regs; } ;


 int FUNC_0 (struct snd_akm4xxx*,int,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
  struct snd_info_buffer *VAR_1)
{
 struct snd_akm4xxx *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4, VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_chips; VAR_5++) {
  for (VAR_3 = 0; VAR_3 < VAR_2->total_regs; VAR_3++) {
   VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_3);
   FUNC_1(VAR_1, "chip %d: 0x%02x = 0x%02x\n", VAR_5,
     VAR_3, VAR_4);
  }
 }
}
