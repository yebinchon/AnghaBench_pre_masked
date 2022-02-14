
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int dummy; } ;
struct hist_browser {int dummy; } ;
struct callchain_print_arg {int printed; int * fp; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hist_browser*,struct hist_entry*,int,int ,int ,struct callchain_print_arg*,int ) ;

__attribute__((used)) static int FUNC_1(struct hist_browser *VAR_2,
        struct hist_entry *VAR_3, FILE *VAR_4,
        int VAR_5)
{
 struct callchain_print_arg VAR_6 = {
  .fp = VAR_4,
 };

 FUNC_0(VAR_2, VAR_3, VAR_5, 0,
         VAR_1, &VAR_6,
         VAR_0);
 return VAR_6.printed;
}
