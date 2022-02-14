
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,char*) ;
 unsigned short FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_2)
{
 unsigned short VAR_3;
 if ((VAR_2->id & 0xffffff00) != 0x41445300) {
  FUNC_0(VAR_2, "ac97_quirk AD_SHARING is only for AD codecs\n");
  return -VAR_1;
 }

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_0, VAR_3 | 0x0200);
 return 0;
}
