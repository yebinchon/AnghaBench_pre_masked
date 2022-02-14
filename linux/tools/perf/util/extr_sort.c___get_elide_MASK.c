
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct TYPE_2__ {char* s; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 TYPE_1__* FUNC_1 (struct strlist*,int ) ;
 int FUNC_2 (struct strlist*) ;

__attribute__((used)) static bool FUNC_3(struct strlist *VAR_0, const char *VAR_1, FILE *VAR_2)
{
 if (VAR_0 && FUNC_2(VAR_0) == 1) {
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2, "# %s: %s\n", VAR_1,
    FUNC_1(VAR_0, 0)->s);
  return 1;
 }
 return 0;
}
