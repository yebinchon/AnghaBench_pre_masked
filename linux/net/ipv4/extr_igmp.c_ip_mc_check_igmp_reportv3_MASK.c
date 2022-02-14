
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct igmpv3_report {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);

 VAR_2 += sizeof(struct igmpv3_report);

 return FUNC_0(VAR_1, VAR_2) ? 0 : -VAR_0;
}
