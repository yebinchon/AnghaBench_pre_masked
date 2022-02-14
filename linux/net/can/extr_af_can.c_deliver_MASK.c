
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct receiver {int matches; int data; int (* func ) (struct sk_buff*,int ) ;} ;


 int FUNC_0 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0, struct receiver *VAR_1)
{
 VAR_1->func(VAR_0, VAR_1->data);
 VAR_1->matches++;
}
