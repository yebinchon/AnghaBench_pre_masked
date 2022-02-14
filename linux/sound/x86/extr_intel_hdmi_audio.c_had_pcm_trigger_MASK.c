
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_intelhad {int need_reset; int had_spinlock; } ;


 int VAR_0 ;





 int FUNC_0 (struct snd_intelhad*) ;
 int FUNC_1 (struct snd_intelhad*,int) ;
 struct snd_intelhad* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct snd_intelhad *VAR_4;

 VAR_4 = FUNC_2(VAR_1);

 FUNC_3(&VAR_4->had_spinlock);
 switch (VAR_2) {
 case 129:
 case 131:
 case 130:

  FUNC_0(VAR_4);
  FUNC_1(VAR_4, 1);
  break;

 case 128:
 case 132:

  FUNC_1(VAR_4, 0);
  VAR_4->need_reset = 1;
  break;

 default:
  VAR_3 = -VAR_0;
 }
 FUNC_4(&VAR_4->had_spinlock);
 return VAR_3;
}
