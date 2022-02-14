
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int,int) ;
 int FUNC_1 (int,char*,int) ;

char *FUNC_2(int VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0 < 0 ? -VAR_0 : VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_2, "ERROR: strerror_r(%d)=%d", VAR_0, VAR_3);
 return VAR_1;
}
