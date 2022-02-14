
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,long*) ;
 int VAR_2 ;

int
FUNC_1(numeric *VAR_3, int *VAR_4)
{
 long VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3, &VAR_5)) != 0)
  return VAR_6;

 if (VAR_5 < -VAR_0 || VAR_5 > VAR_0)
 {
  VAR_2 = VAR_1;
  return -1;
 }

 *VAR_4 = (int) VAR_5;
 return 0;
}
