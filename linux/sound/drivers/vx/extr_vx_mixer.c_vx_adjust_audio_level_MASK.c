
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int* Cmd; } ;
struct vx_core {int chip_status; } ;
struct vx_audio_level {int level; scalar_t__ monitor_mute; scalar_t__ has_monitor_mute; scalar_t__ mute; scalar_t__ has_mute; scalar_t__ monitor_level; scalar_t__ has_monitor_level; scalar_t__ has_level; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_11, int VAR_12, int VAR_13,
     struct vx_audio_level *VAR_14)
{
 struct vx_rmh VAR_15;

 if (VAR_11->chip_status & VAR_10)
  return -VAR_4;

        FUNC_0(&VAR_15, VAR_2);
 if (VAR_13)
  VAR_15.Cmd[0] |= VAR_3;

 VAR_15.Cmd[1] = 1 << VAR_12;
 VAR_15.Cmd[2] = 0;
 if (VAR_14->has_level) {
  VAR_15.Cmd[0] |= VAR_5;
  VAR_15.Cmd[2] |= VAR_14->level;
        }
 if (VAR_14->has_monitor_level) {
  VAR_15.Cmd[0] |= VAR_6;
  VAR_15.Cmd[2] |= ((unsigned int)VAR_14->monitor_level << 10);
        }
 if (VAR_14->has_mute) {
  VAR_15.Cmd[0] |= VAR_7;
  if (VAR_14->mute)
   VAR_15.Cmd[2] |= VAR_0;
 }
 if (VAR_14->has_monitor_mute) {

  VAR_15.Cmd[0] |= VAR_8 | VAR_9;
  if (VAR_14->monitor_mute)
   VAR_15.Cmd[2] |= VAR_1;
 }

 return FUNC_1(VAR_11, &VAR_15);
}
