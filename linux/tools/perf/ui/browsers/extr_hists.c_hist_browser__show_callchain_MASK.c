
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int period; } ;
struct hist_entry {int sorted_chain; TYPE_2__ stat; TYPE_1__* stat_acc; int hists; } ;
struct hist_browser {struct hist_entry* he_selection; } ;
struct callchain_print_arg {scalar_t__ is_current_entry; } ;
typedef int print_callchain_entry_fn ;
typedef int check_output_full_fn ;
struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_7__ {scalar_t__ cumulate_callchain; } ;
struct TYPE_5__ {int period; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (struct hist_browser*,int *,unsigned short,int ,int ,int ,struct callchain_print_arg*,int ) ;
 int FUNC_1 (struct hist_browser*,int *,unsigned short,int ,int ,int ,struct callchain_print_arg*,int ) ;
 int FUNC_2 (struct hist_browser*,int *,int,unsigned short,int ,int ,int ,struct callchain_print_arg*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct hist_browser *VAR_4,
     struct hist_entry *VAR_5, int VAR_6,
     unsigned short VAR_7,
     print_callchain_entry_fn VAR_8,
     struct callchain_print_arg *VAR_9,
     check_output_full_fn VAR_10)
{
 u64 VAR_11 = FUNC_3(VAR_5->hists);
 u64 VAR_12;
 int VAR_13;

 if (VAR_3.cumulate_callchain)
  VAR_12 = VAR_5->stat_acc->period;
 else
  VAR_12 = VAR_5->stat.period;

 if (VAR_2.mode == VAR_0) {
  VAR_13 = FUNC_0(VAR_4,
      &VAR_5->sorted_chain, VAR_7,
      VAR_11, VAR_12, VAR_8, VAR_9,
      VAR_10);
 } else if (VAR_2.mode == VAR_1) {
  VAR_13 = FUNC_1(VAR_4,
      &VAR_5->sorted_chain, VAR_7,
      VAR_11, VAR_12, VAR_8, VAR_9,
      VAR_10);
 } else {
  VAR_13 = FUNC_2(VAR_4,
      &VAR_5->sorted_chain, VAR_6, VAR_7,
      VAR_11, VAR_12, VAR_8, VAR_9,
      VAR_10);
 }

 if (VAR_9->is_current_entry)
  VAR_4->he_selection = VAR_5;

 return VAR_13;
}
