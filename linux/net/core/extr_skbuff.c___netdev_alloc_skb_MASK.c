
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int dummy; } ;
struct sk_buff {int pfmemalloc; int head_frag; struct net_device* dev; } ;
struct page_frag_cache {int pfmemalloc; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_2 (unsigned int,int,int ,int ) ;
 struct sk_buff* FUNC_3 (void*,unsigned int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_8 (struct page_frag_cache*,unsigned int,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 struct page_frag_cache* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

struct sk_buff *FUNC_14(struct net_device *VAR_9, unsigned int VAR_10,
       gfp_t VAR_11)
{
 struct page_frag_cache *VAR_12;
 struct sk_buff *VAR_13;
 bool VAR_14;
 void *VAR_15;

 VAR_10 += VAR_1;

 if ((VAR_10 > FUNC_1(VAR_3)) ||
     (VAR_11 & (VAR_5 | VAR_0))) {
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_4, VAR_2);
  if (!VAR_13)
   goto skb_fail;
  goto skb_success;
 }

 VAR_10 += FUNC_0(sizeof(struct skb_shared_info));
 VAR_10 = FUNC_0(VAR_10);

 if (FUNC_9())
  VAR_11 |= VAR_6;

 if (FUNC_4() || FUNC_5()) {
  VAR_12 = FUNC_12(&VAR_8);
  VAR_15 = FUNC_8(VAR_12, VAR_10, VAR_11);
  VAR_14 = VAR_12->pfmemalloc;
 } else {
  FUNC_6();
  VAR_12 = FUNC_12(&VAR_7.page);
  VAR_15 = FUNC_8(VAR_12, VAR_10, VAR_11);
  VAR_14 = VAR_12->pfmemalloc;
  FUNC_7();
 }

 if (FUNC_13(!VAR_15))
  return ((void*)0);

 VAR_13 = FUNC_3(VAR_15, VAR_10);
 if (FUNC_13(!VAR_13)) {
  FUNC_10(VAR_15);
  return ((void*)0);
 }


 if (VAR_14)
  VAR_13->pfmemalloc = 1;
 VAR_13->head_frag = 1;

skb_success:
 FUNC_11(VAR_13, VAR_1);
 VAR_13->dev = VAR_9;

skb_fail:
 return VAR_13;
}
