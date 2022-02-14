
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmbus_channel {int inbound; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vmbus_channel *VAR_0)
{
 u32 VAR_1 = FUNC_1(&VAR_0->inbound);

 if (VAR_1 > FUNC_0(0)) {




  return 1;
 }

 if (VAR_1 == FUNC_0(0)) {

  return 0;
 }


 return -1;
}
