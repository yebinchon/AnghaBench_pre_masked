
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct TYPE_2__ {int src; scalar_t__ ports; } ;
struct flow_keys {TYPE_1__ ports; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(const struct sk_buff *VAR_0,
         const struct flow_keys *VAR_1)
{
 if (VAR_1->ports.ports)
  return FUNC_1(VAR_1->ports.src);

 return FUNC_0(VAR_0->sk);
}
