
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; } ;
struct net_device {struct mvswitch_priv* phy_ptr; } ;
struct mvswitch_priv {int* vlans; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_3, struct sk_buff *VAR_4)
{
 struct mvswitch_priv *VAR_5;
 unsigned char *VAR_6;
 int VAR_7 = -1;
 int VAR_8;

 VAR_5 = VAR_3->phy_ptr;
 if (FUNC_1(!VAR_5))
  return;





 VAR_6 = VAR_4->data + VAR_4->len - VAR_2;
 if (VAR_6[0] != 0x80)
  return;



 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->vlans); VAR_8++) {
  if ((1 << VAR_6[1]) & VAR_5->vlans[VAR_8])
   VAR_7 = VAR_8;
 }

 if (VAR_7 == -1)
  return;

 FUNC_2(VAR_4, FUNC_3(VAR_0), VAR_7);
}
