
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {int hardware; TYPE_1__* pcm; struct snd_card* card; } ;
struct snd_card {int mixername; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_wss*) ;
 int * VAR_3 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct snd_wss *VAR_4)
{
 struct snd_card *VAR_5;
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_3);

 if (FUNC_1(!VAR_4 || !VAR_4->pcm))
  return -VAR_0;

 VAR_5 = VAR_4->card;

 FUNC_4(VAR_5->mixername, VAR_4->pcm->name);


 if (VAR_4->hardware & VAR_1)
  VAR_8 = 11;

 else if (VAR_4->hardware == VAR_2)
  VAR_8 = 9;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_2(VAR_5,
    FUNC_3(&VAR_3[VAR_6],
          VAR_4));
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
