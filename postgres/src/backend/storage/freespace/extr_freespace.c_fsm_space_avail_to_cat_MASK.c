
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint8
FUNC_1(Size VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3 < VAR_0);

 if (VAR_3 >= VAR_2)
  return 255;

 VAR_4 = VAR_3 / VAR_1;





 if (VAR_4 > 254)
  VAR_4 = 254;

 return (uint8) VAR_4;
}
