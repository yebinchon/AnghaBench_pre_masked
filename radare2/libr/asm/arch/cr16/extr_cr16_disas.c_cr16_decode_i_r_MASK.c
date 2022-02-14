
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cr16_cmd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct cr16_cmd*,int) ;
 scalar_t__ FUNC_5 (struct cr16_cmd*,int) ;
 int FUNC_6 (struct cr16_cmd*,int,int) ;
 int FUNC_7 (struct cr16_cmd*,int,int) ;
 int FUNC_8 (struct cr16_cmd*,int,int) ;
 int FUNC_9 (struct cr16_cmd*,int,int) ;
 int FUNC_10 (int const*,int) ;
 int FUNC_11 (int const*) ;

__attribute__((used)) static inline int FUNC_12(const ut8 *VAR_2, struct cr16_cmd *VAR_3)
{
 int VAR_4 = 2;
 ut16 VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_11 (VAR_2);

 if (VAR_5 == 0x0200) {
  return -1;
 }

 if (((VAR_5 >> 9) != VAR_0) && ((VAR_5 >> 9) != VAR_1)) {
  if (FUNC_5(VAR_3, VAR_5)) {
   return -1;
  }
  FUNC_0(VAR_5, VAR_3);
 } else {
  if (FUNC_4(VAR_3, VAR_5)) {
   return -1;
  }
 }

 switch((VAR_5 & 0x1F) ^ 0x11) {
 case 0:
  if ((VAR_5 & 0x1) == 0x1) {
   VAR_6 = FUNC_10 (VAR_2, 2);
   VAR_4 = 4;
  } else {
   VAR_6 = FUNC_3(VAR_5);
  }
  if (((VAR_5 >> 9) != VAR_0) && ((VAR_5 >> 9) != VAR_1)) {
   if (FUNC_6(VAR_3, VAR_6, FUNC_2(VAR_5))) {
    return -1;
   }
  } else {
   if (FUNC_7(VAR_3, VAR_6, FUNC_2(VAR_5))) {
    return -1;
   }
  }
  break;
 default:
  VAR_7 = FUNC_2(VAR_5);

  if (FUNC_1(VAR_7)) {
   VAR_4 = -1;
   break;
  }

  if (((VAR_5 >> 9) != VAR_0) && ((VAR_5 >> 9) != VAR_1)) {
   if (FUNC_9(VAR_3, FUNC_3(VAR_5),
      FUNC_2(VAR_5))) {
    return -1;
   }
  } else {
   if (FUNC_8(VAR_3, FUNC_3(VAR_5),
      FUNC_2(VAR_5))) {
    return -1;
   }
  }
  break;
 }

 return VAR_4;
}
