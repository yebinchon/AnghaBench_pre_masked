
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sst_gain_value {int ramp_duration; void* r_gain; void* l_gain; scalar_t__ mute; } ;
struct sst_dsp_header {int dummy; } ;
struct sst_data {TYPE_1__* pdev; } ;
struct TYPE_6__ {int length; int dst; int command_id; } ;
struct sst_cmd_set_gain_dual {int gain_cell_num; TYPE_3__ header; TYPE_2__* cell_gains; } ;
struct TYPE_5__ {int gain_time_constant; int dest; void* cell_gain_right; void* cell_gain_left; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sst_data*,int ,int ,int ,int ,struct sst_cmd_set_gain_dual*,int) ;

__attribute__((used)) static int FUNC_4(struct sst_data *VAR_4, struct sst_gain_value *VAR_5,
         u16 VAR_6, u16 VAR_7, u16 VAR_8, int VAR_9)
{
 struct sst_cmd_set_gain_dual VAR_10;

 FUNC_2(&VAR_4->pdev->dev, "Enter\n");

 VAR_10.header.command_id = VAR_0;
 FUNC_0(VAR_10.header.dst);
 VAR_10.gain_cell_num = 1;

 if (VAR_9 || VAR_5->mute) {
  VAR_10.cell_gains[0].cell_gain_left = VAR_2;
  VAR_10.cell_gains[0].cell_gain_right = VAR_2;
 } else {
  VAR_10.cell_gains[0].cell_gain_left = VAR_5->l_gain;
  VAR_10.cell_gains[0].cell_gain_right = VAR_5->r_gain;
 }

 FUNC_1(2, VAR_10.cell_gains[0].dest,
        VAR_7, VAR_8);
 VAR_10.cell_gains[0].gain_time_constant = VAR_5->ramp_duration;

 VAR_10.header.length = sizeof(struct sst_cmd_set_gain_dual)
    - sizeof(struct sst_dsp_header);


 return FUNC_3(VAR_4, VAR_3,
    VAR_1, VAR_6, 0, &VAR_10,
         sizeof(VAR_10.header) + VAR_10.header.length);
}
