
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {int id; } ;
struct pyrf_evsel {int dummy; } ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (struct tep_event*) ;
 int FUNC_1 (int *,int *,char*,char**,char**,char**) ;
 int * FUNC_2 (int) ;
 struct tep_event* FUNC_3 (char*,char*) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_evsel *VAR_0,
      PyObject *VAR_1, PyObject *VAR_2)
{
 struct tep_event *VAR_3;
 static char *VAR_4[] = { "sys", "name", ((void*)0) };
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (!FUNC_1(VAR_1, VAR_2, "|ss", VAR_4,
      &VAR_5, &VAR_6))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_5, VAR_6);
 if (FUNC_0(VAR_3))
  return FUNC_2(-1);

 return FUNC_2(VAR_3->id);
}
