
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int lock; } ;
struct sock {struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {struct sk_buff_head reader_queue; } ;


 struct sk_buff* FUNC_0 (struct sock*,struct sk_buff_head*,int*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*,int,int,int) ;
 TYPE_1__* FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_0)
{
 struct sk_buff_head *VAR_1 = &FUNC_8(VAR_0)->reader_queue;
 struct sk_buff_head *VAR_2 = &VAR_0->sk_receive_queue;
 struct sk_buff *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 FUNC_4(&VAR_1->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (!VAR_3 && !FUNC_1(VAR_2)) {
  FUNC_3(&VAR_2->lock);
  FUNC_2(VAR_2, VAR_1);
  FUNC_5(&VAR_2->lock);

  VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 }
 VAR_5 = VAR_3 ? VAR_3->len : -1;
 if (VAR_4)
  FUNC_7(VAR_0, VAR_4, 1, 0);
 FUNC_6(&VAR_1->lock);
 return VAR_5;
}
