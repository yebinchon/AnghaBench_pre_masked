
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {struct tep_format_field* next; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 struct tep_format_field** FUNC_1 (int) ;

__attribute__((used)) static struct tep_format_field **
FUNC_2(const char *VAR_0, const char *VAR_1,
   int VAR_2, struct tep_format_field *VAR_3)
{
 struct tep_format_field **VAR_4;
 struct tep_format_field *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * (VAR_2 + 1));
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next) {
  VAR_4[VAR_6++] = VAR_5;
  if (VAR_6 == VAR_2 + 1) {
   FUNC_0("event %s has more %s fields than specified",
    VAR_1, VAR_0);
   VAR_6--;
   break;
  }
 }

 if (VAR_6 != VAR_2)
  FUNC_0("event %s has less %s fields than specified",
   VAR_1, VAR_0);

 VAR_4[VAR_6] = ((void*)0);

 return VAR_4;
}
