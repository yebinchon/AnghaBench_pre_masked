
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int ms; } ;
struct hist_browser_timer {int dummy; } ;
struct evsel {int dummy; } ;
struct annotation_options {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct evsel*,struct hist_browser_timer*,struct annotation_options*) ;

int FUNC_3(struct hist_entry *VAR_0, struct evsel *VAR_1,
        struct hist_browser_timer *VAR_2,
        struct annotation_options *VAR_3)
{

 FUNC_1();
 FUNC_0(0, 0, 0);

 return FUNC_2(&VAR_0->ms, VAR_1, VAR_2, VAR_3);
}
