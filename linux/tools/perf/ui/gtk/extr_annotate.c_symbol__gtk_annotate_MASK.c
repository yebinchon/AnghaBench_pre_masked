
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct symbol {int name; } ;
struct map {TYPE_1__* dso; } ;
struct hist_browser_timer {int dummy; } ;
struct evsel {int dummy; } ;
typedef int msg ;
struct TYPE_6__ {int * notebook; int * main_window; } ;
struct TYPE_5__ {scalar_t__ annotate_warned; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,char*,int ,int *) ;
 int FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ) ;
 int VAR_11 ;
 int FUNC_9 (int ,int *,int *) ;
 int * FUNC_10 () ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int * FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 TYPE_2__* FUNC_16 (int *) ;
 int FUNC_17 (int *,struct symbol*,struct map*,struct evsel*,struct hist_browser_timer*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int * FUNC_19 () ;
 int * FUNC_20 () ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct symbol*,struct map*,struct evsel*,int ,int *,int *) ;
 int FUNC_23 (struct symbol*,struct evsel*) ;
 int FUNC_24 (struct symbol*,struct map*,int,char*,int) ;
 int FUNC_25 (char*,int ,char*) ;

__attribute__((used)) static int FUNC_26(struct symbol *VAR_14, struct map *VAR_15,
    struct evsel *VAR_16,
    struct hist_browser_timer *VAR_17)
{
 GtkWidget *VAR_18;
 GtkWidget *VAR_19;
 GtkWidget *VAR_20;
 GtkWidget *VAR_21;
 int VAR_22;

 if (VAR_15->dso->annotate_warned)
  return -1;

 VAR_22 = FUNC_22(VAR_14, VAR_15, VAR_16, 0, &VAR_10, ((void*)0));
 if (VAR_22) {
  char VAR_23[VAR_0];
  FUNC_24(VAR_14, VAR_15, VAR_22, VAR_23, sizeof(VAR_23));
  FUNC_25("Couldn't annotate %s: %s\n", VAR_14->name, VAR_23);
  return -1;
 }

 FUNC_23(VAR_14, VAR_16);

 if (FUNC_18(VAR_13)) {
  VAR_18 = VAR_13->main_window;
  VAR_19 = VAR_13->notebook;
 } else {
  GtkWidget *VAR_24;
  GtkWidget *VAR_25;
  GtkWidget *VAR_26;

  FUNC_21(VAR_7, VAR_12);
  FUNC_21(VAR_4, VAR_12);
  FUNC_21(VAR_5, VAR_12);
  FUNC_21(VAR_6, VAR_12);
  FUNC_21(VAR_8, VAR_12);

  VAR_18 = FUNC_14(VAR_3);
  FUNC_15(FUNC_4(VAR_18), "perf annotate");

  FUNC_5(VAR_18, "delete_event", VAR_11, ((void*)0));

  VAR_13 = FUNC_16(VAR_18);
  if (!VAR_13)
   return -1;

  VAR_24 = FUNC_13(VAR_1, 0);
  VAR_19 = FUNC_10();
  VAR_13->notebook = VAR_19;

  FUNC_6(FUNC_0(VAR_24), VAR_19, VAR_9, VAR_9, 0);

  VAR_25 = FUNC_19();
  if (VAR_25) {
   FUNC_6(FUNC_0(VAR_24), VAR_25,
        VAR_1, VAR_1, 0);
  }

  VAR_26 = FUNC_20();
  FUNC_6(FUNC_0(VAR_24), VAR_26, VAR_1, VAR_1, 0);

  FUNC_7(FUNC_1(VAR_18), VAR_24);
 }

 VAR_20 = FUNC_11(((void*)0), ((void*)0));
 VAR_21 = FUNC_8(VAR_14->name);

 FUNC_12(FUNC_3(VAR_20),
           VAR_2,
           VAR_2);

 FUNC_9(FUNC_2(VAR_19), VAR_20,
     VAR_21);

 FUNC_17(VAR_20, VAR_14, VAR_15, VAR_16, VAR_17);
 return 0;
}
