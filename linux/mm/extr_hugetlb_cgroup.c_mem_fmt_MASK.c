
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,unsigned long) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, int VAR_1, unsigned long VAR_2)
{
 if (VAR_2 >= (1UL << 30))
  FUNC_0(VAR_0, VAR_1, "%luGB", VAR_2 >> 30);
 else if (VAR_2 >= (1UL << 20))
  FUNC_0(VAR_0, VAR_1, "%luMB", VAR_2 >> 20);
 else
  FUNC_0(VAR_0, VAR_1, "%luKB", VAR_2 >> 10);
 return VAR_0;
}
