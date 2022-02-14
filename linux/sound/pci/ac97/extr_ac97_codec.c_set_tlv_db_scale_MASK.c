
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int const* p; } ;
struct snd_kcontrol {TYPE_2__* vd; TYPE_1__ tlv; } ;
struct TYPE_4__ {int access; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_kcontrol *VAR_1, const unsigned int *VAR_2)
{
 VAR_1->tlv.p = VAR_2;
 if (VAR_2)
  VAR_1->vd[0].access |= VAR_0;
}
