
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_format_field {int dummy; } ;
struct tep_event {int dummy; } ;
struct pyrf_event {struct evsel* evsel; } ;
struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {struct tep_event* tp_format; TYPE_2__ core; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 struct tep_format_field* FUNC_2 (struct tep_event*,char const*) ;
 struct tep_event* FUNC_3 (int ) ;
 int * FUNC_4 (struct pyrf_event*,struct tep_format_field*) ;

__attribute__((used)) static PyObject*
FUNC_5(struct pyrf_event *VAR_0, PyObject *VAR_1)
{
 const char *VAR_2 = FUNC_1(FUNC_0(VAR_1));
 struct evsel *VAR_3 = VAR_0->evsel;
 struct tep_format_field *VAR_4;

 if (!VAR_3->tp_format) {
  struct tep_event *VAR_5;

  VAR_5 = FUNC_3(VAR_3->core.attr.config);
  if (!VAR_5)
   return ((void*)0);

  VAR_3->tp_format = VAR_5;
 }

 VAR_4 = FUNC_2(VAR_3->tp_format, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 return FUNC_4(VAR_0, VAR_4);
}
