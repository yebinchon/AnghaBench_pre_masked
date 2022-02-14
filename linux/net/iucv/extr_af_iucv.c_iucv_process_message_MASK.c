
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct sock {int sk_drops; } ;
struct sk_buff {void* data; unsigned int len; scalar_t__ head; } ;
struct iucv_path {int dummy; } ;
struct iucv_message {int flags; int rmmsg; int class; } ;
struct iucv_array {void* length; void* address; } ;
typedef int skb_frag_t ;
typedef scalar_t__ addr_t ;
struct TYPE_8__ {scalar_t__ offset; int class; } ;
struct TYPE_7__ {int backlog_skb_q; } ;
struct TYPE_6__ {int (* message_receive ) (struct iucv_path*,struct iucv_message*,int,void*,unsigned int,int *) ;} ;
struct TYPE_5__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 unsigned int FUNC_4 (struct iucv_message*) ;
 TYPE_3__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct iucv_path*,struct iucv_message*,int,void*,unsigned int,int *) ;
 int FUNC_16 (struct iucv_path*,struct iucv_message*,int,void*,unsigned int,int *) ;

__attribute__((used)) static void FUNC_17(struct sock *VAR_4, struct sk_buff *VAR_5,
     struct iucv_path *VAR_6,
     struct iucv_message *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;

 VAR_9 = FUNC_4(VAR_7);



 FUNC_0(VAR_5)->class = VAR_7->class;


 if ((VAR_7->flags & VAR_1) && VAR_9 > 7) {
  if (FUNC_7(VAR_7->rmmsg, VAR_2, 8) == 0) {
   VAR_5->data = ((void*)0);
   VAR_5->len = 0;
  }
 } else {
  if (FUNC_12(VAR_5)) {
   struct iucv_array *VAR_10 = (struct iucv_array *)VAR_5->head;
   int VAR_11;

   VAR_10[0].address = (u32)(addr_t)VAR_5->data;
   VAR_10[0].length = (u32)FUNC_11(VAR_5);
   for (VAR_11 = 0; VAR_11 < FUNC_14(VAR_5)->nr_frags; VAR_11++) {
    skb_frag_t *VAR_12 = &FUNC_14(VAR_5)->frags[VAR_11];

    VAR_10[VAR_11 + 1].address =
     (u32)(addr_t)FUNC_9(VAR_12);
    VAR_10[VAR_11 + 1].length = (u32)FUNC_10(VAR_12);
   }
   VAR_8 = VAR_3->message_receive(VAR_6, VAR_7,
           VAR_0,
           (void *)VAR_10, VAR_9, ((void*)0));
  } else {
   VAR_8 = VAR_3->message_receive(VAR_6, VAR_7,
           VAR_7->flags & VAR_1,
           VAR_5->data, VAR_9, ((void*)0));
  }
  if (VAR_8) {
   FUNC_6(VAR_5);
   return;
  }
  FUNC_1(VAR_5->len != VAR_9);
 }

 FUNC_0(VAR_5)->offset = 0;
 if (FUNC_8(VAR_4, VAR_5)) {
  FUNC_3(&VAR_4->sk_drops);
  FUNC_6(VAR_5);
  return;
 }
 if (FUNC_2(VAR_4, VAR_5))
  FUNC_13(&FUNC_5(VAR_4)->backlog_skb_q, VAR_5);
}
