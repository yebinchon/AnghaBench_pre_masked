
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksym {long addr; } ;


 int VAR_0 ;
 struct ksym* VAR_1 ;

struct ksym *FUNC_0(long VAR_2)
{
 int VAR_3 = 0, VAR_4 = VAR_0;
 int VAR_5;


 if (VAR_0 <= 0)
  return ((void*)0);

 while (VAR_3 < VAR_4) {
  size_t VAR_6 = VAR_3 + (VAR_4 - VAR_3) / 2;

  VAR_5 = VAR_2 - VAR_1[VAR_6].addr;
  if (VAR_5 < 0)
   VAR_4 = VAR_6;
  else if (VAR_5 > 0)
   VAR_3 = VAR_6 + 1;
  else
   return &VAR_1[VAR_6];
 }

 if (VAR_3 >= 1 && VAR_1[VAR_3 - 1].addr < VAR_2 &&
     VAR_2 < VAR_1[VAR_3].addr)

  return &VAR_1[VAR_3 - 1];


 return &VAR_1[0];
}
