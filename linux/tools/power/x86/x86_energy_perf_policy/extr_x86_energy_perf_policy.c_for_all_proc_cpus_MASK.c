
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_0 ;

int FUNC_4(int (VAR_1)(int))
{
 FILE *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0, "r");

 VAR_4 = FUNC_3(VAR_2, "cpu %*d %*d %*d %*d %*d %*d %*d %*d %*d %*d\n");
 if (VAR_4 != 0)
  FUNC_0(1, "%s: failed to parse format", VAR_0);

 while (1) {
  VAR_4 = FUNC_3(VAR_2, "cpu%u %*d %*d %*d %*d %*d %*d %*d %*d %*d %*d\n", &VAR_3);
  if (VAR_4 != 1)
   break;

  VAR_4 = VAR_1(VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_2);
   return VAR_4;
  }
 }
 FUNC_1(VAR_2);
 return 0;
}
