
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {scalar_t__ hardware; int open_lock; int midi_timer; int open; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_sb* private_data; } ;


 int FUNC_0 (struct snd_sb*,int ) ;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (struct snd_rawmidi_substream*,int) ;
 int FUNC_5 (struct snd_rawmidi_substream*,char*,int) ;
 int FUNC_6 (struct snd_sb*,char) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct snd_rawmidi_substream *VAR_5)
{
 unsigned long VAR_6;
 struct snd_sb *VAR_7;
 char VAR_8;
 int VAR_9 = 32;


 VAR_7 = VAR_5->rmidi->private_data;
 while (VAR_9-- > 0) {
  FUNC_7(&VAR_7->open_lock, VAR_6);
  if (FUNC_5(VAR_5, &VAR_8, 1) != 1) {
   VAR_7->open &= ~VAR_2;
   FUNC_1(&VAR_7->midi_timer);
   FUNC_8(&VAR_7->open_lock, VAR_6);
   break;
  }
  if (VAR_7->hardware >= VAR_1) {
   int VAR_10 = 8;
   while ((FUNC_2(FUNC_0(VAR_7, VAR_3)) & 0x80) != 0 && --VAR_10 > 0)
    ;
   if (VAR_10 == 0) {

    FUNC_8(&VAR_7->open_lock, VAR_6);
    break;
   }
   FUNC_3(VAR_8, FUNC_0(VAR_7, VAR_4));
  } else {
   FUNC_6(VAR_7, VAR_0);
   FUNC_6(VAR_7, VAR_8);
  }
  FUNC_4(VAR_5, 1);
  FUNC_8(&VAR_7->open_lock, VAR_6);
 }
}
