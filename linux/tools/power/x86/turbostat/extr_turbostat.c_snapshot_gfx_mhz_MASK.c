
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
 int FUNC_4 (int *) ;

int FUNC_5(void)
{
 static FILE *VAR_1;
 int VAR_2;

 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_2("/sys/class/graphics/fb0/device/drm/card0/gt_cur_freq_mhz", "r");
 else {
  FUNC_4(VAR_1);
  FUNC_1(VAR_1);
 }

 VAR_2 = FUNC_3(VAR_1, "%d", &VAR_0);
 if (VAR_2 != 1)
  FUNC_0(1, "GFX MHz");

 return 0;
}
