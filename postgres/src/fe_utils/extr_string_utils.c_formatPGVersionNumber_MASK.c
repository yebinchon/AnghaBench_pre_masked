
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,int,...) ;

char *
FUNC_1(int VAR_0, bool VAR_1,
       char *VAR_2, size_t VAR_3)
{
 if (VAR_0 >= 100000)
 {

  if (VAR_1)
   FUNC_0(VAR_2, VAR_3, "%d.%d", VAR_0 / 10000,
      VAR_0 % 10000);
  else
   FUNC_0(VAR_2, VAR_3, "%d", VAR_0 / 10000);
 }
 else
 {

  if (VAR_1)
   FUNC_0(VAR_2, VAR_3, "%d.%d.%d", VAR_0 / 10000,
      (VAR_0 / 100) % 100,
      VAR_0 % 100);
  else
   FUNC_0(VAR_2, VAR_3, "%d.%d", VAR_0 / 10000,
      (VAR_0 / 100) % 100);
 }
 return VAR_2;
}
