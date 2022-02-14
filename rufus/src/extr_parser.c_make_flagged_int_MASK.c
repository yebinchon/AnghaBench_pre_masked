
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static size_t FUNC_0(unsigned long VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 BOOL VAR_5 = VAR_0;
 int VAR_6;

 for (VAR_6 = 28; VAR_6 > 0; VAR_6 -= 7) {
  if (VAR_5 || VAR_2 >= ((unsigned long)1 << VAR_6)) {
   VAR_3[VAR_4++] = (uint8_t) (0x80 | (VAR_2 >> VAR_6));
   VAR_2 -= (VAR_2 >> VAR_6) << VAR_6;
   VAR_5 = VAR_1;
  }
 }
 VAR_3[VAR_4++] = (uint8_t) VAR_2;
 return VAR_4;
}
