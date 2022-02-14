
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map; int sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct hist_browser_timer {int dummy; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int ,int ,struct evsel*,struct hist_browser_timer*) ;

int FUNC_1(struct hist_entry *VAR_0,
        struct evsel *VAR_1,
        struct hist_browser_timer *VAR_2)
{
 return FUNC_0(VAR_0->ms.sym, VAR_0->ms.map, VAR_1, VAR_2);
}
