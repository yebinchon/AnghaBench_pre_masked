
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int) ;

__be16 FUNC_4(struct sk_buff *VAR_1, int *VAR_2)
{
 __be16 VAR_3 = VAR_1->protocol;


 if (VAR_3 == FUNC_1(VAR_0)) {
  struct ethhdr *VAR_4;

  if (FUNC_3(!FUNC_2(VAR_1, sizeof(struct ethhdr))))
   return 0;

  VAR_4 = (struct ethhdr *)VAR_1->data;
  VAR_3 = VAR_4->h_proto;
 }

 return FUNC_0(VAR_1, VAR_3, VAR_2);
}
