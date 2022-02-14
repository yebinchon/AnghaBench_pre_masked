
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iucv_path_quiesced {size_t ippathid; int ipuser; } ;
struct iucv_path {TYPE_1__* handler; } ;
struct iucv_irq_data {int dummy; } ;
struct TYPE_2__ {int (* path_quiesced ) (struct iucv_path*,int ) ;} ;


 struct iucv_path** VAR_0 ;
 int FUNC_0 (struct iucv_path*,int ) ;

__attribute__((used)) static void FUNC_1(struct iucv_irq_data *VAR_1)
{
 struct iucv_path_quiesced *VAR_2 = (void *) VAR_1;
 struct iucv_path *VAR_3 = VAR_0[VAR_2->ippathid];

 if (VAR_3 && VAR_3->handler && VAR_3->handler->path_quiesced)
  VAR_3->handler->path_quiesced(VAR_3, VAR_2->ipuser);
}
