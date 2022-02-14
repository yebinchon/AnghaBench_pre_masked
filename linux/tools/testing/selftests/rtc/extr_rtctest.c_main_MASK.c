
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char**) ;

int FUNC_2(int VAR_2, char **VAR_3)
{
 switch (VAR_2) {
 case 2:
  VAR_0 = VAR_3[1];

 case 1:
  break;
 default:
  FUNC_0(VAR_1, "usage: %s [rtcdev]\n", VAR_3[0]);
  return 1;
 }

 return FUNC_1(VAR_2, VAR_3);
}
