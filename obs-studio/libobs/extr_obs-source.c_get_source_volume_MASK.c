
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ push_to_mute_stop_time; int push_to_mute_delay; scalar_t__ push_to_talk_stop_time; int push_to_talk_delay; float volume; scalar_t__ push_to_talk_enabled; scalar_t__ push_to_mute_enabled; int muted; int enabled; scalar_t__ push_to_talk_pressed; scalar_t__ push_to_mute_pressed; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ FUNC_0 (float,float,float) ;

__attribute__((used)) static float FUNC_1(obs_source_t *VAR_0, uint64_t VAR_1)
{
 if (VAR_0->push_to_mute_enabled && VAR_0->push_to_mute_pressed)
  VAR_0->push_to_mute_stop_time =
   VAR_1 + VAR_0->push_to_mute_delay * 1000000;

 if (VAR_0->push_to_talk_enabled && VAR_0->push_to_talk_pressed)
  VAR_0->push_to_talk_stop_time =
   VAR_1 + VAR_0->push_to_talk_delay * 1000000;

 bool VAR_2 = VAR_0->push_to_mute_pressed ||
       VAR_1 < VAR_0->push_to_mute_stop_time;
 bool VAR_3 = VAR_0->push_to_talk_pressed ||
       VAR_1 < VAR_0->push_to_talk_stop_time;

 bool VAR_4 = !VAR_0->enabled || VAR_0->muted ||
       (VAR_0->push_to_mute_enabled && VAR_2) ||
       (VAR_0->push_to_talk_enabled && !VAR_3);

 if (VAR_4 || FUNC_0(VAR_0->volume, 0.0f, 0.0001f))
  return 0.0f;
 if (FUNC_0(VAR_0->volume, 1.0f, 0.0001f))
  return 1.0f;

 return VAR_0->volume;
}
