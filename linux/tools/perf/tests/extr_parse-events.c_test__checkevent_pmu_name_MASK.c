
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int config; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 scalar_t__ PERF_TYPE_RAW ;
 int TEST_ASSERT_VAL (char*,int) ;
 struct evsel* evlist__first (struct evlist*) ;
 int perf_evsel__name (struct evsel*) ;
 struct evsel* perf_evsel__next (struct evsel*) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static int test__checkevent_pmu_name(struct evlist *evlist)
{
 struct evsel *evsel = evlist__first(evlist);


 TEST_ASSERT_VAL("wrong number of entries", 2 == evlist->core.nr_entries);
 TEST_ASSERT_VAL("wrong type", PERF_TYPE_RAW == evsel->core.attr.type);
 TEST_ASSERT_VAL("wrong config", 1 == evsel->core.attr.config);
 TEST_ASSERT_VAL("wrong name", !strcmp(perf_evsel__name(evsel), "krava"));


 evsel = perf_evsel__next(evsel);
 TEST_ASSERT_VAL("wrong number of entries", 2 == evlist->core.nr_entries);
 TEST_ASSERT_VAL("wrong type", PERF_TYPE_RAW == evsel->core.attr.type);
 TEST_ASSERT_VAL("wrong config", 2 == evsel->core.attr.config);
 TEST_ASSERT_VAL("wrong name",
   !strcmp(perf_evsel__name(evsel), "cpu/config=2/u"));

 return 0;
}
