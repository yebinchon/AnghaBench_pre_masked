
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ports; int src; int srcv6; } ;
struct packet_description {TYPE_1__ flow; } ;
typedef int __u32 ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static __attribute__ ((noinline))
__u32 FUNC_2(struct packet_description *VAR_0,
        bool VAR_1)
{
 if (VAR_1)
  return FUNC_1(FUNC_0(VAR_0->flow.srcv6, 16, 12),
        VAR_0->flow.ports, 24);
 else
  return FUNC_1(VAR_0->flow.src, VAR_0->flow.ports,
        24);
}
