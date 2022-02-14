
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {char* name; } ;
struct hpp_dynamic_entry {size_t dynamic_len; scalar_t__ raw_trace; struct tep_format_field* field; } ;
struct hist_entry {char* trace_output; } ;


 char* FUNC_0 (struct hist_entry*) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct hpp_dynamic_entry *VAR_0,
          struct hist_entry *VAR_1)
{
 char *VAR_2, *VAR_3;
 struct tep_format_field *VAR_4 = VAR_0->field;
 size_t VAR_5;
 bool VAR_6 = 0;

 if (VAR_0->raw_trace)
  return;


 if (!VAR_1->trace_output)
  VAR_1->trace_output = FUNC_0(VAR_1);

 VAR_5 = FUNC_2(VAR_4->name);
 VAR_2 = VAR_1->trace_output;

 while (VAR_2) {
  VAR_3 = FUNC_1(VAR_2, ' ');
  if (VAR_3 == ((void*)0)) {
   VAR_6 = 1;
   VAR_3 = VAR_2 + FUNC_2(VAR_2);
  }

  if (!FUNC_3(VAR_2, VAR_4->name, VAR_5)) {
   size_t VAR_7;

   VAR_2 += VAR_5 + 1;
   VAR_7 = VAR_3 - VAR_2;

   if (VAR_7 > VAR_0->dynamic_len)
    VAR_0->dynamic_len = VAR_7;
   break;
  }

  if (VAR_6)
   VAR_2 = ((void*)0);
  else
   VAR_2 = VAR_3 + 1;
 }
}
