
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_msnd {int last_recbank; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct snd_msnd*,int ) ;
 struct snd_msnd* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6,
        int VAR_7)
{
 struct snd_msnd *VAR_8 = FUNC_3(VAR_6);

 if (VAR_7 == VAR_4) {
  VAR_8->last_recbank = -1;
  FUNC_1(VAR_1, &VAR_8->flags);
  if (FUNC_2(VAR_8, VAR_2) == 0)
   return 0;

  FUNC_0(VAR_1, &VAR_8->flags);
 } else if (VAR_7 == VAR_5) {
  FUNC_0(VAR_1, &VAR_8->flags);
  FUNC_2(VAR_8, VAR_3);
  return 0;
 }
 return -VAR_0;
}
