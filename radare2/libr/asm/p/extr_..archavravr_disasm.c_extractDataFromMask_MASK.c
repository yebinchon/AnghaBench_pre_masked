
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint16_t VAR_0, uint16_t VAR_1) {
 int VAR_2, VAR_3;
 uint16_t VAR_4 = 0;



 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 16; VAR_2++) {

  if (VAR_1 & (1<<VAR_2)) {



   if (((VAR_1 & (1<<VAR_2)) & VAR_0) != 0)
    VAR_4 |= (1<<VAR_3);

   VAR_3++;
  }
 }

 return VAR_4;
}
