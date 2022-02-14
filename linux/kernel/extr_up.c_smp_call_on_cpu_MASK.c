
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(unsigned int VAR_1, int (*VAR_2)(void *), void *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_1 != 0)
  return -VAR_0;

 if (VAR_4)
  FUNC_0(0);
 VAR_5 = VAR_2(VAR_3);
 if (VAR_4)
  FUNC_0(-1);

 return VAR_5;
}
