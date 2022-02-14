
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_alloc_cache {scalar_t__ skb_count; int skb_cache; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct napi_alloc_cache* FUNC_1 (int *) ;

void FUNC_2(void)
{
 struct napi_alloc_cache *VAR_2 = FUNC_1(&VAR_0);


 if (VAR_2->skb_count) {
  FUNC_0(VAR_1, VAR_2->skb_count,
         VAR_2->skb_cache);
  VAR_2->skb_count = 0;
 }
}
