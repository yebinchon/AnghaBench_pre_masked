
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int lock; } ;
struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; struct sk_buff_head sk_error_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int ee_origin; } ;
struct TYPE_4__ {TYPE_1__ ee; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct sock*) ;

struct sk_buff *FUNC_7(struct sock *VAR_0)
{
 struct sk_buff_head *VAR_1 = &VAR_0->sk_error_queue;
 struct sk_buff *VAR_2, *VAR_3 = ((void*)0);
 bool VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_4(&VAR_1->lock, VAR_5);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 && (VAR_3 = FUNC_3(VAR_1))) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   VAR_0->sk_err = FUNC_0(VAR_3)->ee.ee_origin;
 }
 FUNC_5(&VAR_1->lock, VAR_5);

 if (FUNC_2(VAR_2) && !VAR_4)
  VAR_0->sk_err = 0;

 if (VAR_3)
  VAR_0->sk_error_report(VAR_0);

 return VAR_2;
}
