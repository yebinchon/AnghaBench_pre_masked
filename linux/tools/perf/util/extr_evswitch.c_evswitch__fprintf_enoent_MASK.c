
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, "ERROR: switch-%s event not found (%s)\n", VAR_1, VAR_2);

 return VAR_3 += FUNC_0(VAR_0, "HINT:  use 'perf evlist' to see the available event names\n");
}
