
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 if (VAR_1) {
  FUNC_0("creating pid file %s", VAR_1);
  FILE *VAR_2;

  VAR_2 = FUNC_3(VAR_1, "w");
  if (!VAR_2) {
   FUNC_1("pid_file: %s: %d (%s)",
       VAR_1, VAR_0, FUNC_6(VAR_0));
   return;
  }
  FUNC_4(VAR_2, "%d\n", FUNC_5());
  FUNC_2(VAR_2);
 }
}
