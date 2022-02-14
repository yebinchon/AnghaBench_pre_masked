
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint32
FUNC_0(uint32 VAR_3)
{
 uint32 VAR_4;
 uint32 VAR_5;
 uint32 VAR_6;

 if (VAR_3 < VAR_0)
  return (1 << VAR_3);


 VAR_4 = VAR_0;
 VAR_4 +=
  ((VAR_3 - VAR_0) >>
   VAR_1);


 VAR_5 = (1 << (VAR_4 - 1));


 VAR_6 =
  (((VAR_3 - VAR_0) &
    VAR_2) + 1);
 VAR_5 +=
  (((1 << (VAR_4 - 1)) >> VAR_1) *
   VAR_6);

 return VAR_5;
}
