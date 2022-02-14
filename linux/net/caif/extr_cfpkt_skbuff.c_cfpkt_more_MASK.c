
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct cfpkt {int dummy; } ;


 struct sk_buff* FUNC_0 (struct cfpkt*) ;

inline bool FUNC_1(struct cfpkt *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->len > 0;
}
