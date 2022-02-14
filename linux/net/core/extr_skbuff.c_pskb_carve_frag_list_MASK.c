
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {struct sk_buff* frag_list; } ;
struct sk_buff {int len; struct sk_buff* next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int,int ) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2,
    struct skb_shared_info *VAR_3, int VAR_4,
    gfp_t VAR_5)
{
 struct sk_buff *VAR_6 = VAR_3->frag_list;
 struct sk_buff *VAR_7 = ((void*)0);
 struct sk_buff *VAR_8 = ((void*)0);

 do {
  if (!VAR_6) {
   FUNC_1("Not enough bytes to eat. Want %d\n", VAR_4);
   return -VAR_0;
  }
  if (VAR_6->len <= VAR_4) {

   VAR_4 -= VAR_6->len;
   VAR_6 = VAR_6->next;
   VAR_8 = VAR_6;
  } else {

   if (FUNC_4(VAR_6)) {
    VAR_7 = FUNC_3(VAR_6, VAR_5);
    if (!VAR_7)
     return -VAR_1;
    VAR_8 = VAR_6->next;
    VAR_6 = VAR_7;
   } else {

    VAR_8 = VAR_6;
   }
   if (FUNC_2(VAR_6, VAR_4, VAR_5) < 0) {
    FUNC_0(VAR_7);
    return -VAR_1;
   }
   break;
  }
 } while (VAR_4);


 while ((VAR_6 = VAR_3->frag_list) != VAR_8) {
  VAR_3->frag_list = VAR_6->next;
  FUNC_0(VAR_6);
 }

 if (VAR_7) {
  VAR_7->next = VAR_6;
  VAR_3->frag_list = VAR_7;
 }
 return 0;
}
