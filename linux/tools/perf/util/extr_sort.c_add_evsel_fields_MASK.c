
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_format_field {struct tep_format_field* next; } ;
struct evsel {TYPE_2__* tp_format; } ;
struct TYPE_3__ {struct tep_format_field* fields; } ;
struct TYPE_4__ {TYPE_1__ format; } ;


 int FUNC_0 (struct evsel*,struct tep_format_field*,int,int) ;

__attribute__((used)) static int FUNC_1(struct evsel *VAR_0, bool VAR_1, int VAR_2)
{
 int VAR_3;
 struct tep_format_field *VAR_4;

 VAR_4 = VAR_0->tp_format->format.fields;
 while (VAR_4) {
  VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_4 = VAR_4->next;
 }
 return 0;
}
