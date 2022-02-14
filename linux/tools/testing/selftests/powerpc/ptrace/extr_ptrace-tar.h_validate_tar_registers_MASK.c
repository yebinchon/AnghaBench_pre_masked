
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(unsigned long *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 1;

 if (VAR_2[0] != VAR_3)
  VAR_6 = 0;

 if (VAR_2[1] != VAR_4)
  VAR_6 = 0;

 if (VAR_2[2] != VAR_5)
  VAR_6 = 0;

 if (!VAR_6)
  return VAR_0;
 return VAR_1;
}
