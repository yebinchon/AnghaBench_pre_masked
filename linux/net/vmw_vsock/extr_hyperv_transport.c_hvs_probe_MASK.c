
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hv_vmbus_device_id {int dummy; } ;
struct hv_device {struct vmbus_channel* channel; } ;


 int FUNC_0 (struct vmbus_channel*) ;

__attribute__((used)) static int FUNC_1(struct hv_device *VAR_0,
       const struct hv_vmbus_device_id *VAR_1)
{
 struct vmbus_channel *VAR_2 = VAR_0->channel;

 FUNC_0(VAR_2);






 return 0;
}
