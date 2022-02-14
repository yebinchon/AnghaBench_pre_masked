
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct snd_pmac {scalar_t__ model; TYPE_2__* drc_sw_ctl; int card; TYPE_1__* hp_detect_ctl; int lineout_sw_ctl; int master_sw_ctl; int speaker_sw_ctl; struct pmac_tumbler* mixer_data; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct pmac_tumbler {int drc_enable; scalar_t__ auto_mute_notify; TYPE_3__ line_mute; TYPE_3__ hp_mute; scalar_t__ anded_reset; TYPE_3__ amp_mute; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pmac*,TYPE_3__*,int,scalar_t__,int ) ;
 struct snd_pmac* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pmac_tumbler*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct snd_pmac*) ;
 int FUNC_7 (struct snd_pmac*) ;
 int FUNC_8 (struct pmac_tumbler*) ;
 int FUNC_9 (struct pmac_tumbler*) ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_4)
{
 struct snd_pmac *VAR_5 = VAR_3;
 struct pmac_tumbler *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_5)
  return;

 VAR_6 = VAR_5->mixer_data;
 if (FUNC_4(!VAR_6))
  return;

 VAR_7 = FUNC_6(VAR_5);
 VAR_8 = FUNC_7(VAR_5);

 FUNC_0("headphone: %d, lineout: %d\n", VAR_7, VAR_8);

 if (VAR_7 || VAR_8) {

  if (VAR_7)
   FUNC_1(VAR_5, &VAR_6->hp_mute, 0, VAR_6->auto_mute_notify,
       VAR_5->master_sw_ctl);
  if (VAR_8 && VAR_6->line_mute.addr != 0)
   FUNC_1(VAR_5, &VAR_6->line_mute, 0, VAR_6->auto_mute_notify,
       VAR_5->lineout_sw_ctl);
  if (VAR_6->anded_reset)
   FUNC_2(10);
  FUNC_1(VAR_5, &VAR_6->amp_mute, !VAR_0, VAR_6->auto_mute_notify,
      VAR_5->speaker_sw_ctl);
 } else {

  FUNC_1(VAR_5, &VAR_6->amp_mute, 0, VAR_6->auto_mute_notify,
      VAR_5->speaker_sw_ctl);
  if (VAR_6->anded_reset)
   FUNC_2(10);
  FUNC_1(VAR_5, &VAR_6->hp_mute, 1, VAR_6->auto_mute_notify,
      VAR_5->master_sw_ctl);
  if (VAR_6->line_mute.addr != 0)
   FUNC_1(VAR_5, &VAR_6->line_mute, 1, VAR_6->auto_mute_notify,
       VAR_5->lineout_sw_ctl);
 }
 if (VAR_6->auto_mute_notify)
  FUNC_5(VAR_5->card, VAR_2,
           &VAR_5->hp_detect_ctl->id);
 FUNC_9(VAR_6);
}
