
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int*,int) ;

void FUNC_6(int *VAR_1, u16 VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_1();

 FUNC_4(VAR_2);
 VAR_3 = FUNC_5(VAR_4, VAR_1, 100);
 FUNC_0("read ret: %d\n", VAR_3);
 if (VAR_3 < 0 && (VAR_0 > 0))
  FUNC_2("verbose read result (OK for this to be bad)");
 FUNC_3(VAR_3);
}
