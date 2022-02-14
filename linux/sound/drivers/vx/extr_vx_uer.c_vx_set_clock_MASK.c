
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; scalar_t__ clock_mode; scalar_t__ audio_source; scalar_t__ clock_source; unsigned int freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,scalar_t__) ;
 int FUNC_2 (struct vx_core*,int) ;
 int FUNC_3 (struct vx_core*) ;
 int FUNC_4 (struct vx_core*,unsigned int) ;
 int FUNC_5 (struct vx_core*) ;

int FUNC_6(struct vx_core *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0;

 if (VAR_7->chip_status & VAR_6)
  return 0;


 FUNC_5(VAR_7);

 if (VAR_7->clock_mode == VAR_4 ||
     (VAR_7->clock_mode == VAR_3 &&
      VAR_7->audio_source == VAR_2)) {
  if (VAR_7->clock_source != VAR_1) {
   FUNC_1(VAR_7, VAR_1);
   FUNC_0(6);
   VAR_9 = 1;
  }
 } else if (VAR_7->clock_mode == VAR_5 ||
     (VAR_7->clock_mode == VAR_3 &&
      VAR_7->audio_source != VAR_2)) {
  if (VAR_7->clock_source != VAR_0) {
   FUNC_1(VAR_7, VAR_0);
   VAR_9 = 1;
  }
  if (VAR_7->freq == VAR_8)
   return 0;
  FUNC_4(VAR_7, VAR_8);
  if (VAR_9)
   FUNC_3(VAR_7);
 }
 if (VAR_7->freq == VAR_8)
  return 0;
 VAR_7->freq = VAR_8;
 FUNC_2(VAR_7, 1);
 return 0;
}
