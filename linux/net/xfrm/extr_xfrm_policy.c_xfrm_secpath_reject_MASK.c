
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* type; } ;
struct sk_buff {int dummy; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct flowi {int dummy; } ;
struct TYPE_2__ {int (* reject ) (struct xfrm_state*,struct sk_buff*,struct flowi const*) ;} ;


 struct sec_path* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct xfrm_state*,struct sk_buff*,struct flowi const*) ;

__attribute__((used)) static inline int
FUNC_2(int VAR_0, struct sk_buff *VAR_1, const struct flowi *VAR_2)
{
 struct sec_path *VAR_3 = FUNC_0(VAR_1);
 struct xfrm_state *VAR_4;

 if (!VAR_3 || VAR_0 < 0 || VAR_0 >= VAR_3->len)
  return 0;
 VAR_4 = VAR_3->xvec[VAR_0];
 if (!VAR_4->type->reject)
  return 0;
 return VAR_4->type->reject(VAR_4, VAR_1, VAR_2);
}
