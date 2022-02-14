
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_hook_ops {scalar_t__ priority; int priv; int hook; } ;
typedef struct nf_hook_entries {unsigned int num_hook_entries; TYPE_1__* hooks; } const nf_hook_entries ;
struct TYPE_2__ {int priv; int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_hook_entries const* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 struct nf_hook_entries const* FUNC_1 (unsigned int) ;
 struct nf_hook_ops VAR_3 ;
 struct nf_hook_ops** FUNC_2 (struct nf_hook_entries const*) ;

__attribute__((used)) static struct nf_hook_entries *
FUNC_3(const struct nf_hook_entries *VAR_4,
       const struct nf_hook_ops *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 struct nf_hook_ops **VAR_10 = ((void*)0);
 struct nf_hook_ops **VAR_11;
 struct nf_hook_entries *VAR_12;
 bool VAR_13 = 0;

 VAR_7 = 1;
 VAR_9 = VAR_4 ? VAR_4->num_hook_entries : 0;

 if (VAR_4) {
  VAR_10 = FUNC_2(VAR_4);

  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
   if (VAR_10[VAR_6] != &VAR_3)
    VAR_7++;
  }
 }

 if (VAR_7 > VAR_2)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_1(VAR_7);
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_2(VAR_12);

 VAR_6 = 0;
 VAR_8 = 0;
 while (VAR_6 < VAR_9) {
  if (VAR_10[VAR_6] == &VAR_3) {
   ++VAR_6;
   continue;
  }

  if (VAR_13 || VAR_5->priority > VAR_10[VAR_6]->priority) {
   VAR_11[VAR_8] = (void *)VAR_10[VAR_6];
   VAR_12->hooks[VAR_8] = VAR_4->hooks[VAR_6];
   VAR_6++;
  } else {
   VAR_11[VAR_8] = (void *)VAR_5;
   VAR_12->hooks[VAR_8].hook = VAR_5->hook;
   VAR_12->hooks[VAR_8].priv = VAR_5->priv;
   VAR_13 = 1;
  }
  VAR_8++;
 }

 if (!VAR_13) {
  VAR_11[VAR_8] = (void *)VAR_5;
  VAR_12->hooks[VAR_8].hook = VAR_5->hook;
  VAR_12->hooks[VAR_8].priv = VAR_5->priv;
 }

 return VAR_12;
}
