
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ice1712 {unsigned int akm_codecs; TYPE_2__* akm; scalar_t__ cs8427; } ;
struct TYPE_3__ {int (* set_rate_val ) (TYPE_2__*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_0, int VAR_1)
{

 if (VAR_0->cs8427)
  FUNC_0(VAR_0, VAR_1);

 if (VAR_1) {
  unsigned int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->akm_codecs; VAR_2++) {
   if (VAR_0->akm[VAR_2].ops.set_rate_val)
    VAR_0->akm[VAR_2].ops.set_rate_val(&VAR_0->akm[VAR_2], 0);
  }
 }
}
