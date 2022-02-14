
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgdtor_param {struct xt_tee_tginfo* targinfo; int net; } ;
struct xt_tee_tginfo {TYPE_1__* priv; } ;
struct tee_net {int lock; } ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tee_net* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(const struct xt_tgdtor_param *VAR_2)
{
 struct tee_net *VAR_3 = FUNC_4(VAR_2->net, VAR_0);
 struct xt_tee_tginfo *VAR_4 = VAR_2->targinfo;

 if (VAR_4->priv) {
  FUNC_2(&VAR_3->lock);
  FUNC_1(&VAR_4->priv->list);
  FUNC_3(&VAR_3->lock);
  FUNC_0(VAR_4->priv);
 }
 FUNC_5(&VAR_1);
}
