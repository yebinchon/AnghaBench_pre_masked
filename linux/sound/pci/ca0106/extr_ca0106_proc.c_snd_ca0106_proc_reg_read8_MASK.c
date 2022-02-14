
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ca0106* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ca0106 {int emu_lock; scalar_t__ port; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_0,
           struct snd_info_buffer *VAR_1)
{
 struct snd_ca0106 *VAR_2 = VAR_0->private_data;
 unsigned int VAR_3;
 unsigned long VAR_4;
 int VAR_5;
 FUNC_1(VAR_1, "Registers:\n\n");
 for(VAR_5 = 0; VAR_5 < 0x20; VAR_5+=1) {
  FUNC_2(&VAR_2->emu_lock, VAR_4);
  VAR_3 = FUNC_0(VAR_2->port + VAR_5);
  FUNC_3(&VAR_2->emu_lock, VAR_4);
  FUNC_1(VAR_1, "Register %02X: %02X\n", VAR_5, VAR_3);
 }
}
