
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int dev ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 scalar_t__ FUNC_5 (char*,char*,int*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

int FUNC_7(const char *VAR_3, bool VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_2];
 int VAR_7;
 int VAR_8;
 int VAR_9 = VAR_0 | VAR_1;
 char VAR_10[VAR_2];

 FUNC_4(VAR_10, sizeof(VAR_10), "\"%s\"", VAR_3);
 if ((VAR_5 = FUNC_2("/proc/mtd", "r"))) {
  while (FUNC_1(VAR_6, sizeof(VAR_6), VAR_5)) {
   if (FUNC_5(VAR_6, "mtd%d:", &VAR_7) && FUNC_6(VAR_6, VAR_10)) {
    FUNC_4(VAR_6, sizeof(VAR_6), "/dev/mtd%s/%d", (VAR_4 ? "block" : ""), VAR_7);
    if ((VAR_8=FUNC_3(VAR_6, VAR_9))<0) {
     FUNC_4(VAR_6, sizeof(VAR_6), "/dev/mtd%s%d", (VAR_4 ? "block" : ""), VAR_7);
     VAR_8=FUNC_3(VAR_6, VAR_9);
    }
    FUNC_0(VAR_5);
    return VAR_8;
   }
  }
  FUNC_0(VAR_5);
 }

 return FUNC_3(VAR_3, VAR_9);
}
