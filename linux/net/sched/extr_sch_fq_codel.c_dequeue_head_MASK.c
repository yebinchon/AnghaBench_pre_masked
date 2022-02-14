
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct fq_codel_flow {struct sk_buff* head; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(struct fq_codel_flow *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->head;

 VAR_0->head = VAR_1->next;
 FUNC_0(VAR_1);
 return VAR_1;
}
