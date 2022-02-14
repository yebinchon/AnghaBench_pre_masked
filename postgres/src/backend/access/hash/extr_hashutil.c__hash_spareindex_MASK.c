
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

uint32
FUNC_1(uint32 VAR_3)
{
 uint32 VAR_4;
 uint32 VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 < VAR_0)
  return VAR_4;


 VAR_5 = VAR_0;


 VAR_5 +=
  ((VAR_4 - VAR_0) <<
   VAR_1);


 VAR_5 +=
  (((VAR_3 - 1) >>
    (VAR_4 - (VAR_1 + 1))) &
   VAR_2);

 return VAR_5;
}
