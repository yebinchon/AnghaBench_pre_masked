
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RRune ;


 int FUNC_0 (int const*,int,int*) ;

__attribute__((used)) static char FUNC_1(const ut8 *VAR_0, ut64 VAR_1) {
 ut64 VAR_2 = 0;
 int VAR_3, VAR_4;
 char VAR_5 = 0;

 if (!VAR_0) {
  return '?';
 }
 while (VAR_2 < VAR_1) {
  VAR_3 = FUNC_0 (VAR_0 + VAR_2, VAR_1 - VAR_2, ((void*)0));
  if (!VAR_3) {
   VAR_2++;
   continue;
  }
  if (VAR_2 + VAR_3 + 2 < VAR_1 &&
  VAR_0[VAR_2 + VAR_3 + 0] == 0x00 &&
  VAR_0[VAR_2 + VAR_3 + 1] == 0x00 &&
  VAR_0[VAR_2 + VAR_3 + 2] == 0x00) {
   VAR_5 = 'w';
  } else {
   VAR_5 = 'a';
  }
  for (VAR_3 = VAR_4 = 0; VAR_2 < VAR_1; VAR_4 += VAR_3) {
   RRune VAR_6;
   if (VAR_5 == 'w') {
    if (VAR_2 + 1 < VAR_1) {
     VAR_6 = VAR_0[VAR_2 + 1] << 8 | VAR_0[VAR_2];
     VAR_3 = 2;
    } else {
     break;
    }
   } else {
    VAR_3 = FUNC_0 (VAR_0 + VAR_2, VAR_1 - VAR_2, &VAR_6);
    if (VAR_3 > 1) {
     VAR_5 = 'u';
    }
   }

   if (!VAR_3) {
    VAR_2++;
    break;
   }
   VAR_2 += VAR_3;
  }
 }
 return VAR_5;
}
