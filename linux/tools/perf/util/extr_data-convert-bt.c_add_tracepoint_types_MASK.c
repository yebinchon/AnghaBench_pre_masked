
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_format_field {int dummy; } ;
struct evsel {TYPE_2__* tp_format; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;
struct TYPE_3__ {struct tep_format_field* fields; struct tep_format_field* common_fields; } ;
struct TYPE_4__ {TYPE_1__ format; } ;


 int FUNC_0 (struct ctf_writer*,struct tep_format_field*,struct bt_ctf_event_class*) ;

__attribute__((used)) static int FUNC_1(struct ctf_writer *VAR_0,
    struct evsel *VAR_1,
    struct bt_ctf_event_class *VAR_2)
{
 struct tep_format_field *VAR_3 = VAR_1->tp_format->format.common_fields;
 struct tep_format_field *VAR_4 = VAR_1->tp_format->format.fields;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_2);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2);

 return VAR_5;
}
