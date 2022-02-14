
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mixer_lock; struct snd_card* card; } ;
struct snd_card {int mixername; } ;
struct sbmix_elem {int dummy; } ;


 int FUNC_0 (struct snd_card*,char*) ;
 int FUNC_1 (struct snd_sb*,struct sbmix_elem*) ;
 int FUNC_2 (struct snd_sb*,unsigned char,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_sb *VAR_0,
       struct sbmix_elem *VAR_1,
       int VAR_2,
       unsigned char VAR_3[][2],
       int VAR_4,
       char *VAR_5)
{
 unsigned long VAR_6;
 struct snd_card *VAR_7 = VAR_0->card;
 int VAR_8, VAR_9;


 FUNC_3(&VAR_0->mixer_lock, VAR_6);
 FUNC_2(VAR_0, 0x00, 0x00);
 FUNC_4(&VAR_0->mixer_lock, VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_3(&VAR_0->mixer_lock, VAR_6);
  FUNC_2(VAR_0, VAR_3[VAR_8][0], VAR_3[VAR_8][1]);
  FUNC_4(&VAR_0->mixer_lock, VAR_6);
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_1(VAR_0, &VAR_1[VAR_8]);
  if (VAR_9 < 0)
   return VAR_9;
 }
 FUNC_0(VAR_7, VAR_5);
 FUNC_5(VAR_7->mixername, VAR_5);
 return 0;
}
