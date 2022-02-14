
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,unsigned int*) ;
 int FUNC_3 (char*,char*,int) ;

unsigned int FUNC_4(int VAR_0)
{
 FILE *VAR_1;
 char VAR_2[128];
 unsigned int VAR_3;
 int VAR_4;

 FUNC_3(VAR_2, "/sys/devices/system/cpu/cpu%d/topology/physical_package_id", VAR_0);

 VAR_1 = FUNC_1(VAR_2, "r");
 VAR_4 = FUNC_2(VAR_1, "%d\n", &VAR_3);
 if (VAR_4 != 1)
  FUNC_0(1, "%s: failed to parse", VAR_2);
 return VAR_3;
}
