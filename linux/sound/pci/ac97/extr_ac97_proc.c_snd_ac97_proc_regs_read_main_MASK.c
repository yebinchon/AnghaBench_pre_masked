
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_0, struct snd_info_buffer *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 0x80; VAR_3 += 2) {
  VAR_4 = FUNC_0(VAR_0, VAR_3);
  FUNC_1(VAR_1, "%i:%02x = %04x\n", VAR_2, VAR_3, VAR_4);
 }
}
