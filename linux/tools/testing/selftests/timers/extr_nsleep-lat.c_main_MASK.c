
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
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,long long) ;
 int FUNC_5 (char*,...) ;
 int VAR_7 ;

int FUNC_6(int VAR_8, char **VAR_9)
{
 long long VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = VAR_2; VAR_11 < VAR_4; VAR_11++) {


  if (VAR_11 == VAR_1 ||
    VAR_11 == VAR_3 ||
    VAR_11 == VAR_0)
   continue;

  FUNC_5("nsleep latency %-26s ", FUNC_0(VAR_11));
  FUNC_1(VAR_7);

  VAR_10 = 10;
  while (VAR_10 <= (VAR_5 * 10)) {
   VAR_12 = FUNC_4(VAR_11, VAR_10);
   if (VAR_12)
    break;
   VAR_10 *= 100;

  }

  if (VAR_12 == VAR_6) {
   FUNC_5("[UNSUPPORTED]\n");
   continue;
  }
  if (VAR_12 < 0) {
   FUNC_5("[FAILED]\n");
   return FUNC_2();
  }
  FUNC_5("[OK]\n");
 }
 return FUNC_3();
}
