
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skb_shared_info {int gso_type; scalar_t__ gso_segs; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct skb_shared_info*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, u32 VAR_7, u32 VAR_8,
         u64 VAR_9)
{
 int VAR_10;

 if (VAR_9 & ~VAR_0)
  return -VAR_1;

 if (FUNC_2(VAR_6) && !FUNC_3(VAR_6)) {

  if (!(FUNC_4(VAR_6)->gso_type & VAR_5) ||
      !(VAR_9 & VAR_0))
   return -VAR_2;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_3);
 if (FUNC_6(VAR_10 < 0))
  return VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (FUNC_6(VAR_10 < 0))
  return VAR_10;

 if (FUNC_2(VAR_6)) {
  struct skb_shared_info *VAR_11 = FUNC_4(VAR_6);


  if (!(VAR_9 & VAR_0))
   FUNC_1(VAR_11, VAR_8);


  VAR_11->gso_type |= VAR_4;
  VAR_11->gso_segs = 0;
 }

 return 0;
}
