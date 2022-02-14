
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int dummy; } ;
struct evsel {int tp_format; } ;


 struct tep_format_field* FUNC_0 (int ,char const*) ;

struct tep_format_field *FUNC_1(struct evsel *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0->tp_format, VAR_1);
}
