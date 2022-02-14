
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct igmpv3_query {int dummy; } ;
struct igmphdr {int dummy; } ;
struct TYPE_4__ {int group; } ;
struct TYPE_3__ {scalar_t__ daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = FUNC_4(VAR_2);
 unsigned int VAR_4;


 if (VAR_3 != sizeof(struct igmphdr)) {

  if (VAR_3 < sizeof(struct igmpv3_query))
   return -VAR_0;

  VAR_4 = FUNC_5(VAR_2) + sizeof(struct igmpv3_query);
  if (!FUNC_3(VAR_2, VAR_4))
   return -VAR_0;
 }




 if (!FUNC_1(VAR_2)->group &&
     FUNC_2(VAR_2)->daddr != FUNC_0(VAR_1))
  return -VAR_0;

 return 0;
}
