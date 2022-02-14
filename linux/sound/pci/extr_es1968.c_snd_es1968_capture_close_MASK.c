
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct esschan {int * apu; int mixbuf; int list; } ;
struct es1968 {int substream_lock; } ;
struct TYPE_2__ {struct esschan* private_data; } ;


 int FUNC_0 (struct esschan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct es1968*,int ) ;
 int FUNC_3 (struct es1968*,int ) ;
 struct es1968* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct es1968 *VAR_1 = FUNC_4(VAR_0);
 struct esschan *VAR_2;

 if (VAR_0->runtime->private_data == ((void*)0))
  return 0;
 VAR_2 = VAR_0->runtime->private_data;
 FUNC_5(&VAR_1->substream_lock);
 FUNC_1(&VAR_2->list);
 FUNC_6(&VAR_1->substream_lock);
 FUNC_3(VAR_1, VAR_2->mixbuf);
 FUNC_2(VAR_1, VAR_2->apu[0]);
 FUNC_2(VAR_1, VAR_2->apu[2]);
 FUNC_0(VAR_2);

 return 0;
}
