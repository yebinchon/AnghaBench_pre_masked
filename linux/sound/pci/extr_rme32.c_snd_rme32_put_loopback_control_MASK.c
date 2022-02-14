
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rme32 {unsigned int wcreg; int lock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct rme32* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct rme32 *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->value.integer.value[0] ? 0 : VAR_2;
 FUNC_1(&VAR_5->lock);
 VAR_6 = (VAR_5->wcreg & ~VAR_2) | VAR_6;
 VAR_7 = VAR_6 != VAR_5->wcreg;
 if (VAR_4->value.integer.value[0])
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;
 VAR_5->wcreg = VAR_6;
 FUNC_3(VAR_6, VAR_5->iobase + VAR_0);
 FUNC_2(&VAR_5->lock);
 return VAR_7;
}
