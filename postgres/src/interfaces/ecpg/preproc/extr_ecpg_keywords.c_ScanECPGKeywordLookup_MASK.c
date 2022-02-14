
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_3 ;

int
FUNC_1(const char *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4, &VAR_3);
 if (VAR_5 >= 0)
  return VAR_1[VAR_5];


 VAR_5 = FUNC_0(VAR_4, &VAR_2);
 if (VAR_5 >= 0)
  return VAR_0[VAR_5];

 return -1;
}
