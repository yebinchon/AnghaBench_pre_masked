
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int VAR_0 ;

int FUNC_0(const ut8 *VAR_1, int VAR_2) {
 int VAR_3 = 1, VAR_4 = *(VAR_1++);
 while (VAR_4 > 0x7f && VAR_3 <= VAR_0 && VAR_3 < VAR_2) {
  VAR_4 = *(VAR_1++);
  VAR_3++;
 }
 return VAR_3;
}
