
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int lock; } ;
struct sock {struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head reader_queue; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sock*,struct sk_buff_head*,unsigned int,int ,int*,int*,struct sk_buff**) ;
 int FUNC_1 (struct sock*,int*,long*,struct sk_buff*) ;
 int FUNC_2 (struct sock*,unsigned int) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_6 (struct sock*) ;
 long FUNC_7 (struct sock*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;

struct sk_buff *FUNC_13(struct sock *VAR_4, unsigned int VAR_5,
          int VAR_6, int *VAR_7, int *VAR_8)
{
 struct sk_buff_head *VAR_9 = &VAR_4->sk_receive_queue;
 struct sk_buff_head *VAR_10;
 struct sk_buff *VAR_11;
 long VAR_12;
 int VAR_13;

 VAR_10 = &FUNC_12(VAR_4)->reader_queue;
 VAR_5 |= VAR_6 ? VAR_1 : 0;
 VAR_12 = FUNC_7(VAR_4, VAR_5 & VAR_1);
 do {
  struct sk_buff *VAR_14;

  VAR_13 = FUNC_6(VAR_4);
  if (VAR_13)
   break;

  VAR_13 = -VAR_0;
  do {
   FUNC_9(&VAR_10->lock);
   VAR_14 = FUNC_0(VAR_4, VAR_10, VAR_5,
       VAR_2,
       VAR_7, VAR_8, &VAR_11);
   if (VAR_14) {
    FUNC_11(&VAR_10->lock);
    return VAR_14;
   }

   if (FUNC_4(VAR_9)) {
    FUNC_11(&VAR_10->lock);
    goto busy_check;
   }






   FUNC_8(&VAR_9->lock);
   FUNC_5(VAR_9, VAR_10);

   VAR_14 = FUNC_0(VAR_4, VAR_10, VAR_5,
       VAR_3,
       VAR_7, VAR_8, &VAR_11);
   FUNC_10(&VAR_9->lock);
   FUNC_11(&VAR_10->lock);
   if (VAR_14)
    return VAR_14;

busy_check:
   if (!FUNC_3(VAR_4))
    break;

   FUNC_2(VAR_4, VAR_5 & VAR_1);
  } while (!FUNC_4(VAR_9));


 } while (VAR_12 &&
   !FUNC_1(VAR_4, &VAR_13, &VAR_12,
           (struct sk_buff *)VAR_9));

 *VAR_8 = VAR_13;
 return ((void*)0);
}
