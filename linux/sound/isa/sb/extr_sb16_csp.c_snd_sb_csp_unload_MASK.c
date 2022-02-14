
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int running; scalar_t__ mode; scalar_t__ acc_rates; scalar_t__ acc_width; scalar_t__ acc_channels; scalar_t__ acc_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_sb_csp*) ;

__attribute__((used)) static int FUNC_1(struct snd_sb_csp * VAR_5)
{
 if (VAR_5->running & VAR_4)
  return -VAR_0;
 if (!(VAR_5->running & VAR_3))
  return -VAR_1;


 VAR_5->acc_format = 0;
 VAR_5->acc_channels = VAR_5->acc_width = VAR_5->acc_rates = 0;

 if (VAR_5->mode == VAR_2) {
  FUNC_0(VAR_5);
 }

 VAR_5->running = 0;
 VAR_5->mode = 0;
 return 0;
}
