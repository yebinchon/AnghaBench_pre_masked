
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ftrace_readme { ____Placeholder_ftrace_readme } ftrace_readme ;
struct TYPE_2__ {int avail; int pattern; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static bool FUNC_7(enum ftrace_readme VAR_2)
{
 int VAR_3;
 FILE *VAR_4;
 char *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 bool VAR_7 = 0;
 static bool VAR_8 = 0;

 if (VAR_8)
  goto result;

 VAR_3 = FUNC_5("README", 0);
 if (VAR_3 < 0)
  return VAR_7;

 VAR_4 = FUNC_2(VAR_3, "r");
 if (!VAR_4) {
  FUNC_0(VAR_3);
  return VAR_7;
 }

 while (FUNC_4(&VAR_5, &VAR_6, VAR_4) > 0)
  for (enum ftrace_readme VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   if (!VAR_1[VAR_9].avail)
    VAR_1[VAR_9].avail =
     FUNC_6(VAR_5, VAR_1[VAR_9].pattern);
 VAR_8 = 1;

 FUNC_1(VAR_4);
 FUNC_3(VAR_5);

result:
 if (VAR_2 >= VAR_0)
  return 0;

 return VAR_1[VAR_2].avail;
}
