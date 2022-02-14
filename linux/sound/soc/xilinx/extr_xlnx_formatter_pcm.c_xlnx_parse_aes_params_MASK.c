
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;


 int VAR_3 ;





 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(u32 VAR_8, u32 VAR_9,
      struct device *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14[2];

 if (VAR_8 & VAR_0) {
  VAR_14[0] = VAR_8 & 0xff;
  VAR_14[1] = (VAR_8 >> 16) & 0xff;

  switch (VAR_14[0] & VAR_1) {
  case 146:
   VAR_12 = 44100;
   break;
  case 145:
   VAR_12 = 48000;
   break;
  case 147:
   VAR_12 = 32000;
   break;
  case 144:
  default:
   VAR_12 = VAR_7;
   break;
  }

  switch (VAR_14[1] & VAR_2) {
  case 137:
  case 143:
   VAR_11 = 0;
   break;
  case 142:
   VAR_11 = 4;
   break;
  default:
   VAR_13 = VAR_7;
   goto log_params;
  }

  switch (VAR_14[1] & VAR_3) {
  case 141:
   VAR_13 = 16 + VAR_11;
   break;
  case 140:
   VAR_13 = 18 + VAR_11;
   break;
  case 139:
   VAR_13 = 19 + VAR_11;
   break;
  case 138:
   VAR_13 = 20 + VAR_11;
   break;
  case 137:
  default:
   VAR_13 = VAR_7;
   break;
  }

 } else {
  VAR_14[0] = (VAR_8 >> 24) & 0xff;
  VAR_14[1] = VAR_9 & 0xff;

  switch (VAR_14[0] & VAR_4) {
  case 135:
   VAR_12 = 44100;
   break;
  case 134:
   VAR_12 = 48000;
   break;
  case 136:
   VAR_12 = 32000;
   break;
  default:
   VAR_12 = VAR_7;
   break;
  }

  if (VAR_14[1] & VAR_5)
   VAR_11 = 4;
  else
   VAR_11 = 0;

  switch (VAR_14[1] & VAR_6) {
  case 133:
   VAR_13 = 16 + VAR_11;
   break;
  case 131:
   VAR_13 = 18 + VAR_11;
   break;
  case 130:
   VAR_13 = 19 + VAR_11;
   break;
  case 129:
   VAR_13 = 20 + VAR_11;
   break;
  case 132:
   VAR_13 = 17 + VAR_11;
   break;
  case 128:
  default:
   VAR_13 = VAR_7;
   break;
  }
 }

log_params:
 if (VAR_12 != VAR_7)
  FUNC_0(VAR_10, "sample rate = %d\n", VAR_12);
 else
  FUNC_0(VAR_10, "sample rate = unknown\n");

 if (VAR_13 != VAR_7)
  FUNC_0(VAR_10, "bit_depth = %d\n", VAR_13);
 else
  FUNC_0(VAR_10, "bit_depth = unknown\n");
}
