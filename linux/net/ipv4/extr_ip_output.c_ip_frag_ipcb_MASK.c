
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ip_frag_state {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct sk_buff *VAR_1,
    bool VAR_2, struct ip_frag_state *VAR_3)
{

 FUNC_0(VAR_1)->flags = FUNC_0(VAR_0)->flags;







 if (VAR_2)
  FUNC_1(VAR_0);
}
