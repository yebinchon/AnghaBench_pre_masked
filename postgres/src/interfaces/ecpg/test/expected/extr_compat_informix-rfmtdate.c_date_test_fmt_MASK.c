
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int date ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ,char const*,char*) ;

__attribute__((used)) static void
FUNC_3(date VAR_0, const char *VAR_1)
{
 static int VAR_2;
 char VAR_3[200];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_1("r: %d ", VAR_4);
 if (VAR_4 != 0)
  FUNC_0(VAR_4);
 else
  FUNC_1("date: %d: %s\n", VAR_2++, VAR_3);
}
