
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfcomm_dlc {scalar_t__ state; struct rfcomm_dev* owner; } ;
struct TYPE_2__ {int open_wait; } ;
struct rfcomm_dev {int err; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,struct rfcomm_dev*,int) ;
 int FUNC_1 (struct rfcomm_dev*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rfcomm_dlc *VAR_2, int VAR_3)
{
 struct rfcomm_dev *VAR_4 = VAR_2->owner;
 if (!VAR_4)
  return;

 FUNC_0("dlc %p dev %p err %d", VAR_2, VAR_4, VAR_3);

 VAR_4->err = VAR_3;
 if (VAR_2->state == VAR_1) {
  FUNC_1(VAR_4);

  FUNC_3(&VAR_4->port.open_wait);
 } else if (VAR_2->state == VAR_0)
  FUNC_2(&VAR_4->port, 0);
}
