
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_1__ node; } ;
struct TYPE_6__ {TYPE_2__ cpu; } ;
struct k_itimer {scalar_t__ it_interval; long long it_overrun; TYPE_3__ it; } ;



__attribute__((used)) static u64 FUNC_0(struct k_itimer *VAR_0, u64 VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4 = VAR_0->it.cpu.node.expires;
 int VAR_5;

 if (!VAR_0->it_interval)
  return VAR_4;

 if (VAR_1 < VAR_4)
  return VAR_4;

 VAR_3 = VAR_0->it_interval;
 VAR_2 = VAR_1 + VAR_3 - VAR_4;


 for (VAR_5 = 0; VAR_3 < VAR_2 - VAR_3; VAR_5++)
  VAR_3 = VAR_3 << 1;

 for (; VAR_5 >= 0; VAR_3 >>= 1, VAR_5--) {
  if (VAR_2 < VAR_3)
   continue;

  VAR_0->it.cpu.node.expires += VAR_3;
  VAR_0->it_overrun += 1LL << VAR_5;
  VAR_2 -= VAR_3;
 }
 return VAR_0->it.cpu.node.expires;
}
