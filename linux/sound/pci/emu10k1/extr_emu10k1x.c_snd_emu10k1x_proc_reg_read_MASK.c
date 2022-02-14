
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct emu10k1x* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct emu10k1x {int emu_lock; scalar_t__ port; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (struct emu10k1x*,int,int) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_0,
           struct snd_info_buffer *VAR_1)
{
 struct emu10k1x *VAR_2 = VAR_0->private_data;
 unsigned long VAR_3,VAR_4,VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(VAR_1, "Registers:\n\n");
 for(VAR_7 = 0; VAR_7 < 0x20; VAR_7+=4) {
  FUNC_3(&VAR_2->emu_lock, VAR_6);
  VAR_3 = FUNC_0(VAR_2->port + VAR_7);
  FUNC_4(&VAR_2->emu_lock, VAR_6);
  FUNC_2(VAR_1, "Register %02X: %08lX\n", VAR_7, VAR_3);
 }
 FUNC_2(VAR_1, "\nRegisters\n\n");
 for(VAR_7 = 0; VAR_7 <= 0x48; VAR_7++) {
  VAR_3 = FUNC_1(VAR_2, VAR_7, 0);
  if(VAR_7 < 0x10 || (VAR_7 >= 0x20 && VAR_7 < 0x40)) {
   VAR_4 = FUNC_1(VAR_2, VAR_7, 1);
   VAR_5 = FUNC_1(VAR_2, VAR_7, 2);
   FUNC_2(VAR_1, "%02X: %08lX %08lX %08lX\n", VAR_7, VAR_3, VAR_4, VAR_5);
  } else {
   FUNC_2(VAR_1, "%02X: %08lX\n", VAR_7, VAR_3);
  }
 }
}
