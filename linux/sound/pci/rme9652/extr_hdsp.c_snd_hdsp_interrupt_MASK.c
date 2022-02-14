
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hdsp {int state; scalar_t__ io_type; int midi_tasklet; scalar_t__ use_midi_tasklet; TYPE_3__* midi; int control_register; TYPE_2__* pcm; scalar_t__ playback_substream; scalar_t__ capture_substream; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int pending; } ;
struct TYPE_5__ {TYPE_1__* streams; } ;
struct TYPE_4__ {int substream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_0 (struct hdsp*,int ) ;
 int FUNC_1 (struct hdsp*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_18, void *VAR_19)
{
 struct hdsp *VAR_20 = (struct hdsp *) VAR_19;
 unsigned int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 int VAR_27 = 0;

 VAR_21 = FUNC_0(VAR_20, VAR_11);

 VAR_22 = VAR_21 & VAR_4;
 VAR_23 = VAR_21 & VAR_7;
 VAR_24 = VAR_21 & VAR_8;

 if (!VAR_22 && !VAR_23 && !VAR_24)
  return VAR_13;

 FUNC_1(VAR_20, VAR_6, 0);

 VAR_25 = FUNC_0 (VAR_20, VAR_9) & 0xff;
 VAR_26 = FUNC_0 (VAR_20, VAR_10) & 0xff;

 if (!(VAR_20->state & VAR_1))
  return VAR_12;

 if (VAR_22) {
  if (VAR_20->capture_substream)
   FUNC_3(VAR_20->pcm->streams[VAR_16].substream);

  if (VAR_20->playback_substream)
   FUNC_3(VAR_20->pcm->streams[VAR_17].substream);
 }

 if (VAR_23 && VAR_25) {
  if (VAR_20->use_midi_tasklet) {

   VAR_20->control_register &= ~VAR_2;
   FUNC_1(VAR_20, VAR_5, VAR_20->control_register);
   VAR_20->midi[0].pending = 1;
   VAR_27 = 1;
  } else {
   FUNC_2 (&VAR_20->midi[0]);
  }
 }
 if (VAR_20->io_type != VAR_14 && VAR_20->io_type != VAR_15 && VAR_20->io_type != VAR_0 && VAR_24 && VAR_26) {
  if (VAR_20->use_midi_tasklet) {

   VAR_20->control_register &= ~VAR_3;
   FUNC_1(VAR_20, VAR_5, VAR_20->control_register);
   VAR_20->midi[1].pending = 1;
   VAR_27 = 1;
  } else {
   FUNC_2 (&VAR_20->midi[1]);
  }
 }
 if (VAR_20->use_midi_tasklet && VAR_27)
  FUNC_4(&VAR_20->midi_tasklet);
 return VAR_12;
}
