
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;

int FUNC_5(int VAR_1, char **VAR_2)
{
 FILE *VAR_3;
 char VAR_4[256];
 char VAR_5[256];
 int VAR_6;

 FUNC_4(VAR_4, sizeof(VAR_4), "%s_kern.o", VAR_2[0]);

 if (FUNC_0(VAR_4)) {
  FUNC_3("%s", VAR_0);
  return 1;
 }

 FUNC_4(VAR_5, 256, "mount %s tmpmnt/", VAR_2[1]);
 VAR_3 = FUNC_2(VAR_5, "r");
 VAR_6 = FUNC_1(VAR_3);

 return VAR_6 ? 0 : 1;
}
