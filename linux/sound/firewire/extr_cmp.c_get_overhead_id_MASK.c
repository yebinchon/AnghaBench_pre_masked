
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bandwidth_overhead; } ;
struct cmp_connection {TYPE_1__ resources; } ;



__attribute__((used)) static int FUNC_0(struct cmp_connection *VAR_0)
{
 int VAR_1;






 for (VAR_1 = 1; VAR_1 < 16; VAR_1++) {
  if (VAR_0->resources.bandwidth_overhead < (VAR_1 << 5))
   break;
 }
 if (VAR_1 == 16)
  VAR_1 = 0;

 return VAR_1;
}
