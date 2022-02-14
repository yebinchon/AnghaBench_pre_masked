
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int peeked; TYPE_1__* next; TYPE_2__* prev; } ;
struct TYPE_4__ {struct sk_buff* next; } ;
struct TYPE_3__ {struct sk_buff* prev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_2->peeked)
  return VAR_2;


 if (!FUNC_3(VAR_2))
  goto done;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_2->prev->next = VAR_3;
 VAR_2->next->prev = VAR_3;
 VAR_3->prev = VAR_2->prev;
 VAR_3->next = VAR_2->next;

 FUNC_1(VAR_2);
 VAR_2 = VAR_3;

done:
 VAR_2->peeked = 1;

 return VAR_2;
}
