
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (long,char const*,char*) ;

__attribute__((used)) static void
FUNC_3(long VAR_0, const char *VAR_1)
{
 static int VAR_2;
 int VAR_3;
 char VAR_4[30];

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4);
 FUNC_1("r: %d ", VAR_3);
 if (VAR_3 == 0)
 {
  FUNC_1("%d: %s (fmt was: %s)\n", VAR_2++, VAR_4, VAR_1);
 }
 else
  FUNC_0(VAR_3);
}
