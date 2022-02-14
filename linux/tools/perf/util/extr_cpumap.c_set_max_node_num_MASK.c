
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 char* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 const char *VAR_2;
 char VAR_3[VAR_0];
 int VAR_4 = -1;


 VAR_1 = 8;

 VAR_2 = FUNC_3();
 if (!VAR_2)
  goto out;


 VAR_4 = FUNC_2(VAR_3, VAR_0, "%s/devices/system/node/possible", VAR_2);
 if (VAR_4 == VAR_0) {
  FUNC_1("sysfs path crossed PATH_MAX(%d) size\n", VAR_0);
  goto out;
 }

 VAR_4 = FUNC_0(VAR_3, &VAR_1);

out:
 if (VAR_4)
  FUNC_1("Failed to read max nodes, using default of %d\n", VAR_1);
}
