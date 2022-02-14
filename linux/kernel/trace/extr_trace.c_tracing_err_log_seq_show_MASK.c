
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {char** errs; size_t type; int pos; int ts; } ;
struct tracing_log_err {TYPE_1__ info; int cmd; int loc; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,...) ;
 int FUNC_2 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct tracing_log_err *VAR_3 = VAR_2;

 if (VAR_3) {
  const char *VAR_4 = VAR_3->info.errs[VAR_3->info.type];
  u64 VAR_5 = VAR_3->info.ts;
  u32 VAR_6;

  VAR_6 = FUNC_0(VAR_5, VAR_0);
  FUNC_1(VAR_1, "[%5llu.%06u] %s%s", VAR_5, VAR_6 / 1000,
      VAR_3->loc, VAR_4);
  FUNC_1(VAR_1, "%s", VAR_3->cmd);
  FUNC_2(VAR_1, VAR_3->info.pos);
 }

 return 0;
}
