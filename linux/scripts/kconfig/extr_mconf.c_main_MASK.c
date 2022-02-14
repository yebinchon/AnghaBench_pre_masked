
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;

int FUNC_13(int VAR_8, char **VAR_9)
{
 char *VAR_10;
 int VAR_11;

 FUNC_10(VAR_1, VAR_4);

 if (VAR_8 > 1 && FUNC_12(VAR_9[1], "-s") == 0) {
  VAR_5 = 1;

  FUNC_4(((void*)0));
  VAR_9++;
 }
 FUNC_2(VAR_9[1]);
 FUNC_3(((void*)0));

 VAR_10 = FUNC_6("MENUCONFIG_MODE");
 if (VAR_10) {
  if (!FUNC_11(VAR_10, "single_menu"))
   VAR_6 = 1;
 }

 if (FUNC_8(((void*)0))) {
  FUNC_5(VAR_7, "Your display is too small to run Menuconfig!\n");
  FUNC_5(VAR_7, "It must be at least 19 lines by 80 columns.\n");
  return 1;
 }

 FUNC_9(FUNC_1());
 FUNC_4(VAR_2);
 do {
  FUNC_0(&VAR_3, ((void*)0));
  VAR_11 = FUNC_7();
 } while (VAR_11 == VAR_0);

 return VAR_11;
}
