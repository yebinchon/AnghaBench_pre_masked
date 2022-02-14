
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct rc2_state {int* ekey; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static bool FUNC_1(struct rc2_state *VAR_3, const ut8 *VAR_4, int VAR_5) {
 int VAR_6;

 if (VAR_5 < 1 || VAR_5 > 128) {
  return 0;
 }
 FUNC_0(VAR_3->ekey, VAR_4, VAR_5);


  for (VAR_6 = VAR_5; VAR_6 < 128; VAR_6++) {
   ((ut8 *)VAR_3->ekey)[VAR_6] = VAR_1[(((ut8 *)VAR_3->ekey)[VAR_6 - VAR_5] + ((ut8 *)VAR_3->ekey)[VAR_6 - 1]) & 255];
  }

 int VAR_7 = (VAR_0 + 7) >> 3;
 VAR_6 = 128 - VAR_7;
  ((ut8 *)VAR_3->ekey)[VAR_6] = VAR_1[((ut8 *)VAR_3->ekey)[VAR_6] & (255 >> (7 & -VAR_0))];


  while (VAR_6--) {
   ((ut8 *)VAR_3->ekey)[VAR_6] = VAR_1[((ut8 *)VAR_3->ekey)[VAR_6 + 1] ^ ((ut8 *)VAR_3->ekey)[VAR_6 + VAR_7]];
  }


  for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
   VAR_3->ekey[VAR_6] = ((ut8 *)VAR_3->ekey)[VAR_6 * 2] + (((ut8 *)VAR_3->ekey)[VAR_6 * 2 + 1] << 8);
  }

  return 1;
}
