
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_virmidi_dev {int client; int device; int port; TYPE_3__* card; TYPE_1__* rmidi; } ;
struct TYPE_5__ {int client; int port; } ;
struct snd_seq_port_info {int capability; int type; int midi_channels; TYPE_2__ addr; struct snd_seq_port_callback* kernel; int name; } ;
struct snd_seq_port_callback {int event_input; int unuse; int use; int unsubscribe; int subscribe; struct snd_virmidi_dev* private_data; int owner; } ;
typedef int pcallbacks ;
struct TYPE_6__ {int number; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_seq_port_info*) ;
 struct snd_seq_port_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_seq_port_callback*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int,char*,int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,struct snd_seq_port_info*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_virmidi_dev *VAR_19)
{
 int VAR_20;
 struct snd_seq_port_callback VAR_21;
 struct snd_seq_port_info *VAR_22;
 int VAR_23;

 if (VAR_19->client >= 0)
  return 0;

 VAR_22 = FUNC_1(sizeof(*VAR_22), VAR_1);
 if (!VAR_22) {
  VAR_23 = -VAR_0;
  goto __error;
 }

 VAR_20 = FUNC_3(VAR_19->card, VAR_19->device,
           "%s %d-%d", VAR_19->rmidi->name,
           VAR_19->card->number,
           VAR_19->device);
 if (VAR_20 < 0) {
  VAR_23 = VAR_20;
  goto __error;
 }
 VAR_19->client = VAR_20;


 VAR_22->addr.client = VAR_20;
 FUNC_6(VAR_22->name, "VirMIDI %d-%d", VAR_19->card->number, VAR_19->device);

 VAR_22->capability |= VAR_9 | VAR_8 | VAR_6;
 VAR_22->capability |= VAR_4 | VAR_7 | VAR_5;
 VAR_22->capability |= VAR_3;
 VAR_22->type = VAR_10
  | VAR_12
  | VAR_11;
 VAR_22->midi_channels = 16;
 FUNC_2(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.owner = VAR_13;
 VAR_21.private_data = VAR_19;
 VAR_21.subscribe = VAR_15;
 VAR_21.unsubscribe = VAR_16;
 VAR_21.use = VAR_18;
 VAR_21.unuse = VAR_17;
 VAR_21.event_input = VAR_14;
 VAR_22->kernel = &VAR_21;
 VAR_23 = FUNC_5(VAR_20, VAR_2, VAR_22);
 if (VAR_23 < 0) {
  FUNC_4(VAR_20);
  VAR_19->client = -1;
  goto __error;
 }

 VAR_19->port = VAR_22->addr.port;
 VAR_23 = 0;

 __error:
 FUNC_0(VAR_22);
 return VAR_23;
}
