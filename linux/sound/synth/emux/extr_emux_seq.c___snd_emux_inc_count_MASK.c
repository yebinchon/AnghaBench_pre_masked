
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int owner; } ;
struct snd_emux {int used; TYPE_2__ ops; TYPE_1__* card; } ;
struct TYPE_3__ {int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct snd_emux *VAR_0)
{
 VAR_0->used++;
 if (!FUNC_1(VAR_0->ops.owner))
  goto __error;
 if (!FUNC_1(VAR_0->card->module)) {
  FUNC_0(VAR_0->ops.owner);
       __error:
  VAR_0->used--;
  return 0;
 }
 return 1;
}
