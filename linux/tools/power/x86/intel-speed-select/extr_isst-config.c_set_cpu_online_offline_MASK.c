
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2)
{
 char VAR_3[128];
 int VAR_4;

 FUNC_3(VAR_3, sizeof(VAR_3),
   "/sys/devices/system/cpu/cpu%d/online", VAR_1);

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 < 0)
  FUNC_1(-1, "%s open failed", VAR_3);

 if (VAR_2)
  FUNC_4(VAR_4, "1\n", 2);
 else
  FUNC_4(VAR_4, "0\n", 2);

 FUNC_0(VAR_4);
}
