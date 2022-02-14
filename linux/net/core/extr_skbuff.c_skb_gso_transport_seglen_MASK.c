
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct skb_shared_info {int gso_type; unsigned int gso_size; } ;
struct sk_buff {scalar_t__ encapsulation; } ;
struct sctphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_4 (struct sk_buff const*) ;
 unsigned int FUNC_5 (struct sk_buff const*) ;
 unsigned int FUNC_6 (struct sk_buff const*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static unsigned int FUNC_8(const struct sk_buff *VAR_3)
{
 const struct skb_shared_info *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5 = 0;

 if (VAR_3->encapsulation) {
  VAR_5 = FUNC_2(VAR_3) -
   FUNC_5(VAR_3);

  if (FUNC_1(VAR_4->gso_type & (VAR_0 | VAR_1)))
   VAR_5 += FUNC_0(VAR_3);
 } else if (FUNC_1(VAR_4->gso_type & (VAR_0 | VAR_1))) {
  VAR_5 = FUNC_6(VAR_3);
 } else if (FUNC_7(FUNC_3(VAR_3))) {
  VAR_5 = sizeof(struct sctphdr);
 } else if (VAR_4->gso_type & VAR_2) {
  VAR_5 = sizeof(struct udphdr);
 }




 return VAR_5 + VAR_4->gso_size;
}
