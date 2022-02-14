
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int dummy; } ;
struct hist_browser_timer {int dummy; } ;
struct hist_browser {struct annotation_options* annotation_opts; int title; struct perf_env* env; struct hist_browser_timer* hbt; } ;
struct evsel {int dummy; } ;
struct annotation_options {int dummy; } ;


 int FUNC_0 (struct evsel*) ;
 struct hist_browser* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct hist_browser *
FUNC_2(struct evsel *VAR_1,
   struct hist_browser_timer *VAR_2,
   struct perf_env *VAR_3,
   struct annotation_options *VAR_4)
{
 struct hist_browser *VAR_5 = FUNC_1(FUNC_0(VAR_1));

 if (VAR_5) {
  VAR_5->hbt = VAR_2;
  VAR_5->env = VAR_3;
  VAR_5->title = VAR_0;
  VAR_5->annotation_opts = VAR_4;
 }
 return VAR_5;
}
