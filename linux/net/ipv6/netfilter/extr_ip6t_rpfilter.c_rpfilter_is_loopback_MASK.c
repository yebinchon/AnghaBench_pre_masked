
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(const struct sk_buff *VAR_2, const struct net_device *VAR_3)
{
 return VAR_2->pkt_type == VAR_1 || VAR_3->flags & VAR_0;
}
