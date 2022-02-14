
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct echoaudio {int midi_full; int lock; TYPE_1__* card; int timer; scalar_t__ tinuse; int midi_out; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct echoaudio* VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 struct echoaudio* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_9 (struct echoaudio*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_5)
{
 struct echoaudio *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);
 unsigned long VAR_7;
 int VAR_8, VAR_9, VAR_10;
 unsigned char VAR_11[VAR_1 - 1];



 VAR_9 = VAR_8 = 0;
 FUNC_7(&VAR_6->lock, VAR_7);
 VAR_6->midi_full = 0;
 if (!FUNC_5(VAR_6->midi_out)) {
  VAR_8 = FUNC_6(VAR_6->midi_out, VAR_11,
        VAR_1 - 1);
  FUNC_0(VAR_6->card->dev, "Try to send %d bytes...\n", VAR_8);
  VAR_9 = FUNC_9(VAR_6, VAR_11, VAR_8);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6->card->dev,
    "write_midi() error %d\n", VAR_9);

   VAR_9 = 9000;
   VAR_6->midi_full = 1;
  } else if (VAR_9 > 0) {
   FUNC_0(VAR_6->card->dev, "%d bytes sent\n", VAR_9);
   FUNC_4(VAR_6->midi_out, VAR_9);
  } else {


   FUNC_0(VAR_6->card->dev, "Full\n");
   VAR_9 = 32;
   VAR_6->midi_full = 1;
  }
 }


 if (!FUNC_5(VAR_6->midi_out) && VAR_6->tinuse) {


  VAR_10 = (VAR_9 << 3) / 25 + 1;
  FUNC_3(&VAR_6->timer, VAR_3 + (VAR_10 * VAR_0 + 999) / 1000);
  FUNC_0(VAR_6->card->dev,
   "Timer armed(%d)\n", ((VAR_10 * VAR_0 + 999) / 1000));
 }
 FUNC_8(&VAR_6->lock, VAR_7);
}
