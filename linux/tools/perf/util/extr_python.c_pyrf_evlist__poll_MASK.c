
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
struct pyrf_evlist {struct evlist evlist; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (struct evlist*,int) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_evlist *VAR_1,
       PyObject *VAR_2, PyObject *VAR_3)
{
 struct evlist *VAR_4 = &VAR_1->evlist;
 static char *VAR_5[] = { "timeout", ((void*)0) };
 int VAR_6 = -1, VAR_7;

 if (!FUNC_0(VAR_2, VAR_3, "|i", VAR_5, &VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_4, VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 return FUNC_2("i", VAR_7);
}
