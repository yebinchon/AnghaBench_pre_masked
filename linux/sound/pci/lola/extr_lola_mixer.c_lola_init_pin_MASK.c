
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola_pin {int nid; int is_analog; unsigned int max_level; scalar_t__ cur_gain_step; scalar_t__ fixed_gain_list_len; scalar_t__ config_default_reg; int amp_offset; int amp_step_size; int amp_num_steps; int amp_mute; } ;
struct lola {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct lola*,int,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_6 (struct lola*,int,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct lola *VAR_7, struct lola_pin *VAR_8,
    int VAR_9, int VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;

 VAR_8->nid = VAR_10;
 VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_4, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_4(VAR_7->card->dev, "Can't read wcaps for 0x%x\n", VAR_10);
  return VAR_12;
 }
 VAR_11 &= 0x00f00fff;
 if (VAR_11 == 0x00400200)
  VAR_8->is_analog = 0;
 else if (VAR_11 == 0x0040000a && VAR_9 == VAR_0)
  VAR_8->is_analog = 1;
 else if (VAR_11 == 0x0040000c && VAR_9 == VAR_6)
  VAR_8->is_analog = 1;
 else {
  FUNC_4(VAR_7->card->dev, "Invalid wcaps 0x%x for 0x%x\n", VAR_11, VAR_10);
  return -VAR_1;
 }



 if (!VAR_8->is_analog)
  return 0;

 if (VAR_9 == VAR_6)
  VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_3, &VAR_11);
 else
  VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_2, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_4(VAR_7->card->dev, "Can't read AMP-caps for 0x%x\n", VAR_10);
  return VAR_12;
 }

 VAR_8->amp_mute = FUNC_0(VAR_11);
 VAR_8->amp_step_size = FUNC_3(VAR_11);
 VAR_8->amp_num_steps = FUNC_1(VAR_11);
 if (VAR_8->amp_num_steps) {

  VAR_8->amp_num_steps++;
  VAR_8->amp_step_size++;
 }
 VAR_8->amp_offset = FUNC_2(VAR_11);

 VAR_12 = FUNC_5(VAR_7, VAR_10, VAR_5, 0, 0, &VAR_11,
         ((void*)0));
 if (VAR_12 < 0) {
  FUNC_4(VAR_7->card->dev, "Can't get MAX_LEVEL 0x%x\n", VAR_10);
  return VAR_12;
 }
 VAR_8->max_level = VAR_11 & 0x3ff;

 VAR_8->config_default_reg = 0;
 VAR_8->fixed_gain_list_len = 0;
 VAR_8->cur_gain_step = 0;

 return 0;
}
