
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; } ;
struct cfpkt {int dummy; } ;


 struct sk_buff* FUNC_0 (struct cfpkt*) ;

inline u16 FUNC_1(struct cfpkt *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->len;
}
