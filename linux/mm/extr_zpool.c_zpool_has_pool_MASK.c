
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpool_driver {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 struct zpool_driver* FUNC_1 (char*) ;
 int FUNC_2 (struct zpool_driver*) ;

bool FUNC_3(char *VAR_0)
{
 struct zpool_driver *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1) {
  FUNC_0("zpool-%s", VAR_0);
  VAR_1 = FUNC_1(VAR_0);
 }

 if (!VAR_1)
  return 0;

 FUNC_2(VAR_1);
 return 1;
}
