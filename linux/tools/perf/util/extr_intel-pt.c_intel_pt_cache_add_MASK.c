
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct machine {int dummy; } ;
struct intel_pt_insn {int buf; int rel; int length; int branch; int op; } ;
struct intel_pt_cache_entry {int entry; int insn; int rel; int length; int branch; int op; void* byte_cnt; void* insn_cnt; } ;
struct dso {int dummy; } ;
struct auxtrace_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auxtrace_cache*,void*,int *) ;
 struct intel_pt_cache_entry* FUNC_1 (struct auxtrace_cache*) ;
 int FUNC_2 (struct auxtrace_cache*,struct intel_pt_cache_entry*) ;
 struct auxtrace_cache* FUNC_3 (struct dso*,struct machine*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dso *VAR_2, struct machine *VAR_3,
         u64 VAR_4, u64 VAR_5, u64 VAR_6,
         struct intel_pt_insn *VAR_7)
{
 struct auxtrace_cache *VAR_8 = FUNC_3(VAR_2, VAR_3);
 struct intel_pt_cache_entry *VAR_9;
 int VAR_10;

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->insn_cnt = VAR_5;
 VAR_9->byte_cnt = VAR_6;
 VAR_9->op = VAR_7->op;
 VAR_9->branch = VAR_7->branch;
 VAR_9->length = VAR_7->length;
 VAR_9->rel = VAR_7->rel;
 FUNC_4(VAR_9->insn, VAR_7->buf, VAR_1);

 VAR_10 = FUNC_0(VAR_8, VAR_4, &VAR_9->entry);
 if (VAR_10)
  FUNC_2(VAR_8, VAR_9);

 return VAR_10;
}
