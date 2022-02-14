
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_dsp_header {int dummy; } ;
struct TYPE_3__ {int length; int command_id; int dst; } ;
struct TYPE_4__ {int selection; TYPE_1__ header; int switch_state; } ;
struct sst_data {TYPE_2__ ssp_cmd; } ;
struct sst_cmd_sba_hw_set_ssp {int dummy; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 struct sst_data* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (struct sst_data*,int ,int ,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(struct snd_soc_dai *VAR_8, const char *VAR_9, bool VAR_10)
{
 struct sst_data *VAR_11 = FUNC_2(VAR_8);
 int VAR_12;

 FUNC_1(VAR_8->dev, "Enter: enable=%d port_name=%s\n", VAR_10, VAR_9);

 if (FUNC_4(VAR_9, "ssp0-port") == 0)
  VAR_12 = VAR_2;
 else if (FUNC_4(VAR_9, "ssp2-port") == 0)
  VAR_12 = VAR_1;
 else {
  FUNC_1(VAR_8->dev, "port %s is not supported\n", VAR_9);
  return -1;
 }

 FUNC_0(VAR_11->ssp_cmd.header.dst);
 VAR_11->ssp_cmd.header.command_id = VAR_0;
 VAR_11->ssp_cmd.header.length = sizeof(struct sst_cmd_sba_hw_set_ssp)
    - sizeof(struct sst_dsp_header);

 VAR_11->ssp_cmd.selection = VAR_12;
 FUNC_1(VAR_8->dev, "ssp_id: %u\n", VAR_12);

 if (VAR_10)
  VAR_11->ssp_cmd.switch_state = VAR_6;
 else
  VAR_11->ssp_cmd.switch_state = VAR_5;

 return FUNC_3(VAR_11, VAR_4, VAR_3,
    VAR_7, 0, &VAR_11->ssp_cmd,
    sizeof(VAR_11->ssp_cmd.header) + VAR_11->ssp_cmd.header.length);
}
