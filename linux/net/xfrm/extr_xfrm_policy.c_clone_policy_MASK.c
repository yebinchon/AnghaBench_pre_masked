
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_tmpl {int dummy; } ;
struct xfrm_policy {int xfrm_nr; int xfrm_vec; int family; int type; int index; int flags; int action; int if_id; int mark; int curlft; int lft; int security; int selector; } ;
struct TYPE_2__ {int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_policy*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_6 (struct net*,int ) ;
 int FUNC_7 (struct xfrm_policy*,int) ;
 struct net* FUNC_8 (struct xfrm_policy const*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_9(const struct xfrm_policy *VAR_1, int VAR_2)
{
 struct xfrm_policy *VAR_3 = FUNC_6(FUNC_8(VAR_1), VAR_0);
 struct net *VAR_4 = FUNC_8(VAR_1);

 if (VAR_3) {
  VAR_3->selector = VAR_1->selector;
  if (FUNC_2(VAR_1->security,
            &VAR_3->security)) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  VAR_3->lft = VAR_1->lft;
  VAR_3->curlft = VAR_1->curlft;
  VAR_3->mark = VAR_1->mark;
  VAR_3->if_id = VAR_1->if_id;
  VAR_3->action = VAR_1->action;
  VAR_3->flags = VAR_1->flags;
  VAR_3->xfrm_nr = VAR_1->xfrm_nr;
  VAR_3->index = VAR_1->index;
  VAR_3->type = VAR_1->type;
  VAR_3->family = VAR_1->family;
  FUNC_1(VAR_3->xfrm_vec, VAR_1->xfrm_vec,
         VAR_3->xfrm_nr*sizeof(struct xfrm_tmpl));
  FUNC_3(&VAR_4->xfrm.xfrm_policy_lock);
  FUNC_7(VAR_3, VAR_2);
  FUNC_4(&VAR_4->xfrm.xfrm_policy_lock);
  FUNC_5(VAR_3);
 }
 return VAR_3;
}
