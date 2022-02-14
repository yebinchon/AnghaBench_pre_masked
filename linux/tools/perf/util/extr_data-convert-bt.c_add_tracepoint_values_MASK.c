
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_format_field {int dummy; } ;
struct perf_sample {int dummy; } ;
struct evsel {TYPE_2__* tp_format; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;
struct bt_ctf_event {int dummy; } ;
struct TYPE_3__ {struct tep_format_field* fields; struct tep_format_field* common_fields; } ;
struct TYPE_4__ {TYPE_1__ format; } ;


 int FUNC_0 (struct ctf_writer*,struct bt_ctf_event_class*,struct bt_ctf_event*,struct tep_format_field*,struct perf_sample*) ;

__attribute__((used)) static int FUNC_1(struct ctf_writer *VAR_0,
     struct bt_ctf_event_class *VAR_1,
     struct bt_ctf_event *VAR_2,
     struct evsel *VAR_3,
     struct perf_sample *VAR_4)
{
 struct tep_format_field *VAR_5 = VAR_3->tp_format->format.common_fields;
 struct tep_format_field *VAR_6 = VAR_3->tp_format->format.fields;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_5, VAR_4);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2,
         VAR_6, VAR_4);

 return VAR_7;
}
