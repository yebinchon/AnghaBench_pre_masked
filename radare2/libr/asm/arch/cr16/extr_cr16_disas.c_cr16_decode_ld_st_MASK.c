
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct cr16_cmd {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct cr16_cmd*,int) ;
 int FUNC_4 (struct cr16_cmd*,int,int,int) ;
 int FUNC_5 (struct cr16_cmd*,int,int,int,int) ;
 int FUNC_6 (struct cr16_cmd*,int,int,int,int) ;
 int FUNC_7 (struct cr16_cmd*,int,int,int,int) ;
 int FUNC_8 (struct cr16_cmd*,int,int) ;
 int FUNC_9 (struct cr16_cmd*,int,int,int) ;
 int FUNC_10 (int const*,int) ;
 int FUNC_11 (int const*) ;

__attribute__((used)) static inline int FUNC_12(const ut8 *VAR_0, struct cr16_cmd *VAR_1) {
 int VAR_2 = 2;
 ut32 VAR_3;
 ut16 VAR_4;

 ut16 VAR_5 = FUNC_11 (VAR_0);

 if (FUNC_3(VAR_1, VAR_5)) {
  return -1;
 }

 switch (FUNC_1(VAR_5) & (~0x20)) {
 case 0x04:
  VAR_2 = 4;
  if ((VAR_5 & 0xC0) != 0xC0) {
   VAR_2 = -1;
   break;
  }
  VAR_4 = FUNC_10 (VAR_0, 2);

  VAR_3 = VAR_4 | ((VAR_5 & 0x0100) << 9) | ((VAR_5 & 0x0020) << 11);

  FUNC_8(VAR_1, FUNC_2(VAR_5), VAR_3);
  break;
 case 0x05:
  VAR_2 = 4;
  VAR_4 = FUNC_10 (VAR_0, 2);

  if (FUNC_9(VAR_1, FUNC_2(VAR_5),
    VAR_4, FUNC_0(VAR_5) & 0x9)) {
   return -1;
  }
  break;
 case 0x45:
  if (!(VAR_5 & 0x1) || ((VAR_5 >> 6) & 0x3) != 0x3) {
   VAR_2 = -1;
   break;
  }
  if (FUNC_9(VAR_1, FUNC_2(VAR_5), 0,
     FUNC_0(VAR_5) & 0x9)) {
    return -1;
  }
  break;
 default:
  VAR_2 = -1;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch ((VAR_5 >> 11) & (~0x4)) {
 case 0x12:
  VAR_2 = 4;
  if (!(VAR_5 & 1)) {
   VAR_2 = -1;
   break;
  }
  VAR_4 = FUNC_10 (VAR_0, 2);
  VAR_3 = VAR_4 | (((VAR_5 >> 9) & 0x3) << 16);

  FUNC_7(VAR_1, VAR_3, FUNC_2(VAR_5),
    FUNC_0(VAR_5), 0);
  break;

 case 0x13:
  VAR_2 = 4;
  VAR_4 = FUNC_10 (VAR_0, 2);
  VAR_3 = VAR_4 | (((VAR_5 >> 9) & 0x3) << 16);

  if (FUNC_2(VAR_5) == 0xF) {
   FUNC_4(VAR_1, VAR_3, FUNC_0(VAR_5), 0);
  } else {
   FUNC_5(VAR_1, VAR_3, FUNC_2(VAR_5),
     FUNC_0(VAR_5), 0);
  }
  break;
 case 0x1B:
  VAR_2 = 4;
  VAR_4 = FUNC_10 (VAR_0, 2);
  VAR_3 = VAR_4 | (((VAR_5 >> 9) & 0x3) << 16);

  if (FUNC_2(VAR_5) == 0xF) {
   FUNC_4(VAR_1, VAR_3, FUNC_0(VAR_5), 1);
  } else {
   FUNC_5(VAR_1, VAR_3, FUNC_0(VAR_5),
     FUNC_2(VAR_5), 1);
  }
  break;
 case 0x1A:
  VAR_2 = 4;
  VAR_4 = FUNC_10 (VAR_0, 2);
  VAR_3 = VAR_4 | (((VAR_5 >> 9) & 0x3) << 16);

  FUNC_7(VAR_1, VAR_3, FUNC_2(VAR_5),
    FUNC_0(VAR_5), 1);

  break;
 default:
  VAR_2 = -1;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch (VAR_5 >> 14) {
 case 0x3:
  VAR_2 = 2;
  VAR_4 = (VAR_5 & 0x1) | ((VAR_5 >> 8) & 0x1E);
  FUNC_6 (VAR_1, FUNC_2 (VAR_5),
    VAR_4, FUNC_0 (VAR_5), 1);
  break;
 case 0x2:
  VAR_2 = 2;
  VAR_4 = (VAR_5 & 0x1) | ((VAR_5 >> 8) & 0x1E);
  FUNC_6 (VAR_1, FUNC_2 (VAR_5),
    VAR_4, FUNC_0 (VAR_5), 0);
  break;
 default:
  VAR_2 = -1;
 }
 return VAR_2;
}
