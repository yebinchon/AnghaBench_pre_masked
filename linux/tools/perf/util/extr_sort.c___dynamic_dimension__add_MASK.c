
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int dummy; } ;
struct hpp_dynamic_entry {int raw_trace; int hpp; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 struct hpp_dynamic_entry* FUNC_0 (struct evsel*,struct tep_format_field*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_1,
        struct tep_format_field *VAR_2,
        bool VAR_3, int VAR_4)
{
 struct hpp_dynamic_entry *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->raw_trace = VAR_3;

 FUNC_1(&VAR_5->hpp);
 return 0;
}
