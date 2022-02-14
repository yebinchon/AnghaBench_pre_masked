
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_browser {int show_dso; } ;
struct callchain_list {int dummy; } ;
typedef int bf ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 scalar_t__ FUNC_0 (char**,char*,char const*,...) ;
 char* FUNC_1 (struct callchain_list*,char*,int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static char *FUNC_2(struct hist_browser *VAR_1,
      struct callchain_list *VAR_2,
      char *VAR_3, char *VAR_4)
{
 char VAR_5[1024];
 const char *VAR_6;
 char *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_5),
           VAR_1->show_dso);
 if (VAR_4) {
  if (FUNC_0(&VAR_7, "%s%s%s", VAR_4,
        VAR_0.field_sep ?: ";", VAR_6) < 0)
   VAR_7 = ((void*)0);
 } else {
  if (VAR_3) {
   if (FUNC_0(&VAR_7, "%s %s", VAR_3, VAR_6) < 0)
    VAR_7 = ((void*)0);
  } else {
   if (FUNC_0(&VAR_7, "%s", VAR_6) < 0)
    VAR_7 = ((void*)0);
  }
 }
 return VAR_7;
}
