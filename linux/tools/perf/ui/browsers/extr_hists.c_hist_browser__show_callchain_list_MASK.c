
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hist_browser {int show_dso; } ;
struct callchain_print_arg {scalar_t__ row_offset; } ;
struct callchain_node {int dummy; } ;
struct callchain_list {int dummy; } ;
typedef int (* print_callchain_entry_fn ) (struct hist_browser*,struct callchain_list*,char const*,int,unsigned short,struct callchain_print_arg*) ;
typedef int buf ;
typedef int bf ;
struct TYPE_2__ {scalar_t__ show_branchflag_count; } ;


 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 char* FUNC_1 (struct callchain_list*,char*,int,int ) ;
 int FUNC_2 (struct callchain_list*,int *,char*,int) ;
 int FUNC_3 (struct callchain_node*,char*,int,int ) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_5(struct hist_browser *VAR_1,
          struct callchain_node *VAR_2,
          struct callchain_list *VAR_3,
          unsigned short VAR_4, u64 VAR_5,
          bool VAR_6, int VAR_7,
          print_callchain_entry_fn VAR_8,
          struct callchain_print_arg *VAR_9)
{
 char VAR_10[1024], *VAR_11;
 char VAR_12[64], *VAR_13;
 const char *VAR_14;
 int VAR_15 = 1;

 if (VAR_9->row_offset != 0) {
  VAR_9->row_offset--;
  return 0;
 }

 VAR_11 = ((void*)0);
 VAR_13 = ((void*)0);

 VAR_14 = FUNC_1(VAR_3, VAR_10, sizeof(VAR_10),
           VAR_1->show_dso);

 if (VAR_0.show_branchflag_count) {
  FUNC_2(VAR_3, ((void*)0),
          VAR_12, sizeof(VAR_12));

  if (FUNC_0(&VAR_13, "%s%s", VAR_14, VAR_12) < 0)
   VAR_14 = "Not enough memory!";
  else
   VAR_14 = VAR_13;
 }

 if (VAR_6) {
  FUNC_3(VAR_2, VAR_12, sizeof(VAR_12),
      VAR_5);

  if (FUNC_0(&VAR_11, "%s %s", VAR_12, VAR_14) < 0)
   VAR_14 = "Not enough memory!";
  else
   VAR_14 = VAR_11;
 }

 VAR_8(VAR_1, VAR_3, VAR_14, VAR_7, VAR_4, VAR_9);
 FUNC_4(VAR_11);
 FUNC_4(VAR_13);

 return VAR_15;
}
