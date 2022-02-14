
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct audio_monitor {int source_has_video; TYPE_2__* source; scalar_t__ ignore; } ;
struct TYPE_3__ {int output_flags; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,struct audio_monitor*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct audio_monitor *VAR_2)
{
 if (VAR_2->ignore)
  return;

 VAR_2->source_has_video =
  (VAR_2->source->info.output_flags & VAR_0) != 0;
 FUNC_0(VAR_2->source,
           VAR_1, VAR_2);
}
