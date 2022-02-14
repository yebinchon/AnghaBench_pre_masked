
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {int num_ports; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_port ) (struct rtl8366_smi*,int,int) ;} ;


 int FUNC_0 (struct rtl8366_smi*,int,int) ;

int FUNC_1(struct rtl8366_smi *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ports; VAR_2++) {
  VAR_3 = VAR_0->ops->enable_port(VAR_0, VAR_2, VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
