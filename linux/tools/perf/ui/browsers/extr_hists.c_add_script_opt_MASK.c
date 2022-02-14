
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct popup_action {scalar_t__ time; } ;
struct hist_entry {scalar_t__ time; } ;
struct hist_browser {int dummy; } ;
struct evsel {int dummy; } ;
struct TYPE_2__ {scalar_t__ time_quantum; } ;


 int FUNC_0 (struct hist_browser*,struct popup_action*,char**,struct thread*,struct symbol*,struct evsel*,char*) ;
 struct hist_entry* FUNC_1 (struct hist_browser*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct hist_browser *VAR_2,
        struct popup_action *VAR_3, char **VAR_4,
        struct thread *VAR_5, struct symbol *VAR_6,
        struct evsel *VAR_7)
{
 int VAR_8, VAR_9;
 struct hist_entry *VAR_10;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, "");

 VAR_10 = FUNC_1(VAR_2);
 if (VAR_0 && FUNC_3(VAR_0, "time")) {
  char VAR_11[128];

  VAR_4++;
  VAR_3++;
  VAR_9 = FUNC_2(VAR_11, " in ");
  VAR_9 += FUNC_4(VAR_10->time, VAR_11 + VAR_9,
            sizeof VAR_11 - VAR_9);
  VAR_9 += FUNC_2(VAR_11 + VAR_9, "-");
  FUNC_4(VAR_10->time + VAR_1.time_quantum,
              VAR_11 + VAR_9, sizeof VAR_11 - VAR_9);
  VAR_8 += FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_11);
  VAR_3->time = VAR_10->time;
 }
 return VAR_8;
}
