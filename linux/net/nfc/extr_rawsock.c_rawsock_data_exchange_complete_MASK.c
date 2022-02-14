
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sock {TYPE_1__ sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tx_work_scheduled; int tx_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (char*,struct sock*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void *VAR_0, struct sk_buff *VAR_1,
        int VAR_2)
{
 struct sock *VAR_3 = (struct sock *) VAR_0;

 FUNC_0(FUNC_1());

 FUNC_4("sk=%p err=%d\n", VAR_3, VAR_2);

 if (VAR_2)
  goto error;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto error_skb;

 VAR_2 = FUNC_10(VAR_3, VAR_1);
 if (VAR_2)
  goto error_skb;

 FUNC_11(&VAR_3->sk_write_queue.lock);
 if (!FUNC_8(&VAR_3->sk_write_queue))
  FUNC_7(&FUNC_3(VAR_3)->tx_work);
 else
  FUNC_3(VAR_3)->tx_work_scheduled = 0;
 FUNC_12(&VAR_3->sk_write_queue.lock);

 FUNC_9(VAR_3);
 return;

error_skb:
 FUNC_2(VAR_1);

error:
 FUNC_6(VAR_3, VAR_2);
 FUNC_9(VAR_3);
}
