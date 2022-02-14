
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int encap_mark; int flush; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct list_head*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct list_head *VAR_0,
           struct sk_buff *VAR_1)
{


 if (FUNC_0(VAR_1)->encap_mark) {
  FUNC_0(VAR_1)->flush = 1;
  return ((void*)0);
 }

 FUNC_0(VAR_1)->encap_mark = 1;

 return FUNC_1(VAR_0, VAR_1);
}
