
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_card {char* shortname; char* id; } ;
struct hdspm {scalar_t__ io_type; TYPE_1__* midi; } ;
typedef int buf ;
struct TYPE_5__ {char* name; int info_flags; TYPE_1__* private_data; } ;
struct TYPE_4__ {int id; int dataOut; int statusOut; TYPE_2__* rmidi; void* irq; void* ie; void* statusIn; void* dataIn; int lock; struct hdspm* hdspm; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct snd_card*,char*,int,int,int,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_32,
     struct hdspm *VAR_33, int VAR_34)
{
 int VAR_35;
 char VAR_36[64];

 VAR_33->midi[VAR_34].id = VAR_34;
 VAR_33->midi[VAR_34].hdspm = VAR_33;
 FUNC_3 (&VAR_33->midi[VAR_34].lock);

 if (0 == VAR_34) {
  if (VAR_24 == VAR_33->io_type) {

   VAR_33->midi[0].dataIn = VAR_11;
   VAR_33->midi[0].statusIn = VAR_18;
   VAR_33->midi[0].dataOut = VAR_15;
   VAR_33->midi[0].statusOut = VAR_22;
   VAR_33->midi[0].ie = VAR_2;
   VAR_33->midi[0].irq = VAR_6;
  } else {
   VAR_33->midi[0].dataIn = VAR_9;
   VAR_33->midi[0].statusIn = VAR_16;
   VAR_33->midi[0].dataOut = VAR_13;
   VAR_33->midi[0].statusOut = VAR_20;
   VAR_33->midi[0].ie = VAR_0;
   VAR_33->midi[0].irq = VAR_4;
  }
 } else if (1 == VAR_34) {
  VAR_33->midi[1].dataIn = VAR_10;
  VAR_33->midi[1].statusIn = VAR_17;
  VAR_33->midi[1].dataOut = VAR_14;
  VAR_33->midi[1].statusOut = VAR_21;
  VAR_33->midi[1].ie = VAR_1;
  VAR_33->midi[1].irq = VAR_5;
 } else if ((2 == VAR_34) && (VAR_23 == VAR_33->io_type)) {

  VAR_33->midi[2].dataIn = VAR_11;
  VAR_33->midi[2].statusIn = VAR_18;
  VAR_33->midi[2].dataOut = VAR_15;
  VAR_33->midi[2].statusOut = VAR_22;
  VAR_33->midi[2].ie = VAR_2;
  VAR_33->midi[2].irq = VAR_6;
 } else if (2 == VAR_34) {

  VAR_33->midi[2].dataIn = VAR_11;
  VAR_33->midi[2].statusIn = VAR_18;
  VAR_33->midi[2].dataOut = -1;
  VAR_33->midi[2].statusOut = -1;
  VAR_33->midi[2].ie = VAR_2;
  VAR_33->midi[2].irq = VAR_7;
 } else if (3 == VAR_34) {

  VAR_33->midi[3].dataIn = VAR_12;
  VAR_33->midi[3].statusIn = VAR_19;
  VAR_33->midi[3].dataOut = -1;
  VAR_33->midi[3].statusOut = -1;
  VAR_33->midi[3].ie = VAR_3;
  VAR_33->midi[3].irq = VAR_8;
 }

 if ((VAR_34 < 2) || ((2 == VAR_34) && ((VAR_23 == VAR_33->io_type) ||
     (VAR_24 == VAR_33->io_type)))) {
  if ((VAR_34 == 0) && (VAR_24 == VAR_33->io_type)) {
   FUNC_2(VAR_36, sizeof(VAR_36), "%s MIDIoverMADI",
     VAR_32->shortname);
  } else if ((VAR_34 == 2) && (VAR_23 == VAR_33->io_type)) {
   FUNC_2(VAR_36, sizeof(VAR_36), "%s MIDIoverMADI",
     VAR_32->shortname);
  } else {
   FUNC_2(VAR_36, sizeof(VAR_36), "%s MIDI %d",
     VAR_32->shortname, VAR_34+1);
  }
  VAR_35 = FUNC_0(VAR_32, VAR_36, VAR_34, 1, 1,
    &VAR_33->midi[VAR_34].rmidi);
  if (VAR_35 < 0)
   return VAR_35;

  FUNC_2(VAR_33->midi[VAR_34].rmidi->name,
    sizeof(VAR_33->midi[VAR_34].rmidi->name),
    "%s MIDI %d", VAR_32->id, VAR_34+1);
  VAR_33->midi[VAR_34].rmidi->private_data = &VAR_33->midi[VAR_34];

  FUNC_1(VAR_33->midi[VAR_34].rmidi,
    VAR_29,
    &VAR_31);
  FUNC_1(VAR_33->midi[VAR_34].rmidi,
    VAR_28,
    &VAR_30);

  VAR_33->midi[VAR_34].rmidi->info_flags |=
   VAR_27 |
   VAR_26 |
   VAR_25;
 } else {

  FUNC_2(VAR_36, sizeof(VAR_36), "%s MTC %d",
    VAR_32->shortname, VAR_34+1);
  VAR_35 = FUNC_0(VAR_32, VAR_36, VAR_34, 1, 1,
    &VAR_33->midi[VAR_34].rmidi);
  if (VAR_35 < 0)
   return VAR_35;

  FUNC_2(VAR_33->midi[VAR_34].rmidi->name,
    sizeof(VAR_33->midi[VAR_34].rmidi->name),
    "%s MTC %d", VAR_32->id, VAR_34+1);
  VAR_33->midi[VAR_34].rmidi->private_data = &VAR_33->midi[VAR_34];

  FUNC_1(VAR_33->midi[VAR_34].rmidi,
    VAR_28,
    &VAR_30);

  VAR_33->midi[VAR_34].rmidi->info_flags |= VAR_26;
 }

 return 0;
}
