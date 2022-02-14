
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_field {int dummy; } ;
struct tep_format_field {int dummy; } ;
struct evsel {int needs_swap; } ;


 struct tep_format_field* FUNC_0 (struct evsel*,char const*) ;
 int FUNC_1 (struct tp_field*,struct tep_format_field*,int ) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_0,
       struct tp_field *VAR_1,
       const char *VAR_2)
{
 struct tep_format_field *VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3 == ((void*)0))
  return -1;

 return FUNC_1(VAR_1, VAR_3, VAR_0->needs_swap);
}
