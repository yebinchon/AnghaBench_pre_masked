
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;



__attribute__((used)) static int
FUNC_0(const struct sockaddr_in *VAR_0,
        const struct sockaddr_in *VAR_1,
        const struct sockaddr_in *VAR_2)
{
 if (((VAR_0->sin_addr.s_addr ^ VAR_1->sin_addr.s_addr) &
   VAR_2->sin_addr.s_addr) == 0)
  return 1;
 else
  return 0;
}
