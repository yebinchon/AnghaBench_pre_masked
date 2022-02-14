
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct TYPE_3__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,int ,unsigned char*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,unsigned char,int ) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct llc_sap *VAR_2, struct sk_buff *VAR_3,
         unsigned char *VAR_4, unsigned char VAR_5)
{
 int VAR_6;
 FUNC_4(VAR_3, VAR_1, VAR_2->laddr.lsap,
       VAR_5, VAR_0);
 FUNC_5(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_3->dev->dev_addr, VAR_4);
 if (FUNC_2(!VAR_6))
  VAR_6 = FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3);
 return VAR_6;
}
