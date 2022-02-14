
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct special_params {int is1814; } ;
struct TYPE_7__ {void* context; } ;
struct TYPE_6__ {void* context; } ;
struct snd_bebob {int midi_input_ports; int midi_output_ports; int mutex; TYPE_4__* unit; TYPE_3__ tx_stream; TYPE_2__ rx_stream; void* maudio_special_quirk; TYPE_1__* card; } ;
struct TYPE_8__ {int device; } ;
struct TYPE_5__ {int card_dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_bebob*) ;
 int FUNC_2 (struct snd_bebob*,int,int,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 struct special_params* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_bebob*) ;

int
FUNC_8(struct snd_bebob *VAR_2, bool VAR_3)
{
 struct special_params *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(&VAR_2->card->card_dev,
         sizeof(struct special_params), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(&VAR_2->mutex);

 VAR_2->maudio_special_quirk = (void *)VAR_4;
 VAR_4->is1814 = VAR_3;


 VAR_2->rx_stream.context = FUNC_0(-1);
 VAR_2->tx_stream.context = FUNC_0(-1);
 VAR_5 = FUNC_2(VAR_2, 0x03, 0x00, 0x00, 0x00);
 if (VAR_5 < 0) {
  FUNC_3(&VAR_2->unit->device,
   "fail to initialize clock params: %d\n", VAR_5);
  goto end;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  goto end;

 FUNC_7(VAR_2);

 if (VAR_4->is1814) {
  VAR_2->midi_input_ports = 1;
  VAR_2->midi_output_ports = 1;
 } else {
  VAR_2->midi_input_ports = 2;
  VAR_2->midi_output_ports = 2;
 }
end:
 FUNC_6(&VAR_2->mutex);
 return VAR_5;
}
