
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int UCDRecord ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int const* VAR_5 ;

__attribute__((used)) static const UCDRecord *FUNC_0(uint32_t VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 >= 0x110000)
  VAR_7 = 0;
 else {
  VAR_7 = VAR_2[VAR_6 >> (VAR_0+VAR_1)] << VAR_0;
  VAR_8 = (VAR_6 >> VAR_1) & ((1<<VAR_0) - 1);
  VAR_7 = VAR_3[VAR_7 + VAR_8] << VAR_1;
  VAR_8 = VAR_6 & ((1<<VAR_1) - 1);
  VAR_7 = VAR_4[VAR_7 + VAR_8];
 }

 return &VAR_5[VAR_7];
}
