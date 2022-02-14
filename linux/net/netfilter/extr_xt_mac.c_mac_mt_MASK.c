
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_mac_info {int invert; int srcaddr; } ;
struct xt_action_param {struct xt_mac_info* matchinfo; } ;
struct sk_buff {scalar_t__ head; scalar_t__ data; TYPE_1__* dev; } ;
struct TYPE_4__ {int h_source; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_mac_info *VAR_4 = VAR_3->matchinfo;
 bool VAR_5;

 if (VAR_2->dev == ((void*)0) || VAR_2->dev->type != VAR_0)
  return 0;
 if (FUNC_2(VAR_2) < VAR_2->head)
  return 0;
 if (FUNC_2(VAR_2) + VAR_1 > VAR_2->data)
  return 0;
 VAR_5 = FUNC_1(FUNC_0(VAR_2)->h_source, VAR_4->srcaddr);
 VAR_5 ^= VAR_4->invert;
 return VAR_5;
}
