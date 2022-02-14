
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int da; int dst_name; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;



__attribute__((used)) static inline bool FUNC_0(const struct j1939_sk_buff_cb *VAR_0)
{
 return (!VAR_0->addr.dst_name && (VAR_0->addr.da == 0xff));
}
