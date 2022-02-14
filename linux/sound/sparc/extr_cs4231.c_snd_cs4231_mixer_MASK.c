
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs4231 {TYPE_1__* pcm; } ;
struct snd_card {int mixername; struct snd_cs4231* private_data; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_cs4231*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_2)
{
 struct snd_cs4231 *VAR_3 = VAR_2->private_data;
 int VAR_4, VAR_5;

 if (FUNC_1(!VAR_3 || !VAR_3->pcm))
  return -VAR_0;

 FUNC_4(VAR_2->mixername, VAR_3->pcm->name);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = FUNC_2(VAR_2,
     FUNC_3(&VAR_1[VAR_5], VAR_3));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
