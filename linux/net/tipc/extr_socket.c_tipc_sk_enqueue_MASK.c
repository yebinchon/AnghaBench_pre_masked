
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int len; } ;
struct sock {int sk_drops; TYPE_1__ sk_backlog; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int atomic_t ;
struct TYPE_4__ {int dupl_rcvcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int,unsigned long) ;
 scalar_t__ FUNC_11 (int ,struct sk_buff**,int ) ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,struct sk_buff*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_15 (struct sk_buff_head*,int ) ;
 int FUNC_16 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_17 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_18 (struct sock*,struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(struct sk_buff_head *VAR_3, struct sock *VAR_4,
       u32 VAR_5, struct sk_buff_head *VAR_6)
{
 unsigned long VAR_7 = VAR_2 + 2;
 struct sk_buff *VAR_8;
 unsigned int VAR_9;
 atomic_t *VAR_10;
 u32 VAR_11;

 while (FUNC_7(VAR_3)) {
  if (FUNC_19(FUNC_10(VAR_2, VAR_7)))
   return;

  VAR_8 = FUNC_15(VAR_3, VAR_5);
  if (FUNC_19(!VAR_8))
   return;


  if (!FUNC_9(VAR_4)) {
   FUNC_14(VAR_4, VAR_8, VAR_6);
   continue;
  }


  VAR_10 = &FUNC_13(VAR_4)->dupl_rcvcnt;
  if (!VAR_4->sk_backlog.len)
   FUNC_3(VAR_10, 0);
  VAR_9 = FUNC_5(VAR_4, VAR_8) + FUNC_2(VAR_10);
  if (FUNC_4(!FUNC_6(VAR_4, VAR_8, VAR_9))) {
   FUNC_17(VAR_4, VAR_8, VAR_0,
       "bklg & rcvq >90% allocated!");
   continue;
  }

  FUNC_16(VAR_4, VAR_8, VAR_0, "err_overload!");

  VAR_11 = FUNC_12(FUNC_8(VAR_4));
  FUNC_1(&VAR_4->sk_drops);
  if (FUNC_11(VAR_11, &VAR_8, VAR_1)) {
   FUNC_18(VAR_4, VAR_8, VAR_0,
           "@sk_enqueue!");
   FUNC_0(VAR_6, VAR_8);
  }
  break;
 }
}
