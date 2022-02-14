
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;
typedef int handler_name ;
typedef int PyObject ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,unsigned int) ;
 int FUNC_5 (int *,int *,char*) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (struct perf_sample*,struct evsel*,struct addr_location*,int *) ;
 int * FUNC_8 (struct perf_sample*,struct evsel*,struct addr_location*) ;
 int FUNC_9 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_10(struct perf_sample *VAR_1,
      struct evsel *VAR_2,
      struct addr_location *VAR_3)
{
 PyObject *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 static char VAR_8[64];
 unsigned VAR_9 = 0;

 FUNC_9(VAR_8, sizeof(VAR_8), "%s", "process_event");

 VAR_4 = FUNC_6(VAR_8);
 if (!VAR_4)
  return;





 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5)
  FUNC_3("couldn't create Python tuple");


 VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3);
 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_7);

 FUNC_1(VAR_5, VAR_9++, VAR_6);
 if (FUNC_4(&VAR_5, VAR_9) == -1)
  FUNC_3("error resizing Python tuple");

 FUNC_5(VAR_4, VAR_5, VAR_8);

 FUNC_2(VAR_5);
}
