
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int) ;

int FUNC_4(int VAR_1, char *VAR_2[])
{
 int VAR_3 = FUNC_2("/dev/urandom", VAR_0);
 int VAR_4 = 4;

 if (VAR_3 < 0)
  return 1;

 if (VAR_1 == 2)
  VAR_4 = FUNC_0(VAR_2[1]);

 FUNC_3(VAR_3, VAR_4);

 FUNC_1(VAR_3);
 return 0;
}
