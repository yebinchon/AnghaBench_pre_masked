
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 char* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 const char *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5 = -1;


 VAR_1 = 4096;
 VAR_2 = 4096;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  goto out;


 VAR_5 = FUNC_2(VAR_4, VAR_0, "%s/devices/system/cpu/possible", VAR_3);
 if (VAR_5 == VAR_0) {
  FUNC_1("sysfs path crossed PATH_MAX(%d) size\n", VAR_0);
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4, &VAR_1);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_2(VAR_4, VAR_0, "%s/devices/system/cpu/present", VAR_3);
 if (VAR_5 == VAR_0) {
  FUNC_1("sysfs path crossed PATH_MAX(%d) size\n", VAR_0);
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4, &VAR_2);

out:
 if (VAR_5)
  FUNC_1("Failed to read max cpus, using default of %d\n", VAR_1);
}
