
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pc; } ;
typedef TYPE_1__ RAsm ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, const char *VAR_1, int VAR_2, uint32_t *VAR_3) {
 int VAR_4 = -1;
 int VAR_5;

 switch (VAR_2) {
 case 139:
  *VAR_3 = FUNC_1(VAR_1);
  if (*VAR_3 > 0) {
   VAR_4 = 0;
  }
  break;
 case 138:
  *VAR_3 = FUNC_1(VAR_1);

  if (*VAR_3 >= 12) {
   *VAR_3 -= 12;
   VAR_4 = 0;
  }
  break;
 case 149:
 case 136:
  VAR_5 = FUNC_0 (VAR_0, VAR_1);




  if(VAR_0->pc || (VAR_1[0] != '+' && VAR_1[0] != '-')) {


   VAR_5 -= VAR_0->pc + 2;
  }
  VAR_5 /= 2;
  if (VAR_5 >= -64 && VAR_5 <= 63) {
   VAR_4 = 0;
  }
  *VAR_3 = VAR_5;
  break;
 case 145:
 case 150:
 case 146:
 case 144:
 case 147:
  *VAR_3 = FUNC_0(VAR_0, VAR_1);
  VAR_4 = 0;
  break;
 case 148:
  *VAR_3 = FUNC_0(VAR_0, VAR_1);
  *VAR_3 = ~(*VAR_3) & 0xFF;
  VAR_4 = 0;
  break;
 case 143:
 case 135:
 case 134:
 case 142:
 case 133:
 case 132:
 case 141:
 case 130:
 case 129:
  *VAR_3 = 0;
  VAR_4 = 0;
  break;

 case 131:
 case 128:
  if (FUNC_2(VAR_1) > 2) {


   *VAR_3 = FUNC_0(VAR_0, VAR_1 + 2);
   VAR_4 = 0;
  }
  break;

 case 140:
  if (FUNC_2(VAR_1) > 1) {

   *VAR_3 = FUNC_0(VAR_0, VAR_1 + 1);
   if (*VAR_3 <= 32) {
    VAR_4 = 0;
   }
  }
  break;
 case 137:
  if (FUNC_2(VAR_1) > 1) {

   *VAR_3 = FUNC_0(VAR_0, VAR_1 + 1);
   if (*VAR_3 >= 16 && *VAR_3 <= 32) {
    *VAR_3 -= 16;
    VAR_4 = 0;
   }
  }
  break;
 default:
  VAR_4 = -1;
 }

 return VAR_4;
}
