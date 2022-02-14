
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int primary_if; } ;
struct batadv_hard_iface {int refcount; } ;


 int FUNC_0 (int *) ;
 struct batadv_hard_iface* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct batadv_hard_iface *
FUNC_4(struct batadv_priv *VAR_0)
{
 struct batadv_hard_iface *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->primary_if);
 if (!VAR_1)
  goto out;

 if (!FUNC_0(&VAR_1->refcount))
  VAR_1 = ((void*)0);

out:
 FUNC_3();
 return VAR_1;
}
