
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct module* owner; int * bus; int name; } ;
struct snd_seq_driver {TYPE_1__ driver; int id; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_2(struct snd_seq_driver *VAR_2, struct module *VAR_3)
{
 if (FUNC_0(!VAR_2->driver.name || !VAR_2->id))
  return -VAR_0;
 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;
 return FUNC_1(&VAR_2->driver);
}
