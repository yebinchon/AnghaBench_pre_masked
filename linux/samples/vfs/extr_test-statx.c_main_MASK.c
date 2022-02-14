
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stx ;
struct statx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned long long*,int ,int) ;
 int FUNC_1 (struct statx*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct statx*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,char*,int,unsigned int,struct statx*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(int VAR_8, char **VAR_9)
{
 struct statx VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = VAR_5;

 unsigned int VAR_14 = VAR_6;

 for (VAR_9++; *VAR_9; VAR_9++) {
  if (FUNC_7(*VAR_9, "-F") == 0) {
   VAR_13 &= ~VAR_4;
   VAR_13 |= VAR_3;
   continue;
  }
  if (FUNC_7(*VAR_9, "-D") == 0) {
   VAR_13 &= ~VAR_4;
   VAR_13 |= VAR_2;
   continue;
  }
  if (FUNC_7(*VAR_9, "-L") == 0) {
   VAR_13 &= ~VAR_5;
   continue;
  }
  if (FUNC_7(*VAR_9, "-O") == 0) {
   VAR_14 &= ~VAR_7;
   continue;
  }
  if (FUNC_7(*VAR_9, "-A") == 0) {
   VAR_13 |= VAR_1;
   continue;
  }
  if (FUNC_7(*VAR_9, "-R") == 0) {
   VAR_12 = 1;
   continue;
  }

  FUNC_3(&VAR_10, 0xbf, sizeof(VAR_10));
  VAR_11 = FUNC_6(VAR_0, *VAR_9, VAR_13, VAR_14, &VAR_10);
  FUNC_5("statx(%s) = %d\n", *VAR_9, VAR_11);
  if (VAR_11 < 0) {
   FUNC_4(*VAR_9);
   FUNC_2(1);
  }

  if (VAR_12)
   FUNC_0((unsigned long long *)&VAR_10, 0, sizeof(VAR_10));

  FUNC_1(&VAR_10);
 }
 return 0;
}
