
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 long VAR_5 ;

__attribute__((used)) static unsigned long
FUNC_0(u64 VAR_6, long VAR_7)
{
 VAR_7 = VAR_7 + VAR_5 - 1;

 if (VAR_6 >= VAR_0){
  VAR_6 = VAR_0;
  VAR_7 = 0;
 }
 return ((VAR_6 * VAR_3) +
  (((u64)VAR_7 * VAR_1) >>
   (VAR_2 - VAR_4))) >> VAR_4;

}
