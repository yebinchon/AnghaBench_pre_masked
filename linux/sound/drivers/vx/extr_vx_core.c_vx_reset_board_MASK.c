
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_core {int freq; int uer_bits; TYPE_1__* ops; int uer_detected; int clock_mode; int clock_source; int audio_source; int audio_source_target; } ;
struct TYPE_2__ {int (* reset_board ) (struct vx_core*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,int) ;
 scalar_t__ FUNC_2 (struct vx_core*) ;
 int FUNC_3 (struct vx_core*,int) ;
 int FUNC_4 (struct vx_core*) ;
 int FUNC_5 (struct vx_core*,int ) ;
 int FUNC_6 (struct vx_core*,int) ;
 int FUNC_7 (struct vx_core*) ;
 int FUNC_8 (struct vx_core*,int) ;

__attribute__((used)) static void FUNC_9(struct vx_core *VAR_5, int VAR_6)
{
 if (FUNC_0(!VAR_5->ops->reset_board))
  return;


 VAR_5->audio_source = VAR_2;
 if (VAR_6) {
  VAR_5->audio_source_target = VAR_5->audio_source;
  VAR_5->clock_source = VAR_0;
  VAR_5->clock_mode = VAR_3;
  VAR_5->freq = 48000;
  VAR_5->uer_detected = VAR_4;
  VAR_5->uer_bits = VAR_1;
 }

 VAR_5->ops->reset_board(VAR_5, VAR_6);

 FUNC_3(VAR_5, VAR_6);

 FUNC_6(VAR_5, VAR_5->freq);


 FUNC_4(VAR_5);

 if (FUNC_2(VAR_5)) {

  FUNC_7(VAR_5);
  FUNC_8(VAR_5, 1);
 }


 FUNC_5(VAR_5, VAR_5->uer_bits);
}
