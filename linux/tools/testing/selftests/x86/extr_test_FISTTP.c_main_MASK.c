
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_4, char **VAR_5, char **VAR_6)
{
 int VAR_7 = 0;





 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_2, VAR_3);

 FUNC_0("[RUN]\tTesting fisttp instructions\n");
 VAR_7 |= FUNC_2();
 if (!VAR_7)
  FUNC_0("[OK]\tfisttp\n");
 else
  FUNC_0("[FAIL]\tfisttp errors: %d\n", VAR_7);

 return VAR_7;
}
