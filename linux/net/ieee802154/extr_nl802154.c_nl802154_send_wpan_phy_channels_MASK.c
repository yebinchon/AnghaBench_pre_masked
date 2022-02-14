
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int * channels; } ;
struct TYPE_4__ {TYPE_1__ supported; } ;
struct cfg802154_registered_device {TYPE_2__ wpan_phy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct cfg802154_registered_device *VAR_4,
    struct sk_buff *VAR_5)
{
 struct nlattr *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  if (FUNC_2(VAR_5, VAR_3,
    VAR_4->wpan_phy.supported.channels[VAR_7]))
   return -VAR_0;
 }
 FUNC_0(VAR_5, VAR_6);

 return 0;
}
