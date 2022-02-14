
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data_len; int truesize; void* ip_summed; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 TYPE_1__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;

int FUNC_17(struct sk_buff *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 skb_frag_t *VAR_9, *VAR_10;

 FUNC_0(VAR_4 > VAR_3->len);

 if (FUNC_13(VAR_3))
  return 0;
 if (FUNC_16(VAR_2) || FUNC_16(VAR_3))
  return 0;

 VAR_8 = VAR_4;
 VAR_5 = 0;
 VAR_6 = FUNC_15(VAR_2)->nr_frags;
 VAR_9 = &FUNC_15(VAR_3)->frags[VAR_5];




 if (!VAR_6 ||
     !FUNC_3(VAR_2, VAR_6, FUNC_7(VAR_9),
         FUNC_4(VAR_9))) {
  VAR_7 = -1;
 } else {
  VAR_7 = VAR_6 - 1;

  VAR_8 -= FUNC_9(VAR_9);
  if (VAR_8 < 0) {
   if (FUNC_14(VAR_3) ||
       FUNC_14(VAR_2))
    return 0;


   VAR_9 = &FUNC_15(VAR_3)->frags[VAR_5];
   VAR_10 = &FUNC_15(VAR_2)->frags[VAR_7];

   FUNC_10(VAR_10, VAR_4);
   FUNC_12(VAR_9, VAR_4);
   FUNC_5(VAR_9, VAR_4);

   goto onlymerged;
  }

  VAR_5++;
 }


 if ((VAR_4 == VAR_3->len) &&
     (FUNC_15(VAR_3)->nr_frags - VAR_5) > (VAR_1 - VAR_6))
  return 0;

 if (FUNC_14(VAR_3) || FUNC_14(VAR_2))
  return 0;

 while ((VAR_8 > 0) && (VAR_5 < FUNC_15(VAR_3)->nr_frags)) {
  if (VAR_6 == VAR_1)
   return 0;

  VAR_9 = &FUNC_15(VAR_3)->frags[VAR_5];
  VAR_10 = &FUNC_15(VAR_2)->frags[VAR_6];

  if (VAR_8 >= FUNC_9(VAR_9)) {
   *VAR_10 = *VAR_9;
   VAR_8 -= FUNC_9(VAR_9);
   VAR_5++;
   VAR_6++;

  } else {
   FUNC_1(VAR_9);
   FUNC_8(VAR_10, VAR_9);
   FUNC_6(VAR_10, VAR_9);
   FUNC_11(VAR_10, VAR_8);

   FUNC_5(VAR_9, VAR_8);
   FUNC_12(VAR_9, VAR_8);
   VAR_8 = 0;

   VAR_6++;
   break;
  }
 }


 FUNC_15(VAR_2)->nr_frags = VAR_6;

 if (VAR_7 >= 0) {
  VAR_9 = &FUNC_15(VAR_3)->frags[0];
  VAR_10 = &FUNC_15(VAR_2)->frags[VAR_7];

  FUNC_10(VAR_10, FUNC_9(VAR_9));
  FUNC_2(VAR_9);
 }


 VAR_6 = 0;
 while (VAR_5 < FUNC_15(VAR_3)->nr_frags)
  FUNC_15(VAR_3)->frags[VAR_6++] = FUNC_15(VAR_3)->frags[VAR_5++];
 FUNC_15(VAR_3)->nr_frags = VAR_6;

 FUNC_0(VAR_8 > 0 && !FUNC_15(VAR_3)->nr_frags);

onlymerged:



 VAR_2->ip_summed = VAR_0;
 VAR_3->ip_summed = VAR_0;


 VAR_3->len -= VAR_4;
 VAR_3->data_len -= VAR_4;
 VAR_3->truesize -= VAR_4;
 VAR_2->len += VAR_4;
 VAR_2->data_len += VAR_4;
 VAR_2->truesize += VAR_4;

 return VAR_4;
}
