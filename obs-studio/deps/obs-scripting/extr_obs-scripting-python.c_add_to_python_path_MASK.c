
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num; char** array; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__,char**) ;
 scalar_t__ FUNC_7 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1)
{
 PyObject *VAR_2 = ((void*)0);
 PyObject *VAR_3 = ((void*)0);
 int VAR_4;

 if (!VAR_1 || !*VAR_1)
  return;

 for (size_t VAR_5 = 0; VAR_5 < VAR_0.num; VAR_5++) {
  const char *VAR_6 = VAR_0.array[VAR_5];
  if (FUNC_8(VAR_1, VAR_6) == 0)
   return;
 }

 VAR_4 = FUNC_1("import sys");
 if (FUNC_7() || VAR_4 != 0)
  goto fail;


 VAR_3 = FUNC_2("path");
 if (FUNC_7() || !VAR_3)
  goto fail;

 VAR_2 = FUNC_3(VAR_1);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (FUNC_7() || VAR_4 != 0)
  goto fail;

 char *VAR_7 = FUNC_5(VAR_1);
 FUNC_6(VAR_0, &VAR_7);

fail:
 FUNC_4(VAR_2);
}
