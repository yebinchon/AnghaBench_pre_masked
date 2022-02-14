
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; unsigned int data_len; scalar_t__ destructor; int sk; struct sk_buff* next; } ;
struct TYPE_2__ {int nr_frags; struct sk_buff* frag_list; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 TYPE_1__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct sk_buff *VAR_3, unsigned int VAR_4)
{
 struct sk_buff **VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7 = FUNC_12(VAR_3);
 int VAR_8 = FUNC_15(VAR_3)->nr_frags;
 int VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_3) &&
     FUNC_16((VAR_10 = FUNC_1(VAR_3, 0, 0, VAR_1))))
  return VAR_10;

 VAR_9 = 0;
 if (VAR_7 >= VAR_4)
  goto drop_pages;

 for (; VAR_9 < VAR_8; VAR_9++) {
  int VAR_11 = VAR_7 + FUNC_8(&FUNC_15(VAR_3)->frags[VAR_9]);

  if (VAR_11 < VAR_4) {
   VAR_7 = VAR_11;
   continue;
  }

  FUNC_9(&FUNC_15(VAR_3)->frags[VAR_9++], VAR_4 - VAR_7);

drop_pages:
  FUNC_15(VAR_3)->nr_frags = VAR_9;

  for (; VAR_9 < VAR_8; VAR_9++)
   FUNC_10(VAR_3, VAR_9);

  if (FUNC_11(VAR_3))
   FUNC_6(VAR_3);
  goto done;
 }

 for (VAR_5 = &FUNC_15(VAR_3)->frag_list; (VAR_6 = *VAR_5);
      VAR_5 = &VAR_6->next) {
  int VAR_12 = VAR_7 + VAR_6->len;

  if (FUNC_14(VAR_6)) {
   struct sk_buff *VAR_13;

   VAR_13 = FUNC_3(VAR_6, VAR_1);
   if (FUNC_16(!VAR_13))
    return -VAR_0;

   VAR_13->next = VAR_6->next;
   FUNC_0(VAR_6);
   VAR_6 = VAR_13;
   *VAR_5 = VAR_6;
  }

  if (VAR_12 < VAR_4) {
   VAR_7 = VAR_12;
   continue;
  }

  if (VAR_12 > VAR_4 &&
      FUNC_16((VAR_10 = FUNC_2(VAR_6, VAR_4 - VAR_7))))
   return VAR_10;

  if (VAR_6->next)
   FUNC_7(&VAR_6->next);
  break;
 }

done:
 if (VAR_4 > FUNC_12(VAR_3)) {
  VAR_3->data_len -= VAR_3->len - VAR_4;
  VAR_3->len = VAR_4;
 } else {
  VAR_3->len = VAR_4;
  VAR_3->data_len = 0;
  FUNC_13(VAR_3, VAR_4);
 }

 if (!VAR_3->sk || VAR_3->destructor == VAR_2)
  FUNC_5(VAR_3);
 return 0;
}
