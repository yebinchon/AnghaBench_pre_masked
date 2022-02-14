
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct nr_sock {scalar_t__ fraglen; int frag_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nr_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7 = VAR_4;
 struct nr_sock *VAR_8 = FUNC_2(VAR_3);

 FUNC_6(VAR_4, VAR_1 + VAR_2);

 FUNC_3(VAR_3);

 if (VAR_5) {
  VAR_8->fraglen += VAR_4->len;
  FUNC_8(&VAR_8->frag_queue, VAR_4);
  return 0;
 }

 if (!VAR_5 && VAR_8->fraglen > 0) {
  VAR_8->fraglen += VAR_4->len;
  FUNC_8(&VAR_8->frag_queue, VAR_4);

  if ((VAR_7 = FUNC_0(VAR_8->fraglen, VAR_0)) == ((void*)0))
   return 1;

  FUNC_9(VAR_7);

  while ((VAR_6 = FUNC_5(&VAR_8->frag_queue)) != ((void*)0)) {
   FUNC_4(VAR_6,
        FUNC_7(VAR_7, VAR_6->len),
        VAR_6->len);
   FUNC_1(VAR_6);
  }

  VAR_8->fraglen = 0;
 }

 return FUNC_10(VAR_3, VAR_7);
}
