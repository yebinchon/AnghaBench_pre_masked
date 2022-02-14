
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int * frags; } ;
struct sk_buff {int len; int data_len; void* data; int head; } ;
struct page {int dummy; } ;
typedef int skb_frag_t ;


 int FUNC_0 (struct sk_buff*,struct page*,void*,int,int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int const*) ;
 struct page* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 struct skb_shared_info* FUNC_5 (struct sk_buff*) ;
 struct page* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct sk_buff *VAR_0, struct sk_buff *VAR_1,
       int VAR_2, int VAR_3)
{
 struct skb_shared_info *VAR_4 = FUNC_5(VAR_0);
 const skb_frag_t *VAR_5 = &VAR_4->frags[0];
 struct page *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = VAR_0->len - VAR_0->data_len;
 int VAR_11;

 VAR_6 = FUNC_6(VAR_0->head);
 VAR_7 = VAR_0->data;
 VAR_9 = VAR_10;

 while (VAR_2 >= VAR_9) {
  VAR_2 -= VAR_9;
  VAR_6 = FUNC_3(VAR_5);
  VAR_7 = FUNC_2(VAR_5);
  VAR_9 = FUNC_4(VAR_5);
  VAR_5++;
 }

 VAR_7 += VAR_2;
 VAR_8 = VAR_9 - VAR_2;

 VAR_11 = FUNC_1(VAR_3, VAR_8);

 FUNC_0(VAR_1, VAR_6, VAR_7, VAR_11, VAR_9);
 VAR_3 -= VAR_11;

 while (VAR_3 > 0) {
  VAR_8 = FUNC_4(VAR_5);
  VAR_11 = FUNC_1(VAR_3, VAR_8);
  FUNC_0(VAR_1, FUNC_3(VAR_5),
     FUNC_2(VAR_5), VAR_11, VAR_8);
  VAR_3 -= VAR_11;
  VAR_5++;
 }
}
