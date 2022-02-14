
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_2(struct sk_buff *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_1 != VAR_0)
  return VAR_1->next;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1)->frag_list;

 return ((void*)0);
}
