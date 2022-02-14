
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_offload {int flags; } ;
struct sk_buff {int dev; int len; scalar_t__ data; } ;
struct iphdr {int protocol; int tot_len; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,struct sk_buff*,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct iphdr*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int VAR_3 ;
 struct xfrm_offload* FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct sk_buff *VAR_4, int VAR_5)
{
 struct xfrm_offload *VAR_6 = FUNC_10(VAR_4);
 struct iphdr *VAR_7 = FUNC_5(VAR_4);

 VAR_7->protocol = FUNC_1(VAR_4)->protocol;


 if (!VAR_5)
  return -VAR_7->protocol;


 FUNC_2(VAR_4, VAR_4->data - FUNC_8(VAR_4));
 VAR_7->tot_len = FUNC_4(VAR_4->len);
 FUNC_6(VAR_7);

 if (VAR_6 && (VAR_6->flags & VAR_2)) {
  FUNC_7(VAR_4);
  FUNC_9(VAR_4);
  return 0;
 }

 FUNC_0(VAR_0, VAR_1,
  FUNC_3(VAR_4->dev), ((void*)0), VAR_4, VAR_4->dev, ((void*)0),
  VAR_3);
 return 0;
}
