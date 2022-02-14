
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lapb_cb {int dev; TYPE_1__* callbacks; } ;
struct TYPE_2__ {int (* disconnect_confirmation ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

void FUNC_1(struct lapb_cb *VAR_0, int VAR_1)
{
 if (VAR_0->callbacks->disconnect_confirmation)
  VAR_0->callbacks->disconnect_confirmation(VAR_0->dev, VAR_1);
}
