
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dep_map; } ;
struct sock {int sk_drops; int sk_rcvbuf; TYPE_1__ sk_lock; } ;
struct sk_buff {int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;

int FUNC_14(struct sock *VAR_2, struct sk_buff *VAR_3,
       const int VAR_4, unsigned int VAR_5, bool VAR_6)
{
 int VAR_7 = VAR_0;

 if (FUNC_10(VAR_2, VAR_3, VAR_5))
  goto discard_and_relse;

 VAR_3->dev = ((void*)0);

 if (FUNC_11(VAR_2, VAR_2->sk_rcvbuf)) {
  FUNC_1(&VAR_2->sk_drops);
  goto discard_and_relse;
 }
 if (VAR_4)
  FUNC_3(VAR_2);
 else
  FUNC_2(VAR_2);
 if (!FUNC_12(VAR_2)) {



  FUNC_6(&VAR_2->sk_lock.dep_map, 0, 1, VAR_1);

  VAR_7 = FUNC_9(VAR_2, VAR_3);

  FUNC_7(&VAR_2->sk_lock.dep_map, 1, VAR_1);
 } else if (FUNC_8(VAR_2, VAR_3, FUNC_0(VAR_2->sk_rcvbuf))) {
  FUNC_4(VAR_2);
  FUNC_1(&VAR_2->sk_drops);
  goto discard_and_relse;
 }

 FUNC_4(VAR_2);
out:
 if (VAR_6)
  FUNC_13(VAR_2);
 return VAR_7;
discard_and_relse:
 FUNC_5(VAR_3);
 goto out;
}
