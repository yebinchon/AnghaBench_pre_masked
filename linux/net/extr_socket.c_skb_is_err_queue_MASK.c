
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct sk_buff *VAR_1)
{





 return VAR_1->pkt_type == VAR_0;
}
