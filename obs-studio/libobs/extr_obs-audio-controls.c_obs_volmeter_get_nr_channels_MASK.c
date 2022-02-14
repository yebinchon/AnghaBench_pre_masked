
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct obs_audio_info {int speakers; } ;
struct TYPE_7__ {TYPE_2__* source; } ;
typedef TYPE_3__ obs_volmeter_t ;
struct TYPE_5__ {int speakers; } ;
struct TYPE_6__ {TYPE_1__ sample_info; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct obs_audio_info*) ;

int FUNC_3(obs_volmeter_t *VAR_0)
{
 int VAR_1;
 int VAR_2;

 if (VAR_0->source) {
  VAR_1 = FUNC_1(
   VAR_0->source->sample_info.speakers);
 } else {
  VAR_1 = 1;
 }

 struct obs_audio_info VAR_3;
 if (FUNC_2(&VAR_3)) {
  VAR_2 = FUNC_1(VAR_3.speakers);
 } else {
  VAR_2 = 2;
 }

 return FUNC_0(VAR_1, 1, VAR_2);
}
