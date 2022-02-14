
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_3[2048];
 int VAR_4;

 FUNC_4("%s CREATE\n", VAR_2);


 FUNC_3(((void*)0), 0);


 FUNC_1(VAR_3, 0xff, sizeof(VAR_3));
 FUNC_3(VAR_3, 0);


 FUNC_1(VAR_3, 0xff, sizeof(VAR_3));
 VAR_3[sizeof(VAR_3) - 1] = 0;
 FUNC_3(VAR_3, 0);


 VAR_4 = FUNC_2("", 0, 0);
 FUNC_0(VAR_4);


 FUNC_3("", 0x0100);
 FUNC_3("", ~VAR_1);
 FUNC_3("", ~VAR_0);
 FUNC_3("", ~0);
 FUNC_3("", 0x80000000U);


 VAR_4 = FUNC_2("", 0, VAR_1);
 FUNC_0(VAR_4);


 VAR_4 = FUNC_2("", 0, VAR_0);
 FUNC_0(VAR_4);


 VAR_4 = FUNC_2("", 0, VAR_0 | VAR_1);
 FUNC_0(VAR_4);
}
