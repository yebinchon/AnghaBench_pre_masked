
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {struct sk_buff* next; scalar_t__ len; int data_len; int sk; } ;
struct sctp_ulpevent {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sctp_ulpevent* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;

struct sctp_ulpevent *FUNC_8(struct net *VAR_2,
        struct sk_buff_head *VAR_3,
        struct sk_buff *VAR_4,
        struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);
 struct sctp_ulpevent *VAR_8;
 struct sk_buff *VAR_9, *VAR_10;
 struct sk_buff *VAR_11 = FUNC_7(VAR_4)->frag_list;


 if (VAR_4 == VAR_5)
  VAR_6 = ((void*)0);
 else
  VAR_6 = VAR_4->next;


 for (VAR_10 = VAR_11; VAR_11; VAR_10 = VAR_11, VAR_11 = VAR_11->next)
  ;




 if (VAR_10)
  VAR_10->next = VAR_6;
 else {
  if (FUNC_5(VAR_4)) {





   VAR_7 = FUNC_6(VAR_4, VAR_0);
   if (!VAR_7)
    return ((void*)0);

   FUNC_4(VAR_7, VAR_4->sk);

   FUNC_7(VAR_7)->frag_list = VAR_6;
  } else
   FUNC_7(VAR_4)->frag_list = VAR_6;
 }


 FUNC_1(VAR_4, VAR_3);


 if (VAR_7) {
  FUNC_2(VAR_4);
  VAR_4 = VAR_7;
 }

 while (VAR_6) {

  VAR_9 = VAR_6->next;


  VAR_4->len += VAR_6->len;
  VAR_4->data_len += VAR_6->len;


  FUNC_1(VAR_6, VAR_3);


  if (VAR_6 == VAR_5)
   break;
  VAR_6->next = VAR_9;
  VAR_6 = VAR_9;
 }

 VAR_8 = FUNC_3(VAR_4);
 FUNC_0(VAR_2, VAR_1);

 return VAR_8;
}
