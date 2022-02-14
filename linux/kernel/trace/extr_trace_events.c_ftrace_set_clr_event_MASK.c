
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;


 int FUNC_0 (struct trace_array*,char*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;

int FUNC_4(struct trace_array *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6;
 VAR_5 = FUNC_3(&VAR_1, ":");
 if (VAR_1) {
  VAR_4 = VAR_5;
  VAR_3 = VAR_1;
  VAR_5 = ((void*)0);

  if (!FUNC_2(VAR_4) || FUNC_1(VAR_4, "*") == 0)
   VAR_4 = ((void*)0);
  if (!FUNC_2(VAR_3) || FUNC_1(VAR_3, "*") == 0)
   VAR_3 = ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_4, VAR_3, VAR_2);


 if (VAR_1)
  *(VAR_1 - 1) = ':';

 return VAR_6;
}
