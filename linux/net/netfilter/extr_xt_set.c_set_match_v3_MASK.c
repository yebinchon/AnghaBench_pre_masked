
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int index; int dim; } ;
struct TYPE_8__ {scalar_t__ op; int value; } ;
struct TYPE_7__ {scalar_t__ op; int value; } ;
struct xt_set_info_match_v3 {TYPE_3__ match_set; TYPE_2__ bytes; TYPE_1__ packets; int flags; } ;
struct xt_action_param {struct xt_set_info_match_v3* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int cmdflags; } ;


 int FUNC_0 (TYPE_4__,int ,int ,int,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sk_buff const*,struct xt_action_param*,TYPE_4__*,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_set_info_match_v3 *VAR_7 = VAR_6->matchinfo;

 FUNC_0(VAR_4, FUNC_2(VAR_6), VAR_7->match_set.dim,
  VAR_7->match_set.flags, VAR_7->flags, VAR_3,
  VAR_7->packets.value, VAR_7->bytes.value,
  VAR_7->packets.op, VAR_7->bytes.op);

 if (VAR_7->packets.op != VAR_0 ||
     VAR_7->bytes.op != VAR_0)
  VAR_4.cmdflags |= VAR_1;

 return FUNC_1(VAR_7->match_set.index, VAR_5, VAR_6, &VAR_4,
    VAR_7->match_set.flags & VAR_2);
}
