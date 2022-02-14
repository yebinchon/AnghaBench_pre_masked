
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct clock_event_device*,int ) ;

int FUNC_4(struct clock_event_device *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 == -VAR_0)
  VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_3);
 return VAR_4;
}
