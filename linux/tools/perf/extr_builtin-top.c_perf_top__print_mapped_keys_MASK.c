
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symbol {char* name; } ;
struct TYPE_10__ {int min_pcnt; } ;
struct perf_top {int delay_secs; int print_entries; int count_filter; scalar_t__ zero; scalar_t__ hide_user_symbols; scalar_t__ hide_kernel_symbols; TYPE_5__ annotation_opts; int sym_evsel; TYPE_4__* evlist; TYPE_2__* sym_filter_entry; } ;
struct TYPE_8__ {int nr_entries; } ;
struct TYPE_9__ {TYPE_3__ core; } ;
struct TYPE_6__ {struct symbol* sym; } ;
struct TYPE_7__ {TYPE_1__ ms; } ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct perf_top *VAR_1)
{
 char *VAR_2 = ((void*)0);

 if (VAR_1->sym_filter_entry) {
  struct symbol *VAR_3 = VAR_1->sym_filter_entry->ms.sym;
  VAR_2 = VAR_3->name;
 }

 FUNC_0(VAR_0, "\nMapped keys:\n");
 FUNC_0(VAR_0, "\t[d]     display refresh delay.             \t(%d)\n", VAR_1->delay_secs);
 FUNC_0(VAR_0, "\t[e]     display entries (lines).           \t(%d)\n", VAR_1->print_entries);

 if (VAR_1->evlist->core.nr_entries > 1)
  FUNC_0(VAR_0, "\t[E]     active event counter.              \t(%s)\n", FUNC_1(VAR_1->sym_evsel));

 FUNC_0(VAR_0, "\t[f]     profile display filter (count).    \t(%d)\n", VAR_1->count_filter);

 FUNC_0(VAR_0, "\t[F]     annotate display filter (percent). \t(%d%%)\n", VAR_1->annotation_opts.min_pcnt);
 FUNC_0(VAR_0, "\t[s]     annotate symbol.                   \t(%s)\n", VAR_2?: "NULL");
 FUNC_0(VAR_0, "\t[S]     stop annotation.\n");

 FUNC_0(VAR_0,
  "\t[K]     hide kernel symbols.             \t(%s)\n",
  VAR_1->hide_kernel_symbols ? "yes" : "no");
 FUNC_0(VAR_0,
  "\t[U]     hide user symbols.               \t(%s)\n",
  VAR_1->hide_user_symbols ? "yes" : "no");
 FUNC_0(VAR_0, "\t[z]     toggle sample zeroing.             \t(%d)\n", VAR_1->zero ? 1 : 0);
 FUNC_0(VAR_0, "\t[qQ]    quit.\n");
}
