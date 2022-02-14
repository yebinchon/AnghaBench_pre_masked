
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int LONGEST ;


 int FUNC_0 (char*,int) ;

LONGEST
FUNC_1 (const ut8 *VAR_0, int VAR_1, int VAR_2) {
 LONGEST VAR_3;
 const ut8 *VAR_4;
 const ut8 *VAR_5 = VAR_0;
 const ut8 *VAR_6 = VAR_5 + VAR_1;

 if (VAR_1 > (int)sizeof(LONGEST))
  FUNC_0 (
   "This operation is not available on integers of more than %d byte(s)\n",
   (int)sizeof(LONGEST));



 if (VAR_2) {
  VAR_4 = VAR_5;

  VAR_3 = ((LONGEST)*VAR_4 ^ 0x80) - 0x80;
  for (++VAR_4; VAR_4 < VAR_6; ++VAR_4)
   VAR_3 = (VAR_3 << 8) | *VAR_4;
 } else {
  VAR_4 = VAR_6 - 1;

  VAR_3 = ((LONGEST)*VAR_4 ^ 0x80) - 0x80;
  for (--VAR_4; VAR_4 >= VAR_5; --VAR_4)
   VAR_3 = (VAR_3 << 8) | *VAR_4;
 }
 return VAR_3;
}
