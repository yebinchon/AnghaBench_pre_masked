
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(unsigned int VAR_6, unsigned int VAR_7)
{
 if (VAR_4 != VAR_2)
  return -VAR_0;

 if (!VAR_3)
  return -VAR_1;

 if (VAR_6 >= FUNC_0(VAR_5))
  return -VAR_0;

 FUNC_1(VAR_7, VAR_3 + VAR_5[VAR_6]);

 return 0;
}
