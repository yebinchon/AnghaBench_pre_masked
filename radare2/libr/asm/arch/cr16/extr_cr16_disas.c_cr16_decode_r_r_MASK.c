
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
 scalar_t__ FUNC_3 (struct cr16_cmd*,int) ;
 scalar_t__ FUNC_4 (struct cr16_cmd*,int) ;
 scalar_t__ FUNC_5 (struct cr16_cmd*,int ,int ) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static int FUNC_7(const ut8 *VAR_2, struct cr16_cmd *VAR_3) {
 int VAR_4 = 2;
 ut16 VAR_5;

 VAR_5 = FUNC_6 (VAR_2);

 if (!(VAR_5 & 0x1)) {
  return -1;
 }

 if (((VAR_5 >> 9) != VAR_0) && ((VAR_5 >> 9) != VAR_1)) {
  if (FUNC_4(VAR_3, VAR_5)) {
   return -1;
  }
  FUNC_0(VAR_5, VAR_3);
 } else {
  if (FUNC_3(VAR_3, VAR_5)) {
   return -1;
  }
 }

 if (FUNC_5(VAR_3, FUNC_2(VAR_5), FUNC_1(VAR_5))) {
  return -1;
 }

 return VAR_4;
}
