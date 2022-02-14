
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
struct pyrf_evlist {struct evlist evlist; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (struct evlist*,int) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_evlist *VAR_2,
       PyObject *VAR_3, PyObject *VAR_4)
{
 struct evlist *VAR_5 = &VAR_2->evlist;
 static char *VAR_6[] = { "pages", "overwrite", ((void*)0) };
 int VAR_7 = 128, VAR_8 = 0;

 if (!FUNC_0(VAR_3, VAR_4, "|ii", VAR_6,
      &VAR_7, &VAR_8))
  return ((void*)0);

 if (FUNC_3(VAR_5, VAR_7) < 0) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 FUNC_2(VAR_1);
 return VAR_1;
}
