
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {scalar_t__ targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 FUNC_0("arp_tables: error: '%s'\n",
       (const char *)VAR_2->targinfo);

 return VAR_0;
}
