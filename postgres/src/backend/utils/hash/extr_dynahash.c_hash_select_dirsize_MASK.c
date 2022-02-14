
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (long) ;

long
FUNC_1(long VAR_3)
{
 long VAR_4,
    VAR_5,
    VAR_6;


 VAR_4 = FUNC_0((VAR_3 - 1) / VAR_1 + 1);

 VAR_5 = FUNC_0((VAR_4 - 1) / VAR_2 + 1);

 VAR_6 = VAR_0;
 while (VAR_6 < VAR_5)
  VAR_6 <<= 1;

 return VAR_6;
}
