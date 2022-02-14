
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hv_device {struct vmbus_channel* channel; } ;


 int FUNC_0 (struct vmbus_channel*) ;

__attribute__((used)) static int FUNC_1(struct hv_device *VAR_0)
{
 struct vmbus_channel *VAR_1 = VAR_0->channel;

 FUNC_0(VAR_1);

 return 0;
}
