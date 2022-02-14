
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 static char *VAR_3;
 ssize_t VAR_4;


 if (VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_1 * 8);
 if (!VAR_3) {
  FUNC_3("malloc(%zu) failed: %m\n", VAR_1 * 8);
  FUNC_0();
 }

 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_1 * 8, 0);
 if (VAR_4 != (VAR_1 * 8)) {
  FUNC_3("pwrite() failed: %m\n");
  FUNC_0();
 }

 FUNC_2(VAR_2, VAR_1 * 8);
}
