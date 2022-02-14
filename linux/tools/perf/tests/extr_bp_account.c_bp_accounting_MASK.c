
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {unsigned long bp_addr; int bp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,struct perf_event_attr*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (void*,struct perf_event_attr*) ;

__attribute__((used)) static int FUNC_5(int VAR_4, int VAR_5)
{
 struct perf_event_attr VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10[VAR_4], VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_10[VAR_9] = FUNC_4((void *)&VAR_3, &VAR_6);
  FUNC_0("failed to create wp\n", VAR_10[VAR_9] != -1);
  FUNC_3("wp %d created\n", VAR_9);
 }

 VAR_7 = VAR_6;
 VAR_7.bp_type = VAR_0;
 VAR_7.bp_addr = (unsigned long) VAR_2;

 VAR_12 = FUNC_2(VAR_10[0], VAR_1, &VAR_7);
 FUNC_0("failed to modify wp\n", VAR_12 == 0);

 FUNC_3("wp 0 modified to bp\n");

 if (!VAR_5) {
  VAR_11 = FUNC_4((void *)&VAR_3, &VAR_8);
  FUNC_0("failed to create max wp\n", VAR_11 != -1);
  FUNC_3("wp max created\n");
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_1(VAR_10[VAR_9]);

 return 0;
}
