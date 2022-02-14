
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct machine {int dummy; } ;
struct intel_pt_cache_entry {int dummy; } ;
struct dso {int auxtrace_cache; } ;
struct auxtrace_cache {int dummy; } ;


 struct intel_pt_cache_entry* FUNC_0 (int ,int ) ;
 struct auxtrace_cache* FUNC_1 (struct dso*,struct machine*) ;

__attribute__((used)) static struct intel_pt_cache_entry *
FUNC_2(struct dso *VAR_0, struct machine *VAR_1, u64 VAR_2)
{
 struct auxtrace_cache *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_0->auxtrace_cache, VAR_2);
}
