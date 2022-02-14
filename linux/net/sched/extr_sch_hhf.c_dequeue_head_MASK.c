
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdrr_bucket {struct sk_buff* head; } ;
struct sk_buff {struct sk_buff* next; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct wdrr_bucket *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->head;

 VAR_0->head = VAR_1->next;
 FUNC_0(VAR_1);
 return VAR_1;
}
