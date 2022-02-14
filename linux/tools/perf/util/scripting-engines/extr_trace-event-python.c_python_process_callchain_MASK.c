
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample {int callchain; } ;
struct evsel {int dummy; } ;
struct callchain_cursor_node {scalar_t__ map; TYPE_1__* sym; int ip; } ;
struct addr_location {int thread; } ;
struct TYPE_4__ {int use_callchain; } ;
struct TYPE_3__ {int namelen; int name; int binding; int end; int start; } ;
typedef int PyObject ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (char const*) ;
 int * FUNC_8 (int ,int ) ;
 int VAR_0 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct callchain_cursor_node* FUNC_11 (int *) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,char*,int *) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_15 (int ,int *,struct evsel*,struct perf_sample*,int *,int *,int ) ;

__attribute__((used)) static PyObject *FUNC_16(struct perf_sample *VAR_3,
      struct evsel *VAR_4,
      struct addr_location *VAR_5)
{
 PyObject *VAR_6;

 VAR_6 = FUNC_2(0);
 if (!VAR_6)
  FUNC_5("couldn't create Python list");

 if (!VAR_2.use_callchain || !VAR_3->callchain)
  goto exit;

 if (FUNC_15(VAR_5->thread, &VAR_0, VAR_4,
          VAR_3, ((void*)0), ((void*)0),
          VAR_1) != 0) {
  FUNC_13("Failed to resolve callchain. Skipping\n");
  goto exit;
 }
 FUNC_10(&VAR_0);


 while (1) {
  PyObject *VAR_7;
  struct callchain_cursor_node *VAR_8;
  VAR_8 = FUNC_11(&VAR_0);
  if (!VAR_8)
   break;

  VAR_7 = FUNC_0();
  if (!VAR_7)
   FUNC_5("couldn't create Python dictionary");


  FUNC_14(VAR_7, "ip",
    FUNC_3(VAR_8->ip));

  if (VAR_8->sym) {
   PyObject *VAR_9 = FUNC_0();
   if (!VAR_9)
    FUNC_5("couldn't create Python dictionary");
   FUNC_14(VAR_9, "start",
     FUNC_3(VAR_8->sym->start));
   FUNC_14(VAR_9, "end",
     FUNC_3(VAR_8->sym->end));
   FUNC_14(VAR_9, "binding",
     FUNC_6(VAR_8->sym->binding));
   FUNC_14(VAR_9, "name",
     FUNC_8(VAR_8->sym->name,
       VAR_8->sym->namelen));
   FUNC_14(VAR_7, "sym", VAR_9);
  }

  if (VAR_8->map) {
   const char *VAR_10 = FUNC_12(VAR_8->map);

   FUNC_14(VAR_7, "dso",
     FUNC_7(VAR_10));
  }

  FUNC_9(&VAR_0);
  FUNC_1(VAR_6, VAR_7);
  FUNC_4(VAR_7);
 }

exit:
 return VAR_6;
}
