
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sample_reset ) (struct snd_emux*) ;} ;
struct snd_emux {TYPE_1__ ops; } ;


 int FUNC_0 (struct snd_emux*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct snd_emux *VAR_1 = VAR_0;
 VAR_1->ops.sample_reset(VAR_1);
}
