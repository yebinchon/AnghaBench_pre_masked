
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (char*,int,char*,int) ;
 unsigned long long FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char**,size_t*) ;

int FUNC_7(void)
{
 static bool VAR_2;
 static int VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_2)
  return VAR_3;

 VAR_5 = FUNC_5(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  unsigned long long VAR_6;
  char *VAR_7;
  size_t VAR_8;
  char VAR_9[256];

  FUNC_3(VAR_9, sizeof VAR_9,
   "devices/system/cpu/cpu%d/topology/core_cpus", VAR_4);
  if (FUNC_0(VAR_9, VAR_0) == -1) {
   FUNC_3(VAR_9, sizeof VAR_9,
    "devices/system/cpu/cpu%d/topology/thread_siblings",
    VAR_4);
  }
  if (FUNC_6(VAR_9, &VAR_7, &VAR_8) < 0)
   continue;

  VAR_6 = FUNC_4(VAR_7, ((void*)0), 16);
  FUNC_1(VAR_7);
  if (FUNC_2(VAR_6) > 1) {
   VAR_3 = 1;
   VAR_2 = 1;
   break;
  }
 }
 if (!VAR_2) {
  VAR_3 = 0;
  VAR_2 = 1;
 }
 return VAR_3;
}
