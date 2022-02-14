
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ca0106* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ca0106 {int dummy; } ;


 unsigned long FUNC_0 (struct snd_ca0106*,int,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
           struct snd_info_buffer *VAR_1)
{
 struct snd_ca0106 *VAR_2 = VAR_0->private_data;
 unsigned long VAR_3;
 int VAR_4,VAR_5;

 FUNC_1(VAR_1, "Registers\n");
 for(VAR_4 = 0x40; VAR_4 < 0x80; VAR_4++) {
  FUNC_1(VAR_1, "%02X: ",VAR_4);
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                  VAR_3 = FUNC_0(VAR_2, VAR_4, VAR_5);
    FUNC_1(VAR_1, "%08lX ", VAR_3);
                }
         FUNC_1(VAR_1, "\n");
 }
}
