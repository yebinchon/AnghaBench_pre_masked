
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ifindex; } ;
struct ila_map {TYPE_1__ xp; } ;



__attribute__((used)) static inline int FUNC_0(struct ila_map *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->xp.ifindex)
  VAR_1 += 1 << 1;

 return VAR_1;
}
