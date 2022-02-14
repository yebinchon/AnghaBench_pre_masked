
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0 (ut8 VAR_1) {
 ut8 VAR_2 = (VAR_1 & 0xf0)>>4;
 int VAR_3 = VAR_0[VAR_2];
 if (VAR_3 == 3) {
  VAR_3 = (VAR_1 & 1) ? 1 : 2;
 }
 return VAR_3;
}
