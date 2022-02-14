
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int date ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0)
{
 static int VAR_1;
 date VAR_2;
 int VAR_3, VAR_4;
 char VAR_5[11];

 VAR_3 = FUNC_3(VAR_0, &VAR_2);
 FUNC_1("r: %d ", VAR_3);
 if (VAR_3 == 0)
 {
  VAR_4 = FUNC_2(VAR_2, VAR_5);
  FUNC_1("q: %d ", VAR_4);
  if (VAR_4 == 0)
  {
   FUNC_1("date %d: %s\n", VAR_1++, VAR_5);
  }
  else
   FUNC_1("\n");
 }
 else
  FUNC_0(VAR_3);
}
