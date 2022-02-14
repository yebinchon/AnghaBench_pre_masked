
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
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_10, char **VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 while ((VAR_12 = FUNC_1(VAR_10, VAR_11, "46c:")) != -1) {
  switch (VAR_12) {
  case '4':
   VAR_3 = 1;
   break;
  case '6':
   VAR_4 = 1;
   break;
  case 'c':
   if (!FUNC_3(VAR_8, "tai"))
    VAR_2 = VAR_1;
   else if (!FUNC_3(VAR_8, "monotonic") ||
     !FUNC_3(VAR_8, "mono"))
    VAR_2 = VAR_0;
   else
    FUNC_0(1, 0, "unknown clock id %s", VAR_8);
   break;
  default:
   FUNC_0(1, 0, "parse error at %d", VAR_9);
  }
 }

 if (VAR_10 - VAR_9 != 2)
  FUNC_0(1, 0, "Usage: %s [-46] -c <clock> <in> <out>", VAR_11[0]);

 VAR_13 = FUNC_2(VAR_11[VAR_9], VAR_5);
 VAR_14 = FUNC_2(VAR_11[VAR_9 + 1], VAR_7);
 if (VAR_13 != VAR_14)
  FUNC_0(1, 0, "i/o streams len mismatch (%d, %d)\n", VAR_13, VAR_14);
 VAR_6 = VAR_13;
}
