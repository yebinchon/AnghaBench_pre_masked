
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_ids {int format; int location_id; } ;
struct sst_dsp_header {int dummy; } ;
struct sst_data {int dummy; } ;
struct TYPE_8__ {int length; int command_id; int dst; } ;
struct TYPE_5__ {int rate; int s_length; int format; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct TYPE_7__ {TYPE_2__ part; } ;
struct sst_cmd_sba_set_media_loop_map {TYPE_4__ header; scalar_t__ map; TYPE_3__ param; int switch_state; } ;
struct snd_soc_dapm_widget {int name; struct sst_ids* priv; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int ) ;
 struct sst_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct sst_data*,int ,int ,int ,int ,struct sst_cmd_sba_set_media_loop_map*,int) ;
 int FUNC_6 (struct snd_soc_dapm_widget*,struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_7,
   struct snd_kcontrol *VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 struct sst_cmd_sba_set_media_loop_map VAR_11;
 struct snd_soc_component *VAR_12 = FUNC_4(VAR_7->dapm);
 struct sst_data *VAR_13 = FUNC_3(VAR_12);
 struct sst_ids *VAR_14 = VAR_7->priv;

 FUNC_2(VAR_12->dev, "Enter:widget=%s\n", VAR_7->name);
 if (FUNC_0(VAR_9))
  VAR_11.switch_state = VAR_5;
 else
  VAR_11.switch_state = VAR_4;

 FUNC_1(2, VAR_11.header.dst,
        VAR_14->location_id, VAR_1);

 VAR_11.header.command_id = VAR_0;
 VAR_11.header.length = sizeof(struct sst_cmd_sba_set_media_loop_map)
     - sizeof(struct sst_dsp_header);
 VAR_11.param.part.cfg.rate = 2;

 VAR_11.param.part.cfg.format = VAR_14->format;
 VAR_11.param.part.cfg.s_length = 1;
 VAR_11.map = 0;

 VAR_10 = FUNC_5(VAR_13, VAR_3, VAR_2,
         VAR_6, 0, &VAR_11,
         sizeof(VAR_11.header) + VAR_11.header.length);
 if (VAR_10)
  return VAR_10;

 if (FUNC_0(VAR_9))
  VAR_10 = FUNC_6(VAR_7, VAR_8);
 return VAR_10;
}
