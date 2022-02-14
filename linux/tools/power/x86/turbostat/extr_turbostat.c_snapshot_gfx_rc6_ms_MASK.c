
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 int VAR_0 ;

int FUNC_4(void)
{
 FILE *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2("/sys/class/drm/card0/power/rc6_residency_ms", "r");

 VAR_2 = FUNC_3(VAR_1, "%lld", &VAR_0);
 if (VAR_2 != 1)
  FUNC_0(1, "GFX rc6");

 FUNC_1(VAR_1);

 return 0;
}
