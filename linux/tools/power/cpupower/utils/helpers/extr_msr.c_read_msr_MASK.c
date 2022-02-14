
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,unsigned long long*,int) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(int VAR_2, unsigned int VAR_3, unsigned long long *VAR_4)
{
 int VAR_5;
 char VAR_6[64];

 FUNC_4(VAR_6, "/dev/cpu/%d/msr", VAR_2);
 VAR_5 = FUNC_2(VAR_6, VAR_0);
 if (VAR_5 < 0)
  return -1;
 if (FUNC_1(VAR_5, VAR_3, VAR_1) == -1)
  goto err;
 if (FUNC_3(VAR_5, VAR_4, sizeof *VAR_4) != sizeof *VAR_4)
  goto err;
 FUNC_0(VAR_5);
 return 0;
 err:
 FUNC_0(VAR_5);
 return -1;
}
