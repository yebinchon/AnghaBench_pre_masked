
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_7 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 () ;

int FUNC_5(char *VAR_8)
{
 int VAR_9;
 char *VAR_10;

 if (!FUNC_2(VAR_8, "default", 7))
  return VAR_4;

 if (!FUNC_2(VAR_8, "normal", 6))
  return VAR_4;

 if (!FUNC_2(VAR_8, "power", 9))
  return VAR_6;

 if (!FUNC_2(VAR_8, "balance-power", 17))
  return VAR_3;

 if (!FUNC_2(VAR_8, "balance-performance", 19))
  return VAR_2;

 if (!FUNC_2(VAR_8, "performance", 11))
  return VAR_5;

 VAR_9 = FUNC_3(VAR_8, &VAR_10, 0);
 if (VAR_8 == VAR_10) {
  FUNC_1(VAR_7, "no digits in \"%s\"\n", VAR_8);
  FUNC_4();
 }
 if (VAR_9 == VAR_1 || VAR_9 == VAR_0)
  FUNC_0(-1, "%s", VAR_8);

 if (VAR_9 > 0xFF)
  FUNC_0(-1, "%d (0x%x) must be < 256", VAR_9, VAR_9);

 if (VAR_9 < 0)
  FUNC_0(-1, "%d (0x%x) must be >= 0", VAR_9, VAR_9);
 return VAR_9;
}
