
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int dev; } ;
struct iphdr {int dummy; } ;
struct TYPE_3__ {int gateway; } ;
struct TYPE_4__ {TYPE_1__ un; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static bool FUNC_6(struct sk_buff *VAR_1)
{
 if (VAR_1->len < sizeof(struct iphdr)) {
  FUNC_0(FUNC_1(VAR_1->dev), VAR_0);
  return 0;
 }

 if (!FUNC_5(VAR_1, sizeof(struct iphdr))) {

  return 0;
 }

 FUNC_3(VAR_1, FUNC_4(FUNC_2(VAR_1)->un.gateway));
 return 1;
}
