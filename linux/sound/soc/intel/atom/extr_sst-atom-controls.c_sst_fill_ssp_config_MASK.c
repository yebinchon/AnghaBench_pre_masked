
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int start_delay; int data_polarity; int frame_sync_width; int nb_bits_per_slots; int frame_sync_polarity; void* ssp_protocol; } ;
struct sst_data {TYPE_1__ ssp_cmd; } ;
struct snd_soc_dai {int dev; } ;




 unsigned int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct sst_data* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_dai*,unsigned int) ;
 int FUNC_3 (struct snd_soc_dai*,unsigned int) ;

int FUNC_4(struct snd_soc_dai *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 struct sst_data *VAR_9 = FUNC_1(VAR_5);

 VAR_7 = VAR_6 & VAR_0;

 switch (VAR_7) {
 case 130:
  VAR_9->ssp_cmd.ssp_protocol = VAR_2;
  VAR_9->ssp_cmd.mode = FUNC_3(VAR_5, VAR_6) | (VAR_3 << 1);
  VAR_9->ssp_cmd.start_delay = 0;
  VAR_9->ssp_cmd.data_polarity = 1;
  VAR_9->ssp_cmd.frame_sync_width = 1;
  break;

 case 131:
  VAR_9->ssp_cmd.ssp_protocol = VAR_2;
  VAR_9->ssp_cmd.mode = FUNC_3(VAR_5, VAR_6) | (VAR_3 << 1);
  VAR_9->ssp_cmd.start_delay = 1;
  VAR_9->ssp_cmd.data_polarity = 1;
  VAR_9->ssp_cmd.frame_sync_width = 1;
  break;

 case 129:
  VAR_9->ssp_cmd.ssp_protocol = VAR_1;
  VAR_9->ssp_cmd.mode = FUNC_3(VAR_5, VAR_6) | (VAR_4 << 1);
  VAR_9->ssp_cmd.start_delay = 1;
  VAR_9->ssp_cmd.data_polarity = 0;
  VAR_9->ssp_cmd.frame_sync_width = VAR_9->ssp_cmd.nb_bits_per_slots;
  break;

 case 128:
  VAR_9->ssp_cmd.ssp_protocol = VAR_1;
  VAR_9->ssp_cmd.mode = FUNC_3(VAR_5, VAR_6) | (VAR_4 << 1);
  VAR_9->ssp_cmd.start_delay = 0;
  VAR_9->ssp_cmd.data_polarity = 0;
  VAR_9->ssp_cmd.frame_sync_width = VAR_9->ssp_cmd.nb_bits_per_slots;
  break;

 default:
  FUNC_0(VAR_5->dev, "using default ssp configs\n");
 }

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9->ssp_cmd.frame_sync_polarity = VAR_8;

 return 0;
}
