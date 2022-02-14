
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(char *VAR_1, int VAR_2)
{
 char VAR_3[1024];
 int VAR_4 = FUNC_2(VAR_1, VAR_0);

 if (VAR_4 < 0) {
  FUNC_3("open");
  FUNC_1(1);
 }

 FUNC_4(VAR_3, "%d", VAR_2);

 if (FUNC_6(VAR_4, VAR_3, FUNC_5(VAR_3)) != FUNC_5(VAR_3)) {
  FUNC_3("write");
  FUNC_1(1);
 }

 FUNC_0(VAR_4);
}
