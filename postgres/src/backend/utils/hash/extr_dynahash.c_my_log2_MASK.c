
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0(long VAR_1)
{
 int VAR_2;
 long VAR_3;


 if (VAR_1 > VAR_0 / 2)
  VAR_1 = VAR_0 / 2;

 for (VAR_2 = 0, VAR_3 = 1; VAR_3 < VAR_1; VAR_2++, VAR_3 <<= 1)
  ;
 return VAR_2;
}
