
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static ut32 FUNC_0 (const ut8 *VAR_2, ut32 VAR_3) {
 if (!VAR_2 || VAR_3 < 3) {
  return 0;
 }
 const ut8* VAR_4 = VAR_2 + 2;
 const ut8* VAR_5 = VAR_2 + (VAR_3 - 3);
 while (VAR_4 < VAR_5) {
  if (!VAR_4[0] && !VAR_4[1]) {
   break;
  }
  if (VAR_4[0] == 0x80 && (VAR_4[-1] & VAR_0) == VAR_1) {
   VAR_4 --;
   int VAR_6 = FUNC_0 (VAR_4, VAR_5 - VAR_4);
   if (VAR_6 < 1) {
    break;
   }
   VAR_4 += VAR_6;
  }
  VAR_4 ++;
 }
 return (VAR_4 - VAR_2) + 2;
}
