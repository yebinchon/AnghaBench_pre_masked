
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; TYPE_1__* dev; } ;
struct ethhdr {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct ethhdr*,int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sk_buff *VAR_3, __be16 VAR_4, int VAR_5)
{
 int VAR_6;

 if (FUNC_10(!FUNC_1(VAR_3->protocol)))
  return 0;

 VAR_6 = FUNC_4(VAR_3, VAR_5 + VAR_2);
 if (FUNC_10(VAR_6))
  return VAR_6;

 FUNC_7(VAR_3, FUNC_3(VAR_3), VAR_2);
 FUNC_2(FUNC_5(VAR_3) + VAR_2, FUNC_5(VAR_3),
  VAR_5);

 FUNC_0(VAR_3, VAR_2);
 FUNC_8(VAR_3);
 FUNC_9(VAR_3, VAR_5);

 if (VAR_3->dev && VAR_3->dev->type == VAR_0) {
  struct ethhdr *VAR_7;


  VAR_7 = (struct ethhdr *)((void *)FUNC_3(VAR_3) - VAR_1);
  FUNC_6(VAR_3, VAR_7, VAR_4);
 }
 VAR_3->protocol = VAR_4;

 return 0;
}
