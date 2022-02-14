
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; } ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct sta_info *VAR_2)
{
 struct ethhdr *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (FUNC_2(VAR_4))
  return VAR_4;

 VAR_3 = (void *)VAR_1->data;
 FUNC_0(VAR_3->h_dest, VAR_2->sta.addr);

 return 0;
}
