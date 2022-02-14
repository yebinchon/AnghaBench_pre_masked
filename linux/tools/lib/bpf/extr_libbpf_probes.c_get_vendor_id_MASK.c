
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int path ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_2)
{
 char VAR_3[VAR_0], VAR_4[64], VAR_5[8];
 ssize_t VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_2, VAR_3))
  return -1;

 FUNC_4(VAR_4, sizeof(VAR_4), "/sys/class/net/%s/device/vendor", VAR_3);

 VAR_7 = FUNC_2(VAR_4, VAR_1);
 if (VAR_7 < 0)
  return -1;

 VAR_6 = FUNC_3(VAR_7, VAR_5, sizeof(VAR_5));
 FUNC_0(VAR_7);
 if (VAR_6 < 0)
  return -1;
 if (VAR_6 >= (ssize_t)sizeof(VAR_5))
  return -1;
 VAR_5[VAR_6] = '\0';

 return FUNC_5(VAR_5, ((void*)0), 0);
}
