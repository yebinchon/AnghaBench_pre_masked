
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned int,int ) ;

int FUNC_1(unsigned int VAR_4,
    unsigned long *VAR_5,
    unsigned long *VAR_6)
{
 if ((!VAR_5) || (!VAR_6))
  return -VAR_2;

 *VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (!*VAR_5)
  return -VAR_3;

 *VAR_6 = FUNC_0(VAR_4, VAR_0);
 if (!*VAR_6)
  return -VAR_3;

 return 0;
}
