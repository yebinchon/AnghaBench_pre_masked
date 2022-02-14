
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,unsigned long long*) ;

unsigned long long FUNC_4(char *VAR_0)
{
 FILE *VAR_1;
 int VAR_2;
 unsigned long long VAR_3;

 VAR_1 = FUNC_2(VAR_0, "r");

 VAR_2 = FUNC_3(VAR_1, "%lld", &VAR_3);
 if (VAR_2 != 1)
  FUNC_0(1, "snapshot_sysfs_counter(%s)", VAR_0);

 FUNC_1(VAR_1);

 return VAR_3;
}
