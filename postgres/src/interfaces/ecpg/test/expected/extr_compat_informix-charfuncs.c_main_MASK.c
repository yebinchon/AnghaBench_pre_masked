
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

int FUNC_4(void)
{
 char VAR_0[] = "abc  def  ghi  ";

 char VAR_1[50];
 int VAR_2;

 FUNC_2("t1: _%s_\n", VAR_0);
 FUNC_3(VAR_0);
 FUNC_2("t1: _%s_\n", VAR_0);

 VAR_2 = 2;
 FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_2("byleng(t1, %d): %d, ldchar: _%s_\n", VAR_2, FUNC_0(VAR_0, VAR_2), VAR_1);
 VAR_2 = 5;
 FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_2("byleng(t1, %d): %d, ldchar: _%s_\n", VAR_2, FUNC_0(VAR_0, VAR_2), VAR_1);
 VAR_2 = 9;
 FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_2("byleng(t1, %d): %d, ldchar: _%s_\n", VAR_2, FUNC_0(VAR_0, VAR_2), VAR_1);
 VAR_2 = 15;
 FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_2("byleng(t1, %d): %d, ldchar: _%s_\n", VAR_2, FUNC_0(VAR_0, VAR_2), VAR_1);


 return 0;
}
