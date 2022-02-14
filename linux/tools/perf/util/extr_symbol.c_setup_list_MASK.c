
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct TYPE_2__ {int has_filter; } ;


 int FUNC_0 (char*,char const*) ;
 struct strlist* FUNC_1 (char const*,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_2(struct strlist **VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 if (VAR_2 == ((void*)0))
  return 0;

 *VAR_1 = FUNC_1(VAR_2, ((void*)0));
 if (!*VAR_1) {
  FUNC_0("problems parsing %s list\n", VAR_3);
  return -1;
 }

 VAR_0.has_filter = 1;
 return 0;
}
