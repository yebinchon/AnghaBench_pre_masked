
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {TYPE_1__* ops; scalar_t__ sync_write; } ;
struct TYPE_2__ {int (* command ) (struct hdac_bus*,unsigned int) ;int (* get_response ) (struct hdac_bus*,unsigned int,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_bus*,unsigned int) ;
 int FUNC_1 (struct hdac_bus*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct hdac_bus*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct hdac_bus*,unsigned int,unsigned int) ;
 int FUNC_4 (struct hdac_bus*,unsigned int) ;

int FUNC_5(struct hdac_bus *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4 == ~0)
  return -VAR_1;

 if (VAR_5)
  *VAR_5 = -1;
 else if (VAR_2->sync_write)
  VAR_5 = &VAR_6;
 for (;;) {
  FUNC_4(VAR_2, VAR_4);
  VAR_7 = VAR_2->ops->command(VAR_2, VAR_4);
  if (VAR_7 != -VAR_0)
   break;

  VAR_7 = VAR_2->ops->get_response(VAR_2, VAR_3, &VAR_6);
  if (VAR_7)
   break;
 }
 if (!VAR_7 && VAR_5) {
  VAR_7 = VAR_2->ops->get_response(VAR_2, VAR_3, VAR_5);
  FUNC_3(VAR_2, VAR_3, *VAR_5);
 }
 return VAR_7;
}
