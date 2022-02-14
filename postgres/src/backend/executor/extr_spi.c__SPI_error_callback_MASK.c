
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 const char *VAR_1 = (const char *) VAR_0;
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;





 VAR_2 = FUNC_2();
 if (VAR_2 > 0)
 {
  FUNC_1(0);
  FUNC_3(VAR_2);
  FUNC_4(VAR_1);
 }
 else
  FUNC_0("SQL statement \"%s\"", VAR_1);
}
