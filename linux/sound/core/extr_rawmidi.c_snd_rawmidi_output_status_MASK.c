
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_status {int avail; int stream; } ;
struct snd_rawmidi_runtime {int lock; int avail; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_status*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_1,
         struct snd_rawmidi_status *VAR_2)
{
 struct snd_rawmidi_runtime *VAR_3 = VAR_1->runtime;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->stream = VAR_0;
 FUNC_1(&VAR_3->lock);
 VAR_2->avail = VAR_3->avail;
 FUNC_2(&VAR_3->lock);
 return 0;
}
