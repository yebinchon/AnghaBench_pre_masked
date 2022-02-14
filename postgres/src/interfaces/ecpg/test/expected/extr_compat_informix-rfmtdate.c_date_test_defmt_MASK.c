
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int date ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 static int VAR_2;
 char VAR_3[11];
 date VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_3(&VAR_4, VAR_0, VAR_1);
 FUNC_1("r: %d ", VAR_6);
 if (VAR_6 == 0)
 {
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  FUNC_1("q: %d ", VAR_5);
  if (VAR_5 == 0)
  {
   FUNC_1("date %d: %s\n", VAR_2++, VAR_3);
  }
  else
   FUNC_1("\n");
 }
 else
  FUNC_0(VAR_6);
}
