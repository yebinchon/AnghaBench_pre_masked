
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_dai_config {int format; } ;
struct snd_soc_tplg_hw_config {scalar_t__ bclk_master; scalar_t__ fsync_master; scalar_t__ invert_fsync; scalar_t__ invert_bclk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct snd_soc_tplg_hw_config *VAR_10,
          struct sof_ipc_dai_config *VAR_11)
{

 if (VAR_10->bclk_master == VAR_0) {

  if (VAR_10->fsync_master == VAR_1)
   VAR_11->format |= VAR_2;
  else
   VAR_11->format |= VAR_3;
 } else {

  if (VAR_10->fsync_master == VAR_1)
   VAR_11->format |= VAR_4;
  else
   VAR_11->format |= VAR_5;
 }


 if (VAR_10->invert_bclk) {
  if (VAR_10->invert_fsync)
   VAR_11->format |= VAR_6;
  else
   VAR_11->format |= VAR_7;
 } else {
  if (VAR_10->invert_fsync)
   VAR_11->format |= VAR_8;
  else
   VAR_11->format |= VAR_9;
 }
}
