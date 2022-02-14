
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int output_flags; scalar_t__ type; } ;
struct obs_source {void* push_to_talk_key; void* push_to_mute_key; void* mute_unmute_key; TYPE_2__ info; } ;
struct TYPE_4__ {int push_to_talk; int push_to_mute; int unmute; int mute; } ;
struct TYPE_6__ {TYPE_1__ hotkeys; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 void* FUNC_0 (struct obs_source*,char*,int ,char*,int ,int ,int ,struct obs_source*,struct obs_source*) ;
 void* FUNC_1 (struct obs_source*,char*,int ,int ,struct obs_source*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct obs_source *VAR_8)
{
 if (!(VAR_8->info.output_flags & VAR_1) ||
     VAR_8->info.type != VAR_2) {
  VAR_8->mute_unmute_key = VAR_0;
  VAR_8->push_to_talk_key = VAR_0;
  return;
 }

 VAR_8->mute_unmute_key = FUNC_0(
  VAR_8, "libobs.mute", VAR_3->hotkeys.mute, "libobs.unmute",
  VAR_3->hotkeys.unmute, VAR_4,
  VAR_7, VAR_8, VAR_8);

 VAR_8->push_to_mute_key = FUNC_1(
  VAR_8, "libobs.push-to-mute", VAR_3->hotkeys.push_to_mute,
  VAR_5, VAR_8);

 VAR_8->push_to_talk_key = FUNC_1(
  VAR_8, "libobs.push-to-talk", VAR_3->hotkeys.push_to_talk,
  VAR_6, VAR_8);
}
