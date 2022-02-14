
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct rme96 {int wcreg_spdif_stream; int wcreg; int lock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rme96* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct rme96 *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_1(&VAR_5->value.iec958);
 FUNC_2(&VAR_6->lock);
 VAR_7 = VAR_8 != VAR_6->wcreg_spdif_stream;
 VAR_6->wcreg_spdif_stream = VAR_8;
 VAR_6->wcreg &= ~(VAR_3 | VAR_1 | VAR_2);
 VAR_6->wcreg |= VAR_8;
 FUNC_4(VAR_6->wcreg, VAR_6->iobase + VAR_0);
 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
