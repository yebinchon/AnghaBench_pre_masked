
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int tail; int end; int len; scalar_t__ data_len; struct sk_buff* next; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; struct sk_buff* frag_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,void*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 void* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;

void *FUNC_17(struct sk_buff *VAR_1, int VAR_2)
{




 int VAR_3, VAR_4, VAR_5 = (VAR_1->tail + VAR_2) - VAR_1->end;

 if (VAR_5 > 0 || FUNC_5(VAR_1)) {
  if (FUNC_2(VAR_1, 0, VAR_5 > 0 ? VAR_5 + 128 : 0,
         VAR_0))
   return ((void*)0);
 }

 FUNC_0(FUNC_6(VAR_1, FUNC_12(VAR_1),
        FUNC_15(VAR_1), VAR_2));




 if (!FUNC_11(VAR_1))
  goto pull_pages;


 VAR_5 = VAR_2;
 for (VAR_3 = 0; VAR_3 < FUNC_14(VAR_1)->nr_frags; VAR_3++) {
  int VAR_6 = FUNC_8(&FUNC_14(VAR_1)->frags[VAR_3]);

  if (VAR_6 >= VAR_5)
   goto pull_pages;
  VAR_5 -= VAR_6;
 }
 if (VAR_5) {
  struct sk_buff *VAR_7 = FUNC_14(VAR_1)->frag_list;
  struct sk_buff *VAR_8 = ((void*)0);
  struct sk_buff *VAR_9 = ((void*)0);

  do {
   if (VAR_7->len <= VAR_5) {

    VAR_5 -= VAR_7->len;
    VAR_7 = VAR_7->next;
    VAR_9 = VAR_7;
   } else {


    if (FUNC_13(VAR_7)) {

     VAR_8 = FUNC_4(VAR_7, VAR_0);
     if (!VAR_8)
      return ((void*)0);
     VAR_9 = VAR_7->next;
     VAR_7 = VAR_8;
    } else {


     VAR_9 = VAR_7;
    }
    if (!FUNC_3(VAR_7, VAR_5)) {
     FUNC_1(VAR_8);
     return ((void*)0);
    }
    break;
   }
  } while (VAR_5);


  while ((VAR_7 = FUNC_14(VAR_1)->frag_list) != VAR_9) {
   FUNC_14(VAR_1)->frag_list = VAR_7->next;
   FUNC_1(VAR_7);
  }

  if (VAR_8) {
   VAR_8->next = VAR_7;
   FUNC_14(VAR_1)->frag_list = VAR_8;
  }
 }


pull_pages:
 VAR_5 = VAR_2;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_14(VAR_1)->nr_frags; VAR_3++) {
  int VAR_10 = FUNC_8(&FUNC_14(VAR_1)->frags[VAR_3]);

  if (VAR_10 <= VAR_5) {
   FUNC_10(VAR_1, VAR_3);
   VAR_5 -= VAR_10;
  } else {
   skb_frag_t *VAR_11 = &FUNC_14(VAR_1)->frags[VAR_4];

   *VAR_11 = FUNC_14(VAR_1)->frags[VAR_3];
   if (VAR_5) {
    FUNC_7(VAR_11, VAR_5);
    FUNC_9(VAR_11, VAR_5);
    if (!VAR_3)
     goto end;
    VAR_5 = 0;
   }
   VAR_4++;
  }
 }
 FUNC_14(VAR_1)->nr_frags = VAR_4;

end:
 VAR_1->tail += VAR_2;
 VAR_1->data_len -= VAR_2;

 if (!VAR_1->data_len)
  FUNC_16(VAR_1, 0);

 return FUNC_15(VAR_1);
}
