
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intlist {int dummy; } ;


 struct intlist* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(struct intlist **VAR_0, const char *VAR_1,
    const char *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return 0;

 *VAR_0 = FUNC_0(VAR_1);
 if (!*VAR_0) {
  FUNC_1("problems parsing %s list\n", VAR_2);
  return -1;
 }
 return 0;
}
