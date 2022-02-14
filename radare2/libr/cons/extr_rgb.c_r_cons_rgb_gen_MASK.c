
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int st8 ;
typedef int RConsColorMode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,size_t,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(RConsColorMode VAR_1, char *VAR_2, size_t VAR_3, ut8 VAR_4, ut8 VAR_5, ut8 VAR_6, ut8 VAR_7, ut8 VAR_8,
                           st8 VAR_9) {
 ut8 VAR_10 = (VAR_5 == VAR_0)? 48: 38;

 if (VAR_3 < 4) {
  if (VAR_3 > 0) {
   VAR_2[0] = '\0';
  }
  return;
 }

 size_t VAR_11 = 2;
 VAR_2[0] = '\x1b';
 VAR_2[1] = '[';
 for (; VAR_4; VAR_4 &= VAR_4 - 1) {
  if (VAR_3 < VAR_11 + 4) {
   VAR_2[0] = '\0';
   return;
  }
  switch (VAR_4 & -VAR_4) {
  case 131: VAR_2[VAR_11] = '1'; break;
  case 130: VAR_2[VAR_11] = '2'; break;
  case 129: VAR_2[VAR_11] = '3'; break;
  case 128: VAR_2[VAR_11] = '4'; break;
  case 132: VAR_2[VAR_11] = '5'; break;
  }
  VAR_2[VAR_11 + 1] = ';';
  VAR_11 += 2;
 }

 int VAR_12 = -1;
 switch (VAR_1) {
 case 133:
  VAR_12 = FUNC_1 (VAR_2 + VAR_11, VAR_3 - VAR_11, "%d;5;%dm", VAR_10, FUNC_0 (VAR_6, VAR_7, VAR_8));
  break;
 case 134:
  VAR_12 = FUNC_1 (VAR_2 + VAR_11, VAR_3 - VAR_11, "%d;2;%d;%d;%dm", VAR_10, VAR_6, VAR_7, VAR_8);
  break;
 case 135: {
  ut8 VAR_13, VAR_14;
  VAR_10 -= 8;
  if (VAR_9 >= 0 && VAR_9 <= 15) {
   VAR_14 = VAR_9 % 8;
   VAR_13 = VAR_9 >= 8 ? 60 : 0;
  } else {
   VAR_13 = (VAR_6 == 0x80 && VAR_7 == 0x80 && VAR_8 == 0x80) ? 53
            : (VAR_6 == 0xff || VAR_7 == 0xff || VAR_8 == 0xff) ? 60 : 0;
   if (VAR_6 == VAR_7 && VAR_7 == VAR_8) {
    VAR_6 = (VAR_6 > 0x7f) ? 1 : 0;
    VAR_7 = (VAR_7 > 0x7f) ? 1 : 0;
    VAR_8 = (VAR_8 > 0x7f) ? 1 : 0;
   } else {
    ut8 VAR_15 = (VAR_6 + VAR_7 + VAR_8) / 3;
    VAR_6 = (VAR_6 >= VAR_15) ? 1 : 0;
    VAR_7 = (VAR_7 >= VAR_15) ? 1 : 0;
    VAR_8 = (VAR_8 >= VAR_15) ? 1 : 0;
   }
   VAR_14 = (VAR_6 ? 1 : 0) + (VAR_7 ? (VAR_8 ? 6 : 2) : (VAR_8 ? 4 : 0));
  }
  VAR_12 = FUNC_1 (VAR_2 + VAR_11, VAR_3 - VAR_11, "%dm", VAR_10 + VAR_13 + VAR_14);
  break;
 }
 default:
  break;
 }

 if (VAR_12 < 0 || VAR_12 >= VAR_3 - VAR_11) {
  VAR_2[0] = '\0';
 }
}
