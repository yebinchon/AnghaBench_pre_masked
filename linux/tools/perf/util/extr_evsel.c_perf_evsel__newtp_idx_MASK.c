
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct perf_event_attr {int sample_type; int sample_period; int config; int type; } ;
struct evsel {int name; TYPE_1__* tp_format; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 struct evsel* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,char const*,char const*) ;
 int FUNC_4 (struct perf_event_attr*) ;
 int FUNC_5 (struct evsel*,struct perf_event_attr*,int) ;
 int FUNC_6 (struct evsel*) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__* FUNC_7 (char const*,char const*) ;
 struct evsel* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

struct evsel *FUNC_10(const char *VAR_7, const char *VAR_8, int VAR_9)
{
 struct evsel *VAR_10 = FUNC_8(VAR_6.size);
 int VAR_11 = -VAR_0;

 if (VAR_10 == ((void*)0)) {
  goto out_err;
 } else {
  struct perf_event_attr VAR_12 = {
   .type = VAR_5,
   .sample_type = (VAR_3 | VAR_4 |
       VAR_1 | VAR_2),
  };

  if (FUNC_3(&VAR_10->name, "%s:%s", VAR_7, VAR_8) < 0)
   goto out_free;

  VAR_10->tp_format = FUNC_7(VAR_7, VAR_8);
  if (FUNC_1(VAR_10->tp_format)) {
   VAR_11 = FUNC_2(VAR_10->tp_format);
   goto out_free;
  }

  FUNC_4(&VAR_12);
  VAR_12.config = VAR_10->tp_format->id;
  VAR_12.sample_period = 1;
  FUNC_5(VAR_10, &VAR_12, VAR_9);
 }

 return VAR_10;

out_free:
 FUNC_9(&VAR_10->name);
 FUNC_6(VAR_10);
out_err:
 return FUNC_0(VAR_11);
}
