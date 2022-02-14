
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_event_attr {int dummy; } ;
struct TYPE_4__ {int sample_type; int sample_period; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct evsel {char const* unit; int scale; TYPE_2__ core; } ;
struct TYPE_6__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evsel*,struct perf_event_attr*,int) ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 scalar_t__ FUNC_2 (struct evsel*) ;
 TYPE_3__ VAR_4 ;
 struct evsel* FUNC_3 (int ) ;

struct evsel *FUNC_4(struct perf_event_attr *VAR_5, int VAR_6)
{
 struct evsel *VAR_7 = FUNC_3(VAR_4.size);

 if (!VAR_7)
  return ((void*)0);
 FUNC_0(VAR_7, VAR_5, VAR_6);

 if (FUNC_1(VAR_7)) {
  VAR_7->core.attr.sample_type |= (VAR_2 | VAR_3 |
         VAR_0 | VAR_1),
  VAR_7->core.attr.sample_period = 1;
 }

 if (FUNC_2(VAR_7)) {




  static const char *VAR_8 = "msec";

  VAR_7->unit = VAR_8;
  VAR_7->scale = 1e-6;
 }

 return VAR_7;
}
