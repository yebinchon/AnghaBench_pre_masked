
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(int VAR_2)
{
 char VAR_3[32];
 int VAR_4;

 VAR_4 = VAR_1[VAR_2];

 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3, "/dev/cpu/%d/msr", VAR_2);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 < 0)
  FUNC_0(-1, "%s open failed, try chown or chmod +r /dev/cpu/*/msr, or run as root", VAR_3);

 VAR_1[VAR_2] = VAR_4;

 return VAR_4;
}
