
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {unsigned int cnt; TYPE_1__** names; } ;
struct TYPE_2__ {unsigned int len; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char,scalar_t__) ;
 int FUNC_3 (struct cmdnames*,unsigned int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_0, struct cmdnames *VAR_1,
     struct cmdnames *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->cnt; VAR_3++)
  if (VAR_4 < VAR_1->names[VAR_3]->len)
   VAR_4 = VAR_1->names[VAR_3]->len;
 for (VAR_3 = 0; VAR_3 < VAR_2->cnt; VAR_3++)
  if (VAR_4 < VAR_2->names[VAR_3]->len)
   VAR_4 = VAR_2->names[VAR_3]->len;

 if (VAR_1->cnt) {
  char *VAR_5 = FUNC_1();
  FUNC_4("available %s in '%s'\n", VAR_0, VAR_5);
  FUNC_4("----------------");
  FUNC_2('-', FUNC_6(VAR_0) + FUNC_6(VAR_5));
  FUNC_5('\n');
  FUNC_3(VAR_1, VAR_4);
  FUNC_5('\n');
  FUNC_0(VAR_5);
 }

 if (VAR_2->cnt) {
  FUNC_4("%s available from elsewhere on your $PATH\n", VAR_0);
  FUNC_4("---------------------------------------");
  FUNC_2('-', FUNC_6(VAR_0));
  FUNC_5('\n');
  FUNC_3(VAR_2, VAR_4);
  FUNC_5('\n');
 }
}
