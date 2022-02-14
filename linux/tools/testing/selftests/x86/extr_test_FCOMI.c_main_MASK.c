
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
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

int FUNC_9(int VAR_7, char **VAR_8, char **VAR_9)
{
 int VAR_10 = 0;





 FUNC_1(VAR_3, VAR_6);
 FUNC_1(VAR_2, VAR_6);
 FUNC_1(VAR_4, VAR_6);

 FUNC_0("[RUN]\tTesting f[u]comi[p] instructions\n");
 VAR_10 |= FUNC_2(0);
 VAR_10 |= FUNC_3(0);
 VAR_10 |= FUNC_6(0);
 VAR_10 |= FUNC_7(0);
 VAR_10 |= FUNC_2(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_3(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_6(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_7(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_4(0);
 VAR_10 |= FUNC_5(0);
 VAR_10 |= FUNC_8(0);
 VAR_10 |= FUNC_4(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_5(VAR_0|VAR_5|VAR_1);
 VAR_10 |= FUNC_8(VAR_0|VAR_5|VAR_1);
 if (!VAR_10)
  FUNC_0("[OK]\tf[u]comi[p]\n");
 else
  FUNC_0("[FAIL]\tf[u]comi[p] errors: %d\n", VAR_10);

 return VAR_10;
}
