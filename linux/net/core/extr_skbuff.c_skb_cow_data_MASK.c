
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; scalar_t__ sk; } ;
struct TYPE_2__ {scalar_t__ nr_frags; struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 TYPE_1__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ) ;

int FUNC_15(struct sk_buff *VAR_2, int VAR_3, struct sk_buff **VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct sk_buff *VAR_7, **VAR_8;





 if ((FUNC_3(VAR_2) || FUNC_12(VAR_2)->nr_frags) &&
     FUNC_0(VAR_2, FUNC_9(VAR_2)-FUNC_7(VAR_2)) == ((void*)0))
  return -VAR_0;


 if (!FUNC_6(VAR_2)) {





  if (FUNC_13(VAR_2) < VAR_3 &&
      FUNC_2(VAR_2, 0, VAR_3-FUNC_13(VAR_2)+128, VAR_1))
   return -VAR_0;


  *VAR_4 = VAR_2;
  return 1;
 }



 VAR_6 = 1;
 VAR_8 = &FUNC_12(VAR_2)->frag_list;
 VAR_5 = 0;

 while ((VAR_7 = *VAR_8) != ((void*)0)) {
  int VAR_9 = 0;





  if (FUNC_11(VAR_7))
   VAR_5 = 1;



  if (VAR_7->next == ((void*)0) && VAR_3) {
   if (FUNC_12(VAR_7)->nr_frags ||
       FUNC_6(VAR_7) ||
       FUNC_13(VAR_7) < VAR_3)
    VAR_9 = VAR_3 + 128;
  }

  if (VAR_5 ||
      FUNC_3(VAR_7) ||
      VAR_9 ||
      FUNC_12(VAR_7)->nr_frags ||
      FUNC_6(VAR_7)) {
   struct sk_buff *VAR_10;


   if (VAR_9 == 0)
    VAR_10 = FUNC_4(VAR_7, VAR_1);
   else
    VAR_10 = FUNC_5(VAR_7,
             FUNC_8(VAR_7),
             VAR_9,
             VAR_1);
   if (FUNC_14(VAR_10 == ((void*)0)))
    return -VAR_0;

   if (VAR_7->sk)
    FUNC_10(VAR_10, VAR_7->sk);




   VAR_10->next = VAR_7->next;
   *VAR_8 = VAR_10;
   FUNC_1(VAR_7);
   VAR_7 = VAR_10;
  }
  VAR_6++;
  *VAR_4 = VAR_7;
  VAR_8 = &VAR_7->next;
 }

 return VAR_6;
}
