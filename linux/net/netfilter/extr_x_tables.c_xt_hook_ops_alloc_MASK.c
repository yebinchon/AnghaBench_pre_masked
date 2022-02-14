
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct xt_table {unsigned int valid_hooks; int priority; int af; } ;
struct nf_hook_ops {size_t hooknum; int priority; int pf; int * hook; } ;
typedef int nf_hookfn ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_hook_ops* FUNC_0 (int ) ;
 int VAR_2 ;
 size_t FUNC_1 (unsigned int) ;
 struct nf_hook_ops* FUNC_2 (size_t,int,int ) ;

struct nf_hook_ops *
FUNC_3(const struct xt_table *VAR_3, nf_hookfn *VAR_4)
{
 unsigned int VAR_5 = VAR_3->valid_hooks;
 uint8_t VAR_6, VAR_7 = FUNC_1(VAR_5);
 uint8_t VAR_8;
 struct nf_hook_ops *VAR_9;

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_1);

 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < VAR_7 && VAR_5 != 0;
      VAR_5 >>= 1, ++VAR_8) {
  if (!(VAR_5 & 1))
   continue;
  VAR_9[VAR_6].hook = VAR_4;
  VAR_9[VAR_6].pf = VAR_3->af;
  VAR_9[VAR_6].hooknum = VAR_8;
  VAR_9[VAR_6].priority = VAR_3->priority;
  ++VAR_6;
 }

 return VAR_9;
}
