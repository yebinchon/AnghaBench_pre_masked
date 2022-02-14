
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (int ,char*,int,int,unsigned long long) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,unsigned long long*,int,int) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_2 ;

int FUNC_6(int VAR_3, int VAR_4, unsigned long long *VAR_5)
{
 int VAR_6;
 char VAR_7[32];
 int VAR_8;

 FUNC_5(VAR_7, "/dev/cpu/%d/msr", VAR_3);
 VAR_8 = FUNC_3(VAR_7, VAR_0);
 if (VAR_8 < 0)
  FUNC_1(-1, "%s open failed, try chown or chmod +r /dev/cpu/*/msr, or run as root", VAR_7);

 VAR_6 = FUNC_4(VAR_8, VAR_5, sizeof(*VAR_5), VAR_4);
 if (VAR_6 != sizeof(*VAR_5))
  FUNC_1(-1, "%s offset 0x%llx read failed", VAR_7, (unsigned long long)VAR_4);

 if (VAR_1 > 1)
  FUNC_2(VAR_2, "get_msr(cpu%d, 0x%X, 0x%llX)\n", VAR_3, VAR_4, *VAR_5);

 FUNC_0(VAR_8);
 return 0;
}
