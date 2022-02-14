
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entity_ht ;




 int VAR_0 ;

 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;

__attribute__((used)) static const entity_ht *FUNC_0(int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 & VAR_0;

 if (VAR_5) {
  switch (VAR_7) {
  case 130:
  case 128:
   return &VAR_3;
  case 129:
   return &VAR_4;
  default:
   return &VAR_1;
  }
 } else {
  switch (VAR_7) {
  case 130:
   return &VAR_2;
  default:
   return &VAR_1;
  }
 }
}
