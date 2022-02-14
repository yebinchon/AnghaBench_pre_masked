
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(void)
{
 static int VAR_3 = 0;
 char VAR_4[VAR_0];

 if (VAR_3 > 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 <= 0) {
  FUNC_0(
"WARNING:\tunable to get available CPUs in this system: %s\n"
"        \tUse 128 instead.\n", FUNC_1(VAR_2, VAR_4, sizeof(VAR_4)));
  VAR_3 = 128;
 }
 return VAR_3;
}
