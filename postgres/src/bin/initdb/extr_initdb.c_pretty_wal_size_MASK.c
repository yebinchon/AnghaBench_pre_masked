
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_2(int VAR_1)
{
 int VAR_2 = VAR_0 * VAR_1;
 char *VAR_3 = FUNC_0(14);

 if ((VAR_2 % 1024) == 0)
  FUNC_1(VAR_3, 14, "%dGB", VAR_2 / 1024);
 else
  FUNC_1(VAR_3, 14, "%dMB", VAR_2);

 return VAR_3;
}
