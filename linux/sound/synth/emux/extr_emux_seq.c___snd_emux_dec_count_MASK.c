
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int owner; } ;
struct snd_emux {scalar_t__ used; TYPE_2__ ops; TYPE_1__* card; } ;
struct TYPE_3__ {int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_emux*) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_0)
{
 FUNC_0(VAR_0->card->module);
 VAR_0->used--;
 if (VAR_0->used <= 0)
  FUNC_1(VAR_0);
 FUNC_0(VAR_0->ops.owner);
}
