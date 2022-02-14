
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_drops; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {int users; scalar_t__ next; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct sock *VAR_2, struct sk_buff_head *VAR_3,
   struct sk_buff *VAR_4, unsigned int VAR_5,
   void (*VAR_6)(struct sock *VAR_7,
        struct sk_buff *VAR_8))
{
 int VAR_9 = 0;

 if (VAR_5 & VAR_1) {
  VAR_9 = -VAR_0;
  FUNC_3(&VAR_3->lock);
  if (VAR_4->next) {
   FUNC_0(VAR_4, VAR_3);
   FUNC_2(&VAR_4->users);
   if (VAR_6)
    VAR_6(VAR_2, VAR_4);
   VAR_9 = 0;
  }
  FUNC_4(&VAR_3->lock);
 }

 FUNC_1(&VAR_2->sk_drops);
 return VAR_9;
}
