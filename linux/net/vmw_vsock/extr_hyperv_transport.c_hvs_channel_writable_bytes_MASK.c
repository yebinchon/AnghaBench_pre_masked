
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmbus_channel {int outbound; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (size_t,int) ;

__attribute__((used)) static size_t FUNC_3(struct vmbus_channel *VAR_0)
{
 u32 VAR_1 = FUNC_1(&VAR_0->outbound);
 size_t VAR_2;





 if (VAR_1 <= FUNC_0(1) + FUNC_0(0))
  return 0;

 VAR_2 = VAR_1 - FUNC_0(1) - FUNC_0(0);

 return FUNC_2(VAR_2, 8);
}
