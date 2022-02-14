
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_info_entry {struct snd_ca0106* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ca0106 {int emu_lock; scalar_t__ port; } ;
typedef int line ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,char*,int*,int*) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_0,
           struct snd_info_buffer *VAR_1)
{
 struct snd_ca0106 *VAR_2 = VAR_0->private_data;
 unsigned long VAR_3;
        char VAR_4[64];
        u32 VAR_5, VAR_6;
        while (!FUNC_1(VAR_1, VAR_4, sizeof(VAR_4))) {
                if (FUNC_4(VAR_4, "%x %x", &VAR_5, &VAR_6) != 2)
                        continue;
  if (VAR_5 < 0x40 && VAR_6 <= 0xffffffff) {
   FUNC_2(&VAR_2->emu_lock, VAR_3);
   FUNC_0(VAR_6, VAR_2->port + (VAR_5 & 0xfffffffc));
   FUNC_3(&VAR_2->emu_lock, VAR_3);
  }
        }
}
