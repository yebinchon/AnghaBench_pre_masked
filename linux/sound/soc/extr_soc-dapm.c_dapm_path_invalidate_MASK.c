
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_path {TYPE_1__* source; TYPE_2__* sink; scalar_t__ is_supply; scalar_t__ weak; } ;
struct TYPE_4__ {scalar_t__* endpoints; } ;
struct TYPE_3__ {scalar_t__* endpoints; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_dapm_path *VAR_2)
{




 if (VAR_2->weak || VAR_2->is_supply)
  return;







 if (VAR_2->source->endpoints[VAR_0] != 0)
  FUNC_0(VAR_2->sink);
 if (VAR_2->sink->endpoints[VAR_1] != 0)
  FUNC_1(VAR_2->source);
}
