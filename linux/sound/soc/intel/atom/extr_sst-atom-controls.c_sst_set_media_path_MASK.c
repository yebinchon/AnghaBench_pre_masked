
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_ids {int task_id; int location_id; } ;
struct sst_dsp_header {int dummy; } ;
struct sst_data {int dummy; } ;
struct TYPE_2__ {int length; int command_id; int dst; } ;
struct sst_cmd_set_media_path {TYPE_1__ header; int switch_state; } ;
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
 int FUNC_2 (int ,char*,int ,...) ;
 struct sst_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (struct sst_data*,int ,int ,int ,int ,struct sst_cmd_set_media_path*,int) ;
 int FUNC_6 (struct snd_soc_dapm_widget*,struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_6,
         struct snd_kcontrol *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct sst_cmd_set_media_path VAR_10;
 struct snd_soc_component *VAR_11 = FUNC_4(VAR_6->dapm);
 struct sst_data *VAR_12 = FUNC_3(VAR_11);
 struct sst_ids *VAR_13 = VAR_6->priv;

 FUNC_2(VAR_11->dev, "widget=%s\n", VAR_6->name);
 FUNC_2(VAR_11->dev, "task=%u, location=%#x\n",
    VAR_13->task_id, VAR_13->location_id);

 if (FUNC_0(VAR_8))
  VAR_10.switch_state = VAR_5;
 else
  VAR_10.switch_state = VAR_4;

 FUNC_1(2, VAR_10.header.dst,
        VAR_13->location_id, VAR_1);


 VAR_10.header.command_id = VAR_0;
 VAR_10.header.length = sizeof(struct sst_cmd_set_media_path)
    - sizeof(struct sst_dsp_header);

 VAR_9 = FUNC_5(VAR_12, VAR_3, VAR_2,
         VAR_13->task_id, 0, &VAR_10,
         sizeof(VAR_10.header) + VAR_10.header.length);
 if (VAR_9)
  return VAR_9;

 if (FUNC_0(VAR_8))
  VAR_9 = FUNC_6(VAR_6, VAR_7);
 return VAR_9;
}
