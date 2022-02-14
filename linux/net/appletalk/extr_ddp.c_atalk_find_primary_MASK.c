
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atalk_addr {int dummy; } ;
struct atalk_iface {struct atalk_addr address; TYPE_1__* dev; struct atalk_iface* next; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atalk_iface* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct atalk_addr *FUNC_2(void)
{
 struct atalk_iface *VAR_4 = ((void*)0);
 struct atalk_addr *VAR_5;
 struct atalk_iface *VAR_6;





 FUNC_0(&VAR_3);
 for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next) {
  if (!VAR_4 && !(VAR_6->dev->flags & VAR_0))
   VAR_4 = VAR_6;
  if (!(VAR_6->dev->flags & (VAR_0 | VAR_1))) {
   VAR_5 = &VAR_6->address;
   goto out;
  }
 }

 if (VAR_4)
  VAR_5 = &VAR_4->address;
 else if (VAR_2)
  VAR_5 = &VAR_2->address;
 else
  VAR_5 = ((void*)0);
out:
 FUNC_1(&VAR_3);
 return VAR_5;
}
