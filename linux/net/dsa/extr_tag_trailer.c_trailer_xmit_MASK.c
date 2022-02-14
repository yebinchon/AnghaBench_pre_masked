
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ head; } ;
struct net_device {int dummy; } ;
struct dsa_port {int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_2(VAR_3);
 struct sk_buff *VAR_5;
 int VAR_6;
 u8 *VAR_7;







 VAR_6 = 0;
 if (VAR_2->len < 60)
  VAR_6 = 60 - VAR_2->len;

 VAR_5 = FUNC_0(VAR_1 + VAR_2->len + VAR_6 + 4, VAR_0);
 if (!VAR_5)
  return ((void*)0);
 FUNC_7(VAR_5, VAR_1);

 FUNC_8(VAR_5);
 FUNC_9(VAR_5, FUNC_4(VAR_2) - VAR_2->head);
 FUNC_10(VAR_5, FUNC_11(VAR_2) - VAR_2->head);
 FUNC_3(VAR_2, FUNC_5(VAR_5, VAR_2->len));
 FUNC_1(VAR_2);

 if (VAR_6) {
  FUNC_6(VAR_5, VAR_6);
 }

 VAR_7 = FUNC_5(VAR_5, 4);
 VAR_7[0] = 0x80;
 VAR_7[1] = 1 << VAR_4->index;
 VAR_7[2] = 0x10;
 VAR_7[3] = 0x00;

 return VAR_5;
}
