
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sk_buff *VAR_4, int VAR_5,
      __be16 VAR_6, bool VAR_7, bool VAR_8)
{
 if (FUNC_10(!FUNC_5(VAR_4, VAR_5)))
  return -VAR_0;

 FUNC_7(VAR_4, VAR_5);

 if (!VAR_7 && VAR_6 == FUNC_2(VAR_3)) {
  struct ethhdr *VAR_9;

  if (FUNC_10(!FUNC_5(VAR_4, VAR_1)))
   return -VAR_0;

  VAR_9 = (struct ethhdr *)VAR_4->data;
  if (FUNC_4(FUNC_1(VAR_9->h_proto)))
   VAR_4->protocol = VAR_9->h_proto;
  else
   VAR_4->protocol = FUNC_2(VAR_2);

 } else {
  VAR_4->protocol = VAR_6;
 }

 FUNC_6(VAR_4);
 FUNC_0(VAR_4);
 FUNC_9(VAR_4, 0);
 FUNC_8(VAR_4, VAR_8);

 return FUNC_3(VAR_4);
}
