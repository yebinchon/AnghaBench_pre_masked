
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_alloc_cache {scalar_t__ skb_count; struct sk_buff** skb_cache; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,struct sk_buff**) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 struct napi_alloc_cache* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct sk_buff *VAR_3)
{
 struct napi_alloc_cache *VAR_4 = FUNC_3(&VAR_1);


 FUNC_2(VAR_3);


 VAR_4->skb_cache[VAR_4->skb_count++] = VAR_3;







 if (FUNC_4(VAR_4->skb_count == VAR_0)) {
  FUNC_0(VAR_2, VAR_0,
         VAR_4->skb_cache);
  VAR_4->skb_count = 0;
 }
}
