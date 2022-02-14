
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct net_device *VAR_2,
     u32 VAR_3)
{
 unsigned int VAR_4 = FUNC_5(VAR_1);

 if (VAR_4) {
  FUNC_2(VAR_1, VAR_4);






  if (!FUNC_3(VAR_1))
   FUNC_7(VAR_1, FUNC_4(VAR_1), VAR_4);
 }
 FUNC_6(VAR_1);
 FUNC_8(VAR_1);
 return VAR_3 & VAR_0 ?
        FUNC_0(VAR_2, VAR_1) : FUNC_1(VAR_2, VAR_1);
}
