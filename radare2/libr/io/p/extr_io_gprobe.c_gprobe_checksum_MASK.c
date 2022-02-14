
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static ut8 FUNC_0 (const ut8 *VAR_0, unsigned int VAR_1) {
 ut8 VAR_2 = 0;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_2 += VAR_0[VAR_3];
 }

 VAR_2 = ~VAR_2 + 1;

 return VAR_2;
}
