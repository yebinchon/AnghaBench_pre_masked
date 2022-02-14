
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xt_action_param {struct ebt_redirect_info* targinfo; } ;
struct sk_buff {int pkt_type; } ;
struct ebt_redirect_info {unsigned int target; } ;
struct TYPE_11__ {TYPE_2__* br; } ;
struct TYPE_10__ {int h_dest; } ;
struct TYPE_9__ {int dev_addr; } ;
struct TYPE_8__ {TYPE_1__* dev; } ;
struct TYPE_7__ {int dev_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct xt_action_param const*) ;
 TYPE_3__* FUNC_5 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_4, const struct xt_action_param *VAR_5)
{
 const struct ebt_redirect_info *VAR_6 = VAR_5->targinfo;

 if (FUNC_3(VAR_4, VAR_1))
  return VAR_0;

 if (FUNC_4(VAR_5) != VAR_2)

  FUNC_2(FUNC_1(VAR_4)->h_dest,
    FUNC_0(FUNC_5(VAR_5))->br->dev->dev_addr);
 else
  FUNC_2(FUNC_1(VAR_4)->h_dest, FUNC_5(VAR_5)->dev_addr);
 VAR_4->pkt_type = VAR_3;
 return VAR_6->target;
}
