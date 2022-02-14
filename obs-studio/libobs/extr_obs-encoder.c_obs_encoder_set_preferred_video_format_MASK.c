
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {int preferred_format; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 scalar_t__ VAR_0 ;

void FUNC_0(obs_encoder_t *VAR_1,
         enum video_format VAR_2)
{
 if (!VAR_1 || VAR_1->info.type != VAR_0)
  return;

 VAR_1->preferred_format = VAR_2;
}
