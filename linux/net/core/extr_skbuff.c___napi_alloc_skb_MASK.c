
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int dummy; } ;
struct sk_buff {int pfmemalloc; int head_frag; int dev; } ;
struct napi_struct {int dev; } ;
struct TYPE_2__ {scalar_t__ pfmemalloc; } ;
struct napi_alloc_cache {TYPE_1__ page; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_2 (unsigned int,int,int ,int ) ;
 struct sk_buff* FUNC_3 (void*,unsigned int) ;
 int VAR_8 ;
 void* FUNC_4 (TYPE_1__*,unsigned int,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 struct napi_alloc_cache* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

struct sk_buff *FUNC_10(struct napi_struct *VAR_9, unsigned int VAR_10,
     gfp_t VAR_11)
{
 struct napi_alloc_cache *VAR_12 = FUNC_8(&VAR_8);
 struct sk_buff *VAR_13;
 void *VAR_14;

 VAR_10 += VAR_2 + VAR_1;

 if ((VAR_10 > FUNC_1(VAR_4)) ||
     (VAR_11 & (VAR_6 | VAR_0))) {
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_5, VAR_3);
  if (!VAR_13)
   goto skb_fail;
  goto skb_success;
 }

 VAR_10 += FUNC_0(sizeof(struct skb_shared_info));
 VAR_10 = FUNC_0(VAR_10);

 if (FUNC_5())
  VAR_11 |= VAR_7;

 VAR_14 = FUNC_4(&VAR_12->page, VAR_10, VAR_11);
 if (FUNC_9(!VAR_14))
  return ((void*)0);

 VAR_13 = FUNC_3(VAR_14, VAR_10);
 if (FUNC_9(!VAR_13)) {
  FUNC_6(VAR_14);
  return ((void*)0);
 }


 if (VAR_12->page.pfmemalloc)
  VAR_13->pfmemalloc = 1;
 VAR_13->head_frag = 1;

skb_success:
 FUNC_7(VAR_13, VAR_2 + VAR_1);
 VAR_13->dev = VAR_9->dev;

skb_fail:
 return VAR_13;
}
