
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tnl_ptk_info {int dummy; } ;
struct sk_buff {TYPE_2__* dev; scalar_t__ data; } ;
struct iphdr {int ihl; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int type; int code; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct tnl_ptk_info*,int *,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,struct tnl_ptk_info*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_5, u32 VAR_6)
{
 const struct iphdr *VAR_7 = (struct iphdr *)VAR_5->data;
 const int VAR_8 = FUNC_3(VAR_5)->type;
 const int VAR_9 = FUNC_3(VAR_5)->code;
 struct tnl_ptk_info VAR_10;

 if (FUNC_1(VAR_5, &VAR_10, ((void*)0), FUNC_2(VAR_0),
        VAR_7->ihl * 4) < 0)
  return;

 if (VAR_8 == VAR_1 && VAR_9 == VAR_2) {
  FUNC_6(VAR_5, FUNC_0(VAR_5->dev), VAR_6,
     VAR_5->dev->ifindex, VAR_4);
  return;
 }
 if (VAR_8 == VAR_3) {
  FUNC_5(VAR_5, FUNC_0(VAR_5->dev), VAR_5->dev->ifindex,
         VAR_4);
  return;
 }

 FUNC_4(VAR_5, VAR_6, &VAR_10);
}
