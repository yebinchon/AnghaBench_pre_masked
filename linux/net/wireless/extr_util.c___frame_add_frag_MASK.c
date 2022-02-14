
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int nr_frags; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;


 void* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct sk_buff*,int ,struct page*,int,int,int) ;
 struct skb_shared_info* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct sk_buff *VAR_0, struct page *VAR_1,
   void *VAR_2, int VAR_3, int VAR_4)
{
 struct skb_shared_info *VAR_5 = FUNC_3(VAR_0);
 int VAR_6;

 FUNC_1(VAR_1);
 VAR_6 = VAR_2 - FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_5->nr_frags, VAR_1, VAR_6, VAR_3, VAR_4);
}
