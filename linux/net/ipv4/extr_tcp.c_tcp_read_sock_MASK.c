
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct tcp_sock {size_t copied_seq; size_t urg_seq; scalar_t__ urg_data; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {size_t len; } ;
typedef int (* sk_read_actor_t ) (TYPE_1__*,struct sk_buff*,size_t,size_t) ;
struct TYPE_6__ {int count; } ;
typedef TYPE_1__ read_descriptor_t ;
struct TYPE_7__ {int tcp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (struct sock*,size_t,size_t*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

int FUNC_7(struct sock *VAR_3, read_descriptor_t *VAR_4,
    sk_read_actor_t VAR_5)
{
 struct sk_buff *VAR_6;
 struct tcp_sock *VAR_7 = FUNC_6(VAR_3);
 u32 VAR_8 = VAR_7->copied_seq;
 u32 VAR_9;
 int VAR_10 = 0;

 if (VAR_3->sk_state == VAR_2)
  return -VAR_0;
 while ((VAR_6 = FUNC_5(VAR_3, VAR_8, &VAR_9)) != ((void*)0)) {
  if (VAR_9 < VAR_6->len) {
   int VAR_11;
   size_t VAR_12;

   VAR_12 = VAR_6->len - VAR_9;

   if (VAR_7->urg_data) {
    u32 VAR_13 = VAR_7->urg_seq - VAR_8;
    if (VAR_13 < VAR_12)
     VAR_12 = VAR_13;
    if (!VAR_12)
     break;
   }
   VAR_11 = VAR_5(VAR_4, VAR_6, VAR_9, VAR_12);
   if (VAR_11 <= 0) {
    if (!VAR_10)
     VAR_10 = VAR_11;
    break;
   } else if (VAR_11 <= VAR_12) {
    VAR_8 += VAR_11;
    VAR_10 += VAR_11;
    VAR_9 += VAR_11;
   }





   VAR_6 = FUNC_5(VAR_3, VAR_8 - 1, &VAR_9);
   if (!VAR_6)
    break;



   if (VAR_9 + 1 != VAR_6->len)
    continue;
  }
  if (FUNC_0(VAR_6)->tcp_flags & VAR_1) {
   FUNC_2(VAR_3, VAR_6);
   ++VAR_8;
   break;
  }
  FUNC_2(VAR_3, VAR_6);
  if (!VAR_4->count)
   break;
  FUNC_1(VAR_7->copied_seq, VAR_8);
 }
 FUNC_1(VAR_7->copied_seq, VAR_8);

 FUNC_4(VAR_3);


 if (VAR_10 > 0) {
  FUNC_5(VAR_3, VAR_8, &VAR_9);
  FUNC_3(VAR_3, VAR_10);
 }
 return VAR_10;
}
