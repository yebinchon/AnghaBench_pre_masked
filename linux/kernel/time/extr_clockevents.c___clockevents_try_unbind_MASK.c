
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int list; } ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int *) ;
 TYPE_1__ FUNC_2 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_3, int VAR_4)
{

 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_3->list);
  return 0;
 }

 return VAR_3 == FUNC_2(VAR_2, VAR_4).evtdev ? -VAR_0 : -VAR_1;
}
