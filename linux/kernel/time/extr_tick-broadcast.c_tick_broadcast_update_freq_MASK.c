
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct clock_event_device*) ;

int FUNC_4(struct clock_event_device *VAR_2, u32 VAR_3)
{
 int VAR_4 = -VAR_0;

 if (FUNC_3(VAR_2)) {
  FUNC_1(&VAR_1);
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  FUNC_2(&VAR_1);
 }
 return VAR_4;
}
