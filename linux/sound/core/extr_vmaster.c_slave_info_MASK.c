
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {int (* info ) (TYPE_1__*,struct snd_ctl_elem_info*) ;} ;
struct link_slave {TYPE_1__ slave; } ;


 struct link_slave* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (TYPE_1__*,struct snd_ctl_elem_info*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_info *VAR_1)
{
 struct link_slave *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->slave.info(&VAR_2->slave, VAR_1);
}
