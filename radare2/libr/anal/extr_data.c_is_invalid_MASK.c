
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_0, int VAR_1) {
 if (VAR_1 < 1) {
  return 1;
 }
 if (VAR_1 > 8) {
  VAR_1 = 8;
 }
 return (!FUNC_0 (VAR_0, "\xff\xff\xff\xff\xff\xff\xff\xff", VAR_1))? 1: 0;
}
