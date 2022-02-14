
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int in; } ;
struct xt_tee_tginfo {TYPE_2__ gw; TYPE_1__* priv; } ;
struct xt_action_param {struct xt_tee_tginfo* targinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int oif; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int *,int) ;
 int FUNC_1 (struct xt_action_param const*) ;
 int FUNC_2 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_tee_tginfo *VAR_3 = VAR_2->targinfo;
 int VAR_4 = VAR_3->priv ? VAR_3->priv->oif : 0;

 FUNC_0(FUNC_2(VAR_2), VAR_1, FUNC_1(VAR_2), &VAR_3->gw.in, VAR_4);

 return VAR_0;
}
