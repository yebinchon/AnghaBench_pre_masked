
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; } ;
struct delayed_work {TYPE_2__ work; } ;
struct TYPE_3__ {struct delayed_work work; } ;
struct skl_dev {scalar_t__ supend_active; TYPE_1__ d0i3; } ;


 int FUNC_0 (struct delayed_work*) ;
 int FUNC_1 (struct delayed_work*) ;

int FUNC_2(struct skl_dev *VAR_0)
{
 struct delayed_work *VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = &VAR_0->d0i3.work;

 if (VAR_1->work.func) {
  if (VAR_0->supend_active)
   FUNC_1(VAR_1);
  else
   FUNC_0(VAR_1);
 }

 return 0;
}
