
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tep_format_field {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct evsel {int tp_format; TYPE_2__ core; } ;
struct evlist {int dummy; } ;
struct TYPE_6__ {int raw_trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct evsel*,struct tep_format_field*,int,int) ;
 int FUNC_1 (struct evlist*,int,int) ;
 int FUNC_2 (struct evlist*,char*,int,int) ;
 int FUNC_3 (struct evsel*,int,int) ;
 struct evsel* FUNC_4 (struct evlist*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char**,char**,char**) ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*) ;
 TYPE_3__ VAR_4 ;
 struct tep_format_field* FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct evlist *VAR_5, const char *VAR_6,
        int VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 struct evsel *VAR_12;
 struct tep_format_field *VAR_13;
 bool VAR_14 = VAR_4.raw_trace;
 int VAR_15 = 0;

 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 if (FUNC_6(VAR_8, &VAR_9, &VAR_10, &VAR_11) < 0) {
  VAR_15 = -VAR_0;
  goto out;
 }

 if (VAR_11) {
  if (FUNC_8(VAR_11, "raw")) {
   FUNC_7("unsupported field option %s\n", VAR_11);
   VAR_15 = -VAR_0;
   goto out;
  }
  VAR_14 = 1;
 }

 if (!FUNC_8(VAR_10, "trace_fields")) {
  VAR_15 = FUNC_1(VAR_5, VAR_14, VAR_7);
  goto out;
 }

 if (VAR_9 == ((void*)0)) {
  VAR_15 = FUNC_2(VAR_5, VAR_10, VAR_14, VAR_7);
  goto out;
 }

 VAR_12 = FUNC_4(VAR_5, VAR_9);
 if (VAR_12 == ((void*)0)) {
  FUNC_7("Cannot find event: %s\n", VAR_9);
  VAR_15 = -VAR_1;
  goto out;
 }

 if (VAR_12->core.attr.type != VAR_3) {
  FUNC_7("%s is not a tracepoint event\n", VAR_9);
  VAR_15 = -VAR_0;
  goto out;
 }

 if (!FUNC_8(VAR_10, "*")) {
  VAR_15 = FUNC_3(VAR_12, VAR_14, VAR_7);
 } else {
  VAR_13 = FUNC_10(VAR_12->tp_format, VAR_10);
  if (VAR_13 == ((void*)0)) {
   FUNC_7("Cannot find event field for %s.%s\n",
     VAR_9, VAR_10);
   return -VAR_1;
  }

  VAR_15 = FUNC_0(VAR_12, VAR_13, VAR_14, VAR_7);
 }

out:
 FUNC_5(VAR_8);
 return VAR_15;
}
