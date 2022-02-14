
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int (* private_free ) (TYPE_1__*) ;} ;
struct link_slave {int list; scalar_t__ master; TYPE_1__ slave; } ;


 int FUNC_0 (struct link_slave*) ;
 int FUNC_1 (int *) ;
 struct link_slave* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct snd_kcontrol *VAR_0)
{
 struct link_slave *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->slave.private_free)
  VAR_1->slave.private_free(&VAR_1->slave);
 if (VAR_1->master)
  FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
