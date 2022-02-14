
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opened; struct hdac_bus* bus; } ;
struct hdac_ext_stream {int * link_substream; int link_locked; TYPE_1__ hstream; int decoupled; } ;
struct hdac_bus {int dev; int reg_lock; } ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdac_bus*,struct hdac_ext_stream*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hdac_ext_stream *VAR_0, int VAR_1)
{
 struct hdac_bus *VAR_2 = VAR_0->hstream.bus;

 switch (VAR_1) {
 case 130:
  FUNC_2(&VAR_0->hstream);
  break;

 case 129:
  if (VAR_0->decoupled && !VAR_0->link_locked)
   FUNC_1(VAR_2, VAR_0, 0);
  FUNC_2(&VAR_0->hstream);
  break;

 case 128:
  if (VAR_0->decoupled && !VAR_0->hstream.opened)
   FUNC_1(VAR_2, VAR_0, 0);
  FUNC_3(&VAR_2->reg_lock);
  VAR_0->link_locked = 0;
  VAR_0->link_substream = ((void*)0);
  FUNC_4(&VAR_2->reg_lock);
  break;

 default:
  FUNC_0(VAR_2->dev, "Invalid type %d\n", VAR_1);
 }

}
