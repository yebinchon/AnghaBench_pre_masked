
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_tap {int list; int module; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct vsock_tap *VAR_4)
{
 if (FUNC_4(VAR_4->dev->type != VAR_0))
  return -VAR_1;

 FUNC_0(VAR_4->module);

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_4->list, &VAR_2);
 FUNC_3(&VAR_3);

 return 0;
}
