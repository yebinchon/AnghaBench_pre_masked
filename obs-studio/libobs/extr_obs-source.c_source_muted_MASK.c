
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ push_to_mute_stop_time; int push_to_mute_delay; scalar_t__ push_to_talk_stop_time; int push_to_talk_delay; scalar_t__ push_to_talk_enabled; scalar_t__ push_to_mute_enabled; scalar_t__ user_muted; int enabled; scalar_t__ user_push_to_talk_pressed; scalar_t__ user_push_to_mute_pressed; } ;
typedef TYPE_1__ obs_source_t ;



__attribute__((used)) static inline bool FUNC_0(obs_source_t *VAR_0, uint64_t VAR_1)
{
 if (VAR_0->push_to_mute_enabled && VAR_0->user_push_to_mute_pressed)
  VAR_0->push_to_mute_stop_time =
   VAR_1 + VAR_0->push_to_mute_delay * 1000000;

 if (VAR_0->push_to_talk_enabled && VAR_0->user_push_to_talk_pressed)
  VAR_0->push_to_talk_stop_time =
   VAR_1 + VAR_0->push_to_talk_delay * 1000000;

 bool VAR_2 = VAR_0->user_push_to_mute_pressed ||
       VAR_1 < VAR_0->push_to_mute_stop_time;
 bool VAR_3 = VAR_0->user_push_to_talk_pressed ||
       VAR_1 < VAR_0->push_to_talk_stop_time;

 return !VAR_0->enabled || VAR_0->user_muted ||
        (VAR_0->push_to_mute_enabled && VAR_2) ||
        (VAR_0->push_to_talk_enabled && !VAR_3);
}
