
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ca0106* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ca0106 {int dummy; } ;
typedef int line ;


 int FUNC_0 (struct snd_ca0106*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int) ;
 int FUNC_2 (char*,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_0,
           struct snd_info_buffer *VAR_1)
{
 struct snd_ca0106 *VAR_2 = VAR_0->private_data;
        char VAR_3[64];
        unsigned int VAR_4, VAR_5 , VAR_6;
        while (!FUNC_1(VAR_1, VAR_3, sizeof(VAR_3))) {
                if (FUNC_2(VAR_3, "%x %x %x", &VAR_4, &VAR_5, &VAR_6) != 3)
                        continue;
  if (VAR_4 < 0x80 && VAR_6 <= 0xffffffff && VAR_5 <= 3)
                        FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
        }
}
