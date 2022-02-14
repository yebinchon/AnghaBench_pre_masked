
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_counts_values {int run; int ena; int val; } ;
struct evsel {int dummy; } ;
typedef int handler_name ;
typedef int PyObject ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int **,int) ;
 int FUNC_6 (int *,int *,char*) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (char*,int,struct evsel*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct evsel *VAR_1, int VAR_2, int VAR_3, u64 VAR_4,
      struct perf_counts_values *VAR_5)
{
 PyObject *VAR_6, *VAR_7;
 static char VAR_8[256];
 int VAR_9 = 0;

 VAR_7 = FUNC_0(VAR_0);
 if (!VAR_7)
  FUNC_3("couldn't create Python tuple");

 FUNC_8(VAR_8, sizeof(VAR_8),
    VAR_1);

 VAR_6 = FUNC_7(VAR_8);
 if (!VAR_6) {
  FUNC_9("can't find python handler %s\n", VAR_8);
  return;
 }

 FUNC_1(VAR_7, VAR_9++, FUNC_4(VAR_2));
 FUNC_1(VAR_7, VAR_9++, FUNC_4(VAR_3));

 FUNC_10(VAR_7, VAR_9++, VAR_4);
 FUNC_10(VAR_7, VAR_9++, VAR_5->val);
 FUNC_10(VAR_7, VAR_9++, VAR_5->ena);
 FUNC_10(VAR_7, VAR_9++, VAR_5->run);

 if (FUNC_5(&VAR_7, VAR_9) == -1)
  FUNC_3("error resizing Python tuple");

 FUNC_6(VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_7);
}
