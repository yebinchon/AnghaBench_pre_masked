
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char**) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;

int FUNC_8(int VAR_8, char **VAR_9)
{
 FUNC_4(VAR_8, VAR_9);
 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (VAR_6 < 0)
  FUNC_1(1, VAR_5, "Unable to open %s", VAR_3);
 FUNC_6(FUNC_7(((void*)0)));
 if (VAR_4)
  FUNC_5(VAR_1);
 else
  FUNC_5(VAR_0);
 FUNC_0(VAR_6);
 FUNC_2(VAR_7, "PASS\n");
 return 0;
}
