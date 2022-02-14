
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int,int *,int) ;

void FUNC_1(const void *VAR_0, size_t VAR_1, bool VAR_2) {
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  ut8 VAR_4 = ((ut8*) VAR_0)[VAR_2 ? (VAR_1 - VAR_3 - 1) : VAR_3];
  FUNC_0 (1, &VAR_4, 1);
 }
}
