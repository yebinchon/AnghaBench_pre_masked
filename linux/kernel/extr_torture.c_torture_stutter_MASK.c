
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 int VAR_5;

 FUNC_0("torture_stutter task started");
 do {
  if (!FUNC_4() && VAR_1 > 1) {
   VAR_5 = VAR_1;
   if (VAR_1 > VAR_0 + 1) {
    FUNC_1(VAR_3, 1);
    VAR_5 = VAR_1 - VAR_0 - 1;
    FUNC_2(VAR_5);
    VAR_5 = VAR_0 + 1;
   }
   FUNC_1(VAR_3, 2);
   FUNC_2(VAR_5);
  }
  FUNC_1(VAR_3, 0);
  if (!FUNC_4())
   FUNC_2(VAR_2);
  FUNC_5("torture_stutter");
 } while (!FUNC_4());
 FUNC_3("torture_stutter");
 return 0;
}
