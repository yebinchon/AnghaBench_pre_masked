
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 char* VAR_1 ;
 int FUNC_1 (int ,struct perf_event_attr*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct perf_event_attr *VAR_4)
{
 if (VAR_3 >= 2) {
  FUNC_0(VAR_2, "%.60s\n", VAR_1);
  FUNC_0(VAR_2, "perf_event_attr:\n");
  FUNC_1(VAR_2, VAR_4, VAR_0, ((void*)0));
  FUNC_0(VAR_2, "%.60s\n", VAR_1);
 }
}
