
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_checksum_ops {int combine; int update; } ;
struct sk_buff {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 (struct sk_buff const*,int,int,int ,struct skb_checksum_ops const*) ;
 int VAR_0 ;
 int VAR_1 ;

__wsum FUNC_1(const struct sk_buff *VAR_2, int VAR_3,
      int VAR_4, __wsum VAR_5)
{
 const struct skb_checksum_ops VAR_6 = {
  .update = VAR_1,
  .combine = VAR_0,
 };

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
}
