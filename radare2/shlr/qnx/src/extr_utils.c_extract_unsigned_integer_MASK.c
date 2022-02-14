
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ULONGEST ;
typedef int LONGEST ;


 int FUNC_0 (char*,int) ;

ULONGEST
FUNC_1 (const ut8 *VAR_0, int VAR_1, int VAR_2) {
 ULONGEST VAR_3;
 const ut8 *VAR_4;
 const ut8 *VAR_5 = VAR_0;
 const ut8 *VAR_6 = VAR_5 + VAR_1;

 if (VAR_1 > (int)sizeof(LONGEST))
  FUNC_0 (
   "This operation is not available on integers of more than %d byte(s)\n",
   (int)sizeof(LONGEST));



 VAR_3 = 0;
 if (VAR_2) {
  for (VAR_4 = VAR_5; VAR_4 < VAR_6; ++VAR_4)
   VAR_3 = (VAR_3 << 8) | *VAR_4;
 } else {
  for (VAR_4 = VAR_6 - 1; VAR_4 >= VAR_5; --VAR_4)
   VAR_3 = (VAR_3 << 8) | *VAR_4;
 }
 return VAR_3;
}
