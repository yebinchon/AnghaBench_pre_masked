
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_event {int bufsize; int lastcmd; int lock; int type; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_midi_event*) ;
 int * FUNC_1 (int,int ) ;
 struct snd_midi_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_3, struct snd_midi_event **VAR_4)
{
 struct snd_midi_event *VAR_5;

 *VAR_4 = ((void*)0);
 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if (VAR_3 > 0) {
  VAR_5->buf = FUNC_1(VAR_3, VAR_1);
  if (VAR_5->buf == ((void*)0)) {
   FUNC_0(VAR_5);
   return -VAR_0;
  }
 }
 VAR_5->bufsize = VAR_3;
 VAR_5->lastcmd = 0xff;
 VAR_5->type = VAR_2;
 FUNC_3(&VAR_5->lock);
 *VAR_4 = VAR_5;
 return 0;
}
