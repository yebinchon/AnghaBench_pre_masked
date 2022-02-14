
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct xt_string_info {int config; int to_offset; int from_offset; TYPE_2__ u; } ;
struct xt_action_param {struct xt_string_info* matchinfo; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_string_info *VAR_4 = VAR_3->matchinfo;
 bool VAR_5;

 VAR_5 = VAR_4->u.v1.flags & VAR_1;

 return (FUNC_0((struct sk_buff *)VAR_2, VAR_4->from_offset,
        VAR_4->to_offset, VAR_4->config)
        != VAR_0) ^ VAR_5;
}
