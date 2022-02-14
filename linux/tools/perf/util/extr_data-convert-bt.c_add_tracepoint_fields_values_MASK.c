
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {struct tep_format_field* next; } ;
struct perf_sample {int dummy; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;
struct bt_ctf_event {int dummy; } ;


 int FUNC_0 (struct ctf_writer*,struct bt_ctf_event_class*,struct bt_ctf_event*,struct perf_sample*,struct tep_format_field*) ;

__attribute__((used)) static int FUNC_1(struct ctf_writer *VAR_0,
     struct bt_ctf_event_class *VAR_1,
     struct bt_ctf_event *VAR_2,
     struct tep_format_field *VAR_3,
     struct perf_sample *VAR_4)
{
 struct tep_format_field *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4,
    VAR_5);
  if (VAR_6)
   return -1;
 }
 return 0;
}
