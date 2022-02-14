
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct intel_pt_cache_entry {int dummy; } ;
struct dso {struct auxtrace_cache* auxtrace_cache; } ;
struct auxtrace_cache {int dummy; } ;


 struct auxtrace_cache* FUNC_0 (unsigned int,int,int) ;
 unsigned int FUNC_1 (struct dso*,struct machine*) ;

__attribute__((used)) static struct auxtrace_cache *FUNC_2(struct dso *VAR_0,
          struct machine *VAR_1)
{
 struct auxtrace_cache *VAR_2;
 unsigned int VAR_3;

 if (VAR_0->auxtrace_cache)
  return VAR_0->auxtrace_cache;

 VAR_3 = FUNC_1(VAR_0, VAR_1);


 VAR_2 = FUNC_0(VAR_3, sizeof(struct intel_pt_cache_entry), 200);

 VAR_0->auxtrace_cache = VAR_2;

 return VAR_2;
}
