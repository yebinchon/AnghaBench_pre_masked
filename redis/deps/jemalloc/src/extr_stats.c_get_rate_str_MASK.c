
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static bool
FUNC_2(uint64_t VAR_1, uint64_t VAR_2, char VAR_3[6]) {
 if (VAR_2 == 0 || VAR_1 > VAR_2) {

  return 1;
 }
 if (VAR_1 > 0) {
  FUNC_0(VAR_0 / VAR_1 >= 1000);
 }

 unsigned VAR_4 = (unsigned)((VAR_1 * 1000) / VAR_2);
 if (VAR_4 < 10) {
  FUNC_1(VAR_3, 6, "0.00%u", VAR_4);
 } else if (VAR_4 < 100) {
  FUNC_1(VAR_3, 6, "0.0%u", VAR_4);
 } else if (VAR_4 < 1000) {
  FUNC_1(VAR_3, 6, "0.%u", VAR_4);
 } else {
  FUNC_1(VAR_3, 6, "1");
 }

 return 0;
}
