
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdspm {int midiPorts; int midi_tasklet; TYPE_1__* midi; int control_register; scalar_t__ playback_substream; scalar_t__ capture_substream; int irq_count; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int irq; int pending; int ie; int statusIn; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hdspm*,int ) ;
 int FUNC_1 (struct hdspm*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct hdspm *VAR_12 = (struct hdspm *) VAR_11;
 unsigned int VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0;


 VAR_13 = FUNC_0(VAR_12, VAR_7);

 VAR_15 = VAR_13 & VAR_0;
 VAR_16 = VAR_13 & (VAR_3 | VAR_4 |
   VAR_5 | VAR_6);
 if (!VAR_15 && !VAR_16)
  return VAR_9;

 FUNC_1(VAR_12, VAR_2, 0);
 VAR_12->irq_count++;


 if (VAR_15) {
  if (VAR_12->capture_substream)
   FUNC_2(VAR_12->capture_substream);

  if (VAR_12->playback_substream)
   FUNC_2(VAR_12->playback_substream);
 }

 if (VAR_16) {
  VAR_14 = 0;
  while (VAR_14 < VAR_12->midiPorts) {
   if ((FUNC_0(VAR_12,
    VAR_12->midi[VAR_14].statusIn) & 0xff) &&
     (VAR_13 & VAR_12->midi[VAR_14].irq)) {



    VAR_12->control_register &= ~VAR_12->midi[VAR_14].ie;
    FUNC_1(VAR_12, VAR_1,
      VAR_12->control_register);
    VAR_12->midi[VAR_14].pending = 1;
    VAR_17 = 1;
   }

   VAR_14++;
  }

  if (VAR_17)
   FUNC_3(&VAR_12->midi_tasklet);
 }

 return VAR_8;
}
