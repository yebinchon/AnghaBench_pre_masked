
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dev; } ;
struct phonethdr {int pn_robj; int pn_rdev; int pn_sdev; } ;
typedef int data ;


 int VAR_0 ;
 struct phonethdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int const*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1)
{
 struct phonethdr *VAR_2 = FUNC_0(VAR_1);
 static const u8 VAR_3[4] = {
  0x00 , 0x10 ,
  0x00 , 0x00
 };

 return FUNC_2(VAR_3, sizeof(VAR_3), VAR_1->dev,
    FUNC_1(VAR_2->pn_sdev, 0x00),
    FUNC_1(VAR_2->pn_rdev, VAR_2->pn_robj),
    VAR_0);
}
