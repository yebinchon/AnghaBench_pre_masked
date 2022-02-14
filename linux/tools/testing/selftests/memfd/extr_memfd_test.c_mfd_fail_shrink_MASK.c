
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_5 / 2);
 if (VAR_7 >= 0) {
  FUNC_3("ftruncate(SHRINK) didn't fail as expected\n");
  FUNC_0();
 }

 FUNC_2(VAR_6,
        VAR_1 | VAR_0 | VAR_2,
        VAR_3 | VAR_4);
}
