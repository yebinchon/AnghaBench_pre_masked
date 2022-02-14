
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; } ;
typedef int opt ;
struct TYPE_2__ {int version; int ihl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ,struct ip_options*) ;
 int FUNC_1 (int ,struct ip_options*,struct sk_buff*,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ip_options*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_2)
{
 struct ip_options VAR_3;
 int VAR_4;




 if (!FUNC_5(VAR_2, sizeof(struct iphdr)) ||
     FUNC_3(VAR_2)->version != 4 || FUNC_3(VAR_2)->ihl < 5)
  return;

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_3(VAR_2)->ihl > 5) {
  if (!FUNC_5(VAR_2, FUNC_3(VAR_2)->ihl * 4))
   return;
  VAR_3.optlen = FUNC_3(VAR_2)->ihl * 4 - sizeof(struct iphdr);

  FUNC_6();
  VAR_4 = FUNC_1(FUNC_2(VAR_2->dev), &VAR_3, VAR_2, ((void*)0));
  FUNC_7();

  if (VAR_4)
   return;
 }
 FUNC_0(VAR_2, VAR_0, VAR_1, 0, &VAR_3);
}
