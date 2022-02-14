
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_symbol {int map; int sym; } ;
struct hist_browser_timer {int dummy; } ;
struct evsel {int dummy; } ;
struct annotation_options {int dummy; } ;


 int FUNC_0 (int ,int ,struct evsel*,struct hist_browser_timer*,struct annotation_options*) ;

int FUNC_1(struct map_symbol *VAR_0, struct evsel *VAR_1,
        struct hist_browser_timer *VAR_2,
        struct annotation_options *VAR_3)
{
 return FUNC_0(VAR_0->sym, VAR_0->map, VAR_1, VAR_2, VAR_3);
}
