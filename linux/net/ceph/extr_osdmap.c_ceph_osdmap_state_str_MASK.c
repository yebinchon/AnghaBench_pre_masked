
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;

char *FUNC_1(char *VAR_2, int VAR_3, u32 VAR_4)
{
 if (!VAR_3)
  return VAR_2;

 if ((VAR_4 & VAR_0) && (VAR_4 & VAR_1))
  FUNC_0(VAR_2, VAR_3, "exists, up");
 else if (VAR_4 & VAR_0)
  FUNC_0(VAR_2, VAR_3, "exists");
 else if (VAR_4 & VAR_1)
  FUNC_0(VAR_2, VAR_3, "up");
 else
  FUNC_0(VAR_2, VAR_3, "doesn't exist");

 return VAR_2;
}
