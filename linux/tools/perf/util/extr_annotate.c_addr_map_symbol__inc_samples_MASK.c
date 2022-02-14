
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct addr_map_symbol {int al_addr; int map; int sym; } ;


 int FUNC_0 (int ,int ,struct evsel*,int ,struct perf_sample*) ;

int FUNC_1(struct addr_map_symbol *VAR_0, struct perf_sample *VAR_1,
     struct evsel *VAR_2)
{
 return FUNC_0(VAR_0->sym, VAR_0->map, VAR_2, VAR_0->al_addr, VAR_1);
}
