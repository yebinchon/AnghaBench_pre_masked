
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct evlist {int dummy; } ;
struct pyrf_evlist {struct evlist evlist; } ;
struct pyrf_event {int sample; struct evsel* evsel; } ;
struct mmap {int dummy; } ;
struct evsel {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*) ;
 int * FUNC_1 (int ,char*,int) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 struct mmap* FUNC_4 (struct evlist*,int) ;
 struct evsel* FUNC_5 (struct evlist*,union perf_event*) ;
 int FUNC_6 (struct evsel*,union perf_event*,int *) ;
 int FUNC_7 (struct mmap*) ;
 union perf_event* FUNC_8 (struct mmap*) ;
 scalar_t__ FUNC_9 (struct mmap*) ;
 int * FUNC_10 (union perf_event*) ;

__attribute__((used)) static PyObject *FUNC_11(struct pyrf_evlist *VAR_2,
       PyObject *VAR_3, PyObject *VAR_4)
{
 struct evlist *VAR_5 = &VAR_2->evlist;
 union perf_event *VAR_6;
 int VAR_7 = 1, VAR_8;
 static char *VAR_9[] = { "cpu", "sample_id_all", ((void*)0) };
 struct mmap *VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_3, VAR_4, "i|i", VAR_9,
      &VAR_8, &VAR_7))
  return ((void*)0);

 VAR_10 = FUNC_4(VAR_5, VAR_8);
 if (!VAR_10)
  return ((void*)0);

 if (FUNC_9(VAR_10) < 0)
  goto end;

 VAR_6 = FUNC_8(VAR_10);
 if (VAR_6 != ((void*)0)) {
  PyObject *VAR_12 = FUNC_10(VAR_6);
  struct pyrf_event *VAR_13 = (struct pyrf_event *)VAR_12;
  struct evsel *VAR_14;

  if (VAR_12 == ((void*)0))
   return FUNC_2();

  VAR_14 = FUNC_5(VAR_5, VAR_6);
  if (!VAR_14) {
   FUNC_3(VAR_1);
   return VAR_1;
  }

  VAR_13->evsel = VAR_14;

  VAR_11 = FUNC_6(VAR_14, VAR_6, &VAR_13->sample);


  FUNC_7(VAR_10);

  if (VAR_11)
   return FUNC_1(VAR_0,
         "perf: can't parse sample, err=%d", VAR_11);
  return VAR_12;
 }
end:
 FUNC_3(VAR_1);
 return VAR_1;
}
