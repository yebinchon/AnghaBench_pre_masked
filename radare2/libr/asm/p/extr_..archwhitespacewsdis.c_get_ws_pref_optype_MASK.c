
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(const ut8 *VAR_5, int VAR_6) {
 if (VAR_6 < 1) {
  return VAR_4;
 }
 switch (VAR_5[0]) {
 case ' ': return VAR_3;
 case '\t': return VAR_2;
 case 10: return VAR_0;
 default: return VAR_1;
 }
}
