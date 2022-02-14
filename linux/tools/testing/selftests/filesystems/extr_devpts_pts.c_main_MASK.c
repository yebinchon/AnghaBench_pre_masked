
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int *,int,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(int VAR_8, char *VAR_9[])
{
 int VAR_10;

 if (!FUNC_2(VAR_6)) {
  FUNC_1(VAR_7, "Standard input file descriptor is not attached "
    "to a terminal. Skipping test\n");
  FUNC_0(VAR_3);
 }

 VAR_10 = FUNC_4(VAR_0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7, "Failed to unshare mount namespace\n");
  FUNC_0(VAR_1);
 }

 VAR_10 = FUNC_3("", "/", ((void*)0), VAR_4 | VAR_5, 0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7, "Failed to make \"/\" MS_PRIVATE in new mount "
    "namespace\n");
  FUNC_0(VAR_1);
 }

 VAR_10 = FUNC_7();
 if (VAR_10 < 0)
  FUNC_0(VAR_1);

 VAR_10 = FUNC_5();
 if (VAR_10 < 0)
  FUNC_0(VAR_1);

 VAR_10 = FUNC_6();
 if (VAR_10 < 0)
  FUNC_0(VAR_1);

 FUNC_0(VAR_2);
}
