
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {TYPE_1__* security; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;
struct TYPE_2__ {int ctx_sid; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_state*) ;
 struct dst_entry* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_2(struct sk_buff *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_1(VAR_1);
 struct xfrm_state *VAR_3;

 if (VAR_2 == ((void*)0))
  return VAR_0;
 VAR_3 = VAR_2->xfrm;
 if (VAR_3 == ((void*)0) || !FUNC_0(VAR_3))
  return VAR_0;

 return VAR_3->security->ctx_sid;
}
