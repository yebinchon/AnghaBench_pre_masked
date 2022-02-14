
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int m; int v; } ;
struct xfrm_policy {scalar_t__ if_id; int security; TYPE_1__ mark; int selector; int family; } ;
struct sock {int sk_mark; int * sk_policy; } ;
struct flowi {int flowi_secid; } ;


 struct xfrm_policy* FUNC_0 (int) ;
 int VAR_0 ;
 struct xfrm_policy* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct xfrm_policy*) ;
 int FUNC_6 (int *,struct flowi const*,int ) ;

__attribute__((used)) static struct xfrm_policy *FUNC_7(const struct sock *VAR_1, int VAR_2,
       const struct flowi *VAR_3,
       u16 VAR_4, u32 VAR_5)
{
 struct xfrm_policy *VAR_6;

 FUNC_2();
 again:
 VAR_6 = FUNC_1(VAR_1->sk_policy[VAR_2]);
 if (VAR_6 != ((void*)0)) {
  bool VAR_7;
  int VAR_8 = 0;

  if (VAR_6->family != VAR_4) {
   VAR_6 = ((void*)0);
   goto out;
  }

  VAR_7 = FUNC_6(&VAR_6->selector, VAR_3, VAR_4);
  if (VAR_7) {
   if ((VAR_1->sk_mark & VAR_6->mark.m) != VAR_6->mark.v ||
       VAR_6->if_id != VAR_5) {
    VAR_6 = ((void*)0);
    goto out;
   }
   VAR_8 = FUNC_4(VAR_6->security,
            VAR_3->flowi_secid,
            VAR_2);
   if (!VAR_8) {
    if (!FUNC_5(VAR_6))
     goto again;
   } else if (VAR_8 == -VAR_0) {
    VAR_6 = ((void*)0);
   } else {
    VAR_6 = FUNC_0(VAR_8);
   }
  } else
   VAR_6 = ((void*)0);
 }
out:
 FUNC_3();
 return VAR_6;
}
