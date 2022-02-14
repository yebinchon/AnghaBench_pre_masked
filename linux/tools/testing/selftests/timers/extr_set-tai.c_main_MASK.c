
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int VAR_0 ;

int FUNC_6(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1();
 FUNC_4("tai offset started at %i\n", VAR_4);

 FUNC_4("Checking tai offsets can be properly set: ");
 FUNC_0(VAR_0);
 for (VAR_3 = 1; VAR_3 <= 60; VAR_3++) {
  VAR_4 = FUNC_5(VAR_3);
  VAR_4 = FUNC_1();
  if (VAR_4 != VAR_3) {
   FUNC_4("[FAILED] expected: %i got %i\n", VAR_3, VAR_4);
   return FUNC_2();
  }
 }
 FUNC_4("[OK]\n");
 return FUNC_3();
}
