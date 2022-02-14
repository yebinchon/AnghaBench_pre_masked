
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef int st32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static ut32 FUNC_2(const char *VAR_1) {
 ut64 VAR_2 = FUNC_1 (VAR_1);
 if (VAR_0) {
  return 0;
 }

 st32 VAR_3 = 0;
 ut64 VAR_4 = 0;
 if (VAR_2 <= 0xff) {
  return VAR_2 << 8;
 } else if ( ((VAR_2 & 0xff00ff00) == 0) && ((VAR_2 & 0x00ff0000) == ((VAR_2 & 0x000000ff) << 16)) ) {
  VAR_4 |= (VAR_2 & 0x000000ff) << 8;
  VAR_4 |= 0x00000010;
  return VAR_4;
 } else if ( ((VAR_2 & 0x00ff00ff) == 0) && ((VAR_2 & 0xff000000) == ((VAR_2 & 0x0000ff00) << 16)) ) {
  VAR_4 |= VAR_2 & 0x0000ff00;
  VAR_4 |= 0x00000020;
  return VAR_4;
 } else if ( ((VAR_2 & 0xff000000) == ((VAR_2 & 0x00ff0000) << 8)) && ((VAR_2 & 0xff000000) == ((VAR_2 & 0x0000ff00) << 16)) && ((VAR_2 &0xff000000) == ((VAR_2 & 0x000000ff) << 24)) ) {
  VAR_4 |= VAR_2 & 0x0000ff00;
  VAR_4 |= 0x00000030;
  return VAR_4;
 } else {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 != -1) {
          VAR_4 |= ((VAR_2 >> (24-VAR_3)) & 0x0000007f) << 8;
   VAR_4 |= ((8+VAR_3) & 0x1) << 15;
   VAR_4 |= ((8+VAR_3) & 0xe) << 3;
   VAR_4 |= ((8+VAR_3) & 0x10) << 14;
   return VAR_4;
  } else {
   VAR_0 = 1;
   return 0;
  }
 }
}
